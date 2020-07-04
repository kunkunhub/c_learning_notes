/*
2. 音乐会等待
【问题描述】
    N个人正在排队进入一个音乐会。
    人们等得很无聊，于是他们开始转来转去，想在队伍里寻找自己的熟人。
    队列中任意两个人A和B，如果他们是相邻或他们之间没有人比A或B高，那么他们是可以互相看得见的。
    写一个程序计算出有多少对人可以互相看见。

    输入：
        输入的第一行包含一个整数N (1 ≤ N ≤ 500000), 表示队伍中共有N个人。
        接下来的N行中，每行包含一个整数，表示人的高度，以毫微米(等于10的-9次方米)为单位，
        每个人的调度都小于231毫微米。这些高度分别表示队伍中人的身高。
    输出：
        输出仅有一行，包含一个数S，表示队伍中共有S对人可以互相看见。

【输入样例】
7 
2 
4 
1 
2 
2 
5 
1 
【输出样例】
10
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, m, s=0, j=1;
    cin>>n;
    int x[n+5];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++){
        m=x[i+1];
        s++;
        for(int j=i+2;j<n-1;j++){
            if(x[j]>m)
                m=x[j];
            if(x[j]<m)
                break;
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int st[5000], n, top=1,ans,m;
int main(){
    cin>>n;
    int a;
    cin>>st[1];
    for(int i=2;i<=n;i++){
        cin>>a;
        if(st[top]>a){
            top++,
            ans++,
            st[top]=a;
        }else{
            int r=top;
            while(r!=1&&st[r]<=a)
                r--;
            ans+=top-r+1;
            while(top>0&&st[top]<a)
                top--;
            st[++top]=a;
        }
    }
    cout<<ans<<endl;
    return 0;
}