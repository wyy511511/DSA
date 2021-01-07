// new yxc acwing 804是802不是804
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;
const int N = 300010;
//插入一个坐标 查询两个坐标 n+2n 乘10万


int n , m;
int a[N], s[N];
vector<int> alls;
vector<PII> add, query;

//映射到从1开始的自然数 因为要用到前缀和
int find(int x){
    int l = 0, r= alls.size()-1;
    while(l<r){
        int mid = l+r >> 1; //l+r本来+左右有空格也过不去
        if(alls[mid]>=x) r = mid;
        else l = mid +1;
    }
    return r+1;//映射到从1开始的自然数 因为要用到前缀和 好做 边界简单一些 
}


int main(){
    //要读进来所有操作 所以上去写typedef
    cin >>n >>m;
    for(int i = 0; i < n;i++){
        int x,c;
        cin>>x>>c;
        add.push_back({x,c});

        alls.push_back(x);
    }

    for(int i = 0; i < m;i++){
        int l,r;
        cin>>l>>r;
        query.push_back({l,r}); //pair开大括号 

        alls.push_back(l);
        alls.push_back(r);
    }
    //去重复 先排序 再去掉重复元素 
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()), alls.end());//返回数组最后一个位置
    //去写func find

    //  处理插入
    for(auto item : add)
    {
        int x = find(item.first);//每个pair都有first second
        a[x] += item.second;
    }
    
    //预处理前缀和，这里一开始少了个等于所以错了，因为是alls.size。后来这里小于和等于之间有个空格也过不去
    for(int i =1; i<=alls.size();i++)
        s[i] = s[i-1] +a[i];

    //处理询问
    for(auto item : query){
        int l = find(item.first), r = find(item.second);
        cout <<s[r]-s[l-1]<<endl;
    }

    return 0;
     
}


//写unique函数 java python得参考这种   老师的打卡是这种的 

vector<int>::iterator unique(vector<int> &a){
    int j = 0;
    for(int i = 0; i < a.size();i++){
        if(!i||a[i]!=a[i-1])
            a[j++]=a[i]
    }

    //从0到j-1存的都是不同的 a[0]~a[j-1] 即是所有a中不重复的数字
    return a.begin()+j;
}


//new yxc acwing803 https://www.acwing.com/activity/content/code/content/40108/ y总主要用了scanf

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

typedef pair<int,int> PII;//区间左右端点存储

const int N = 100010;

int n;
vector<PII> segs;

void merge(vector<PII> &segs){
    vector<PII> res;
    sort(segs.begin(),segs.end());

    int st = -2e9,ed = -2e9;//注意看一下题目的
    for(auto seg :segs)
        if(ed<seg.first){
            if(st!= -2e9) res.push_back({st,ed});
            st = seg.first, ed = seg.second;
        }else{
            ed = max(ed,seg.second);
        }

    if(st!=-2e9) res.push_back({st,ed});
//刚开始自己给这里乱加循环错了
    segs = res;
    
}


int main(){
    cin>>n;
    
    for( int i = 0; i < n;i++){
            int l,r;
            cin>>l>>r;
            segs.push_back({l,r});
    }
    //区间合并模板 面试题 美团的笔试题  格子染色 离散化！！

    merge(segs);

    cout << segs.size()<<endl;

    return 0;
}