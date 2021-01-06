#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int res=0;
        int a;
        cin>>a;
        while(a){
            if(a%2==1)
            res++;
            a=a/2;
        }
        cout<<res<<" ";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int res=0;
        int a;
        cin>>a;
        while(a)
        {
            if(a&1) res++;
            a>>=1;
        }
        cout<<res<<" ";
    }
    return 0;
}
*/

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int n = 10;
    for(int k = 3;k>=0;k--)
    cout<<(n>>k&1);
    return 0;
}

//lowbit方法
#include <iostream>

using namespace std;
int lowbit(int x){
    return x&-x; //不知道这里的空格不对有没有影响
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin >> x;
        int res = 0;
        while(x)
            x-=lowbit(x), res++ ;//每次减去x的最后一位1 
        cout << res <<" ";
    }
    return 0;
}


