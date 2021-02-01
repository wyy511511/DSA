#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int f[N][N];
int v[N],w[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =0;i<n;i++) cin>>v[i]>>w[i];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;i++){
            f[i][j]=f[i-1][j];
            if(j>=v[i]) f[i][j]=f[i-1][j-v[i]]+w[i];
        }


    }
    cout<<f[i][j]<<endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int f[N][N];
int v[N],w[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =1;i<=n;i++) cin>>v[i]>>w[i];//i=1

    for(int i =1;i<=n;i++){
        for(int j =0;j<=m;j++){//这里j写成了i
            f[i][j]=f[i-1][j];
            if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
        }


    }
    cout<<f[n][m]<<endl;

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int f[N];
int v[N],w[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =1;i<=n;i++) cin>>v[i]>>w[i];//i=1

    for(int i =1;i<=n;i++){
        for(int j =m;j>=v[i];j--){
             f[j]=max(f[j],f[j-v[i]]+w[i]); //搞笑
        }


    }
    cout<<f[m]<<endl;

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int f[N][N];
int v[N],w[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =1;i<=n;i++) cin>>v[i]>>w[i];//i=1

    for(int i =1;i<=n;i++){
        for(int j =0;j<=m;j++){//这里j写成了i
            f[i][j]=f[i-1][j];
            if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
            cout<<f[i][j]<<' ';
        }
        cout<<endl;

    }

    cout<<f[n][m]<<endl;

    return 0;
}

//有助于理解的代码  好像不太对 
#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int f[N];
int v[N],w[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =1;i<=n;i++) cin>>v[i]>>w[i];//i=1

    for(int i =1;i<=n;i++){
        for(int j =m;j>=v[i];j--){
             cout<<(f[j],f[j-v[i]]+w[i]);
             f[j]=max(f[j],f[j-v[i]]+w[i]); //搞笑
             cout<<f[j]<<' ';
        }
    cout<<endl;

    }
    cout<<f[m]<<endl;

    return 0;
}





//记忆化搜索  滑雪 acwing

#include <cstring>//memset
#include <iostream>
#include <algorithm>

using namespace std;

const int N=310;
int n,m;
int h[N][N];
int f[N][N];

int dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1};

int dp(int x, int y){
    int &v = f[x][y]; //所有写v的地方等价于写了f[x][y]

    if(v!=-1) return v;
    
    v=1;//别漏掉这个 
    for(int i =0;i<4;i++){
        int a = x+dx[i], b= y+dy[i];
        if(a>=1&&a<=n&&b>=1&&b<=m&&h[a][b]<h[x][y])
            v = max(v,dp(a,b)+1);
        
    }
    return v;

}
int main(){
    scanf("%d%d", &n,&m);
    for(int i = 1; i<=n;i++)
        for(int j = 1;j<=m;j++)
            scanf("%d",&h[i][j]);

    memset(f,-1,sizeof f);

    int res = 0;
    //  枚举从每个点出发
    for(int i = 1;i<=n;i++)
        for(int j=1;j<=m;j++)
            res = max(res,dp(i,j));//dp(i,j)是求出来这个状态并且返回
    //f[i][j]还没求出来 dp求出来了
    printf("%d\n",res);

    return 0;

    
}
