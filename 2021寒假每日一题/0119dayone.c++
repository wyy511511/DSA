#include <bits/stdc++.h>

using namespace std;
const int N = 310;
string a, b;

void turn(int i){
    if(a[i]=='*') a[i] = 'o';
    else a[i] = '*';
}

int main(){
    cin>>a>>b;

    int res = 0;
    for(int i = 0; i+1<= a.size();i++){
        if(a[i]!=b[i]){
            res++;
            turn(i),turn(i+1);
        }
    }
    cout << res << endl;
    return 0;
}

//acwing1532自己写的 估计错的 硬币凑钱
#include <bits/stdc++.h>

using namespace std;
const int N = 10010;
int a[N];

int main (){
    int n = 0;
    int m = 0;
    cin>>n>>m;
    sort(a,n);
    for(int i = 0;i<=n;i++) cin>>a[i];
    for(int i = 0;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            if(m-a[i]-a[j]==0){
                cout<<a[i]<<a[i]<<endl;
            }
        }
    }
    
    return 0;
}
//哈希表做法
#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_set>

using namespace std;
const int INF = 10000;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    unordered_set<int> hash;

    int v1 = INF, v2;
    for(int i = 0;i<n;i++){
        int a,b;
        scanf("%d", &a);
        b = m - a;
        if(hash.count(b)){
            hash.insert(a);
            if(a>b) swap(a,b);
            if(a<v1) v1=a, v2=b;
        }
        else hash.insert(a);
    }
    if(v1==INF) puts("No Solution");
    else printf("%d %d\n", v1, v2);

    return 0;
}
//双指针 从小到大排序 再枚举


