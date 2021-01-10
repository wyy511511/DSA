#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main(){
    cin>>n;
    for(int i = 0;i<n;i++) cin>>a[i];
    nth_element(a,a+n/2,a+n); //编译器自动补全出问题 循环那里的分号  循环遍历中间的等号
    int res = 0;
    for(int i = 0; i<n;i++) res += abs(a[i]-a[n/2]);
    cout << res<<endl;
    return 0;
}

//改一行sort就行 
//全是错误

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 510;
int n;
int f[N][N];//写错成 f[M][N]

int main(){
    cin>>n;
    for(int i = 1;i<=n ;i++)//因为第零行是输入？
        for(int j = 1; j<= i;j++)
            cin>>f[i][j];
    
    for(int i = n-1; i ;i--)//忘记i-- 忘记i
        for(int j = 1; j<= i ;j++)
            f[i][j] += max(f[i+1][j],f[i+1][j+1]);//不要忘记分号
    
    cout<<f[1][1]<<endl;
    return 0;
}

//！！！！！！！！！！错误代码 但这样就知道为啥不能下标0了 基本没法求f[i][j]
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 510;
int n;
int f[N][N];

int main(){
    cin>>n;
    for(int i = 0;i<=n ;i++)//因为第零行是输入？
        for(int j = 0; j<= i;j++)
            cin>>f[i][j];
    cout<<f[0][0]<<endl;
    for(int i = n-1; i ;i--)
        for(int j = 1; j<= i ;j++)
            f[i][j] += max(f[i+1][j],f[i+1][j+1]);
    
    cout<<f[0][0]<<endl;

    return 0;
}