//acwing154滑动窗口 单调队列的例题

#include <iostream>

using namespace std;
const int N = 1000010;

int n;
int a[N], q[N];
int main(){
    //scanf("%d", &n);
    scanf("%d%d", &n, &k);
    for(int i = 0;i<n; i++) scanf("%d", &a[i]);

    int hh = 0, tt = -1;
    for(int i = 0;i < n; i++){
        //判断队头是否滑出了窗口 
        if(hh <= tt && i-k+1>q[hh]) hh++;//因为每次队列里只有一个不在窗口里 写if不写while
        while(hh<= tt && a[q[tt]]>=a[i]) tt--;
        q[++tt] = i;
        if(i >= k - 1 ) print("%d", a[q[hh]]);
        //q[++tt] = i; 刚开始y总写错了
    }
    puts("");//输入回车

    return 0;
}




//acwing831 kmp
#include <iostream>
using namespace std;
const int N = 100010, M =1000010;

int n , m;
int ne[N];// don's use 'next' becaise some head file include 'next' ! ATT x1 y1 are reserved too
char s[M], p[N];

int main(){
    cin>>n>>p+1>>m>>s+1;//s+1 p+1 ?

    for(int i = 2,j=0; i<=n ;i++){
        while(j && p[i]!=p[j+1]) j = ne[j];

        if(p[i] == p[j+1]) j++;
        ne[i] = j;
    }
    for(int i = 1,j=0; i<=m ; i++){
        while(j && s[i]!= p[j+1]) j = ne[j];
        if(s[i]==p[j+1]) j++;
        if(j == n){
            printf("%d ", i-n);
            j = ne[j];
        }
    }
    return 0;
}



#include <iostream>
using namespace std;
const int N = 100010, M = 1000010;

int n, m;
int ne[N];
char s[M], p[N];

int main(){
	cin >> n >> p + 1 >> m >> s + 1;

	for(int i = 2 , j = 0; i<=m;i++){ //这里错了 i<=n
	while(j&& p[i]!=p[j+1]) j=ne[j];
	if(p[i] == p[j+1]) j++;
	ne[i] = j;
	}

	for(int i = 1, j = 0; i<=m;i++){
		while(j&&  s[i] != p [j+1])  j=ne[j];

		if(s[i] == p[j+1]) j++;
		if(j==n){
			printf("%d ", i-n);
			j=ne[j];
		}
	}
	return 0;
}


//acwing 800 双指针
#include <iostream>
using namespace std;
const int N = 1000000010;

int n, m, x;

char a[N], b[N];

int main(){
	cin >> n >> m >> x;
	for(int i = 0; i<=n;i++){
		cin>>a[i];
	}
	for(int i = 0; i<=m;i++){
		cin>>b[i];
	}
	for(int i = 0; i<= n ;i++){
		for(int j = 0; j <= m ; j++ )
			if(a[i] == x- b[i]) cout<<i<<" "<<j;
	}

	return 0;
}

//runtime error


#include <iostream>
using namespace std;
const int N = 1000000010;

int n, m, x;

char a[N];

int main(){
	cin >> n >> m >> x;
	for(int i = 0; i<=n+m;i++){
		scanf("%d", a[i])
	}
	for(int i = 0, j = n+1; i<=n;i++){
		if(a[i]== x -a[j]) cout<<i<<" "<<j;
		

	}

	return 0;
}

//写不下去了 



//acwing 双链表
#include <iostream>
