//1432 棋盘挑战
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N =15;//13

int n;
bool col[N],dg[N*2],udg[N*2];
int path[N],ans;
void dfs(int x){
    if(x>n){
        ans ++ ;
        if(ans<=3){
            for(int i = 1;i<=n;i++)
                cout<<path[i]<<' ';            
            cout<<endl;
        }
    return;
    }
    for(int y =1;y<=n;y++)
        if(!col[y]&&!dg[x+y]&&!udg[x-y+n]){
            path[x]=y;
            col[y]=dg[x+y]=udg[x-y+n]=true;
            dfs(x+1);
            col[y]=dg[x+y]=udg[x-y+n]=false;
            path[x]=0;
        }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}


//有错误 
#include <bits/stdc++.h>
using namespace std;

int n;
int f(int num){
    if(num==0) 
        return 1;
    return num*f(num-1);
}
int main(){
    cin>>n;
    int a;
    a=f(n);

    if(a%10==0){
        a=a%10;
    }else a= a/10;
    cout<<a<<endl;

    return 0;
}

//感觉是对的
#include <bits/stdc++.h>
using namespace std;

int n;
int f(int num){
    if(num==0) 
        return 1;
    return num*f(num-1);
}
int main(){
    cin>>n;
    int a;
    a=f(n);
    cout<<a<<endl;

    
    while(a%10==0){
        a=a/10;
    }
    cout<<a%10<<endl;

    return 0;
}
//果然是类型问题 然后TLE
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
LL n;
LL f(LL num){
    if(num==0) 
        return 1;
    return num*f(num-1);
}
int main(){
    cin>>n;
    LL a;
    a=f(n);
    //cout<<a<<endl;

    
    while(a%10==0){
        a=a/10;
    }
    cout<<a%10<<endl;

    return 0;
}