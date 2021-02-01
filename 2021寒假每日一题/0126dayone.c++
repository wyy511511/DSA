#include<bits/stdc++.h>
using namespace std;
const int N =100010;

int n ;
int w[N];

int main(){
    scanf("%d", &n);
    for(int i =0;i<n;i++) scanf("%d", &w[i]);
    int s1=0, s2 = 0;
    sort(w,w+n);

    for(int i = 0;i<n/2;i++) s1+=w[i];
    for(int i = n/2;i<n;i++) s2+=w[i];

    printf("%d %d\n",n%2,s2-s1);

    return 0;

}
//感觉没太懂证明  还得听一遍

#include<bits/stdc++.h>
using namespace std;

const int N = 1010;

int n;
int h[N];

int main(){
    scanf("%d",&n);
    for(int i = 0;i<n;i++ ) cin >>h[i];
    int res = 1e8;
    for(int i = 0;i<=83;i++){
        int cost =0,l=i,r=i+17;
        for(int j =0;j<n;j++){
            if(h[j]>h[r]) cost+=(h[j]-h[r])*(h[j]-h[r]);//不是h[l]
            if(h[j]<h[l]) cost+=(h[l]-h[j])*(h[l]-h[j]);//一样的错误 
            
        }
        res = min(res, cost);
    
    }
    
    cout<<res<<endl;
    return 0;
}