#include<iostream>
using namespace std;
int M=1001
int que[M];                         //队列
int front, rear;                    //指针
void push(int x){                   //入队
    if(rear<MAXN){
        que[rear++]=x;              //头指针增加
    }
    return;
}
int pop(){                          //出队
    if(rear!=front){
        return que[front++];
    }
}
//循环队列
int longth(){
    return (rear+1)%M==front%M;     //队列长度
}
bool empty(){
    return rear==front;             //是否为空
}