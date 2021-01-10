struct{
    int val;
    Node *next;

}; //不建议用  除非面试

new Node();//非常慢
//改进的话先初始化几个可以 但是跟用数组已经没啥区别了

//
#include <bits/stdc++.h>
using namespace std;
const int 200010;
//head表示头节点的下标 e[i]表示 该节点的值 ne表示下一个节点的next的指针（即下标）是多少 
int head,e[N],ne[N],idx;

//idx表示当前用到了哪个地址，当前已经用到了哪个点  当前可以用的最新的点的下标 

// int main(){
//     int m;
//     cin>>m;
//     while(m--){

//     }



//     return 0;
// }
void init(){
    head = -1;
    idx = 0;//当前可以从0开始用 每一个点都没被分配 
}
// 这里的head是一个指向头节点的指针（不是附加头节点）
// 这里的插入操作就是在第一个节点之前插入一个新的节点 
// 然后把head指针指向这个新的头节点 
int main(){
    //head指向的值就是head
    int m;
    cin>>m;
    while(m--){
        int k,x;
        char op;
        if(op=='H'){
            cin>>x;
            add_to_head(x);
        }else if(op == 'D'){
            cin>>k;
            remove(k);

        }
        else{
            cin>>k>>x;
            add(k,x);
        }
    }
    for (int i = head ; i!=-1 ;i = ne[i])
        cout<<e[i]<<' ';
    cout<<endl;

    return 0;
}

