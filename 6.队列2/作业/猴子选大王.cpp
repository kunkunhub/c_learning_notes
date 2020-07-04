/*
2. 猴子选大王
【题目描述】
    有ｎ只猴子，按顺时针方向围成一圈选大王（编号从１到ｎ），从第１号开始报数，一直数到ｍ，
    数到ｍ的猴子退出圈外，剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，
    这个猴子就是猴王，编程求输入ｎ，ｍ后，输出最后猴王的编号。
输入：每行是用空格分开的两个整数，
第一个是 n, 第二个是 m ( 0 < m,n <=300)。
输出：最终剩下的那只猴子编号。
【样例输入】
 5 3
【样例输出】
 4
*/
#include<iostream>
using namespace std;
int q[1001];
int main(){
    int n, m, front=0, rear=0, x, ans;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        q[i] = i+1;
    rear=n;
    while(rear!=front){
        for(int i=1;i<m;i++){
            x=q[front];
            front=(front+1)%n;
            q[rear]=x;
            rear=(rear+1)%n;
        }
        ans=q[front];
        front=(front+1)%n;
    }
    cout<<ans<<endl;
    return 0;
}