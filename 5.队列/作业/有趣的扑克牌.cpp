/*
1. 有趣的扑克牌
【问题描述】
桌面有一叠牌，从第一张（即位于顶面的牌）开始从上往下依次编号为1~n。
当至少还剩两张牌时进行以下操作：把第一张牌扔掉，然后把新的第一张放到整叠牌的最后。
输入：一个整数n， 表示牌的数量。
输出：每次扔掉的牌的编号，以及最后剩下的牌的编号，每两个数字之间用一个空格隔开（3≤n≤100）。
【样例输入】
 7
【样例输出】
 1  3  5  7  4  2  6
*/
#include<iostream>
using namespace std;
int que[300];
int front, rear;
void push(int x){
    que[rear++]=x;
}
int pop(){
    return que[front++];
}
int main(){             // 面函数
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++)push(i);
    for(int i=0;i<n-1;i++){
        cout<<pop()<<" ";
        push(pop());
    }
    cout<<pop();
    return 0;
}