#include <iostream>
#include <cstdio>
using namespace std;
const int N = 3e4 + 10,M = 30;
int v[M], w[M];
int f[M][N];
int n, m;
int main() {
    cin >> m >> n;
    for(int i = 1; i <= n; i++)  cin >> v[i] >> w[i];
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 0; j <= m; j++) 
        {
            f[i][j] = f[i-1][j];
            
            if(j>=v[i]) {
                cout<<f[i][j]<<' '<< f[i-1][j-v[i]]+v[i]*w[i]<<endl;
                f[i][j] = max(f[i][j], f[i-1][j-v[i]]+v[i]*w[i]);
            }
        }
    }
    cout << f[n][m] << endl;
 return 0;    
}


//输入
5 5
1 2
1 5
2 5
1 3
1 2
//

//输出 
0 2
0 2
0 2
0 2
0 2
2 5
2 7
2 7
2 7
2 7
7 10
7 15
7 17
7 17
5 3
10 8
15 13
17 18
17 20
5 2
10 7
15 12
18 17
20 20
20


#include <iostream>
#include <algorithm>

using namespace std;

const int N = 3e5 + 10;

int n, m;
int f[N];

int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i ++ )
    {
        int v, w;
        cin >> v >> w;
        for (int j = m; j >= v; j -- )  //体积从大往小枚举
            {
                cout<<f[j]<<' '<< f[j - v] + w*v<<endl;
                 f[j] = max(f[j], f[j - v] + w*v);
            }
           
    }
    cout << f[m] << endl;

    return 0;
}
//输出
0 2
0 2
0 2
0 2
0 2
2 7
2 7
2 7
2 7
2 5
7 17
7 17
7 15
7 10
17 20
17 18
15 13
10 8
5 3
20 20
18 17
15 12
10 7
5 2
20


#include <iostream>
#include <algorithm>

using namespace std;

const int N = 3e5 + 10;

int n, m;
int f[N];

int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i ++ )
    {
        int v, w;
        cin >> v >> w;
        for (int j = v; j <= m; j ++ )  //体积从大往小枚举
            {
                cout<<f[j]<<' '<< f[j - v] + w*v<<endl;
                 f[j] = max(f[j], f[j - v] + w*v);
            }
           
    }
    cout << f[m] << endl;

    return 0;
}

0 2
0 4
0 6
0 8
0 10
2 5
4 10
6 15
8 20
10 25
10 10
15 15
20 20
25 25
5 3
10 8
15 13
20 18
25 23
5 2
10 7
15 12
20 17
25 22
25