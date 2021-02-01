#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;
const int N = 110;

int n;
char start[N], aim[N];

void turn(int i){
    if (start[i] == '*') start[i] = 'o';
    else start[i] = '*';
}

int main(){
    cin >> start >> aim;
    n = strlen(start);

    int res = 0;
    for(int i = 0; i < n - 1; i++)
        if(start[i] != aim[i]){
            turn(i), turn(i+1);//忘记；
            res ++;//;;;;;;;;;;;
        }

    cout << res << endl;
    return 0;
}


//acwing104 货仓选址  still wrong
#include <bits/stdc++.h>
using namespace std;
const int N = 40010;
int n;
int a[N];

int main(){
    cin>>n;
    for(int i = 0; i< n;i++) cin>>a[i];
    sort(a,a+n);
    int res = 0;
    for(int i = 0; i< n ;i++) res += abs(a[i]-a[n/2]);
    cout<<res<<endl;



    return 0;
}
