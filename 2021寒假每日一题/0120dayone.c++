//acwing 1341
//星期几还有公式做法 


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
//上面的一次成功了

//如果按照天来枚举的话
