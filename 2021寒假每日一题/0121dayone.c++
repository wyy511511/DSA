#include <bits/stdc++.h>

using namespace std;

int month[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int weekday[7]={0};//0 monday 直接写了0没加括号

int main(){
    int n=0;
    cin>>n;

    int days=0;
    for(int year = 1900;year<1900+n;year++){
        for(int i=1;i<=12;i++){
            weekday[(days+12)%7]++;
            days+=month[i];
            if(i==2){
                if((year%4==0&&year%100!=0 )|| year%400==0)//写成years了
                days++;
            }
        }
    }

    for(int i=5,j=0;j<7;i=(i+1)%7,j++){
        cout<<weekday[i]<<' ';
    }
    cout<<endl;

    return 0;
}

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//;;;;;
int weekday[7];//0 monday

int main(){

    int n;
    cin>>n;

    int days = 0;
    for(int year=1900;year<1900+n;year++){
        for(int i = 1;i<=12;i++){
            weekday[(days+12)%7]++;
            days+=month[i];
            if(i == 2){
                if(year%100&& year%4 ==0 || year%400 == 0)
                    days++;
            }
        }
    } 

    // for(int i - 5;i!=4;i=(i+1)%7)
    for(int i = 5, j = 0;j<7;i=(i+1)%7,j++)
        cout<< weekday[i] << ' ';
    cout<< endl;

    return 0;
}

//整个就是错的 还不对 再说吧 
#include <bits/stdc++.h>

using namespace std;
const int N=110;
int a[N][N];
int n;
int main(){

    while(cin>>n){
            
        if(n==0){
            cout<<endl;
        }else{
            int m = 2;
            for(int i =0;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(i==j) {
                        a[i][j]=m;
                        m++;
                    }
                    if(i<j)
                        a[i][j]+=1;
                        a[j][i]-=1;
                    }

                }
            }
            for(int i =0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<' ';
                }
                cout<<endl;  
            }
    
        }
       return 0;   

    }

  

//
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int main(){
    while(cin>>n){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++)
                cout <<abs(i-j)+1<<' ';

            cout<<endl;
        }
        if(n) cout<<endl;
    }
    return 0;
}