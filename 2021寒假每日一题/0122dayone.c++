3

1 2 3

#include <bits/stdc++.h>
#inlcude <bits/stdc++.h>//这个错的笑掉大牙
using namespace std;
const int N=110;

int main(){
    int n = 0;//和在全局一样 貌似全局默认0
    while(cin>>n,n){
        for(int i =1;i<=n;i++){
            for(int j=i;j>=1;j--) cout<<j<<' ';
            for(int j= i+1;j<=n;j++) cout<<j-i+1<<' ';//不知道是啥的话输出一半看看
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
const int N=110;
int a[N][N];
int n;
int main(){
    while(cin>>n,n){
        for(int i = 1;i<=n;i++){

        }


        cout<<endl;
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
 5 2 
 101

 5/2=2 1
 2/2=1 0
 1/2=0 1

 5/3=1 2
 1/3= 0 1
12 



#include <bits/stdc++.h>
using namespace std;
char get(int x){
    if(x<=9) return x+'0';
    return x-10+'A';
}
string base(int n, int b){
    string num;
    while(n) num+=get(n%b),n/=b;
    reverse(num.brgin(),num.end());
    return num;
}

bool check(string num){
    for(int i =0, j=num.size()-1;i<j;i++,j--)
        if(num[i]!=num[j])
            return false;
        return true;
}
int main(){
    
    int b;
    cin>>b;
    for(int i =1;i<=300;i++){
        auto num = base(i*i,b);
        if(check(num))
            cout<<base(i,b)<<' '<<num<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
char get(int x){
    if(x<=9) return x+'0';
    return x-10+'A';
}
int main(){
    int n=0;
    cin>>n;
    cout<<get(n);
    return 0;
}