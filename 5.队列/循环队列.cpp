#include<iostream>
using namespace std;
int M=1001
int que[M];                         //����
int front, rear;                    //ָ��
void push(int x){                   //���
    if(rear<MAXN){
        que[rear++]=x;              //ͷָ������
    }
    return;
}
int pop(){                          //����
    if(rear!=front){
        return que[front++];
    }
}
//ѭ������
int longth(){
    return (rear+1)%M==front%M;     //���г���
}
bool empty(){
    return rear==front;             //�Ƿ�Ϊ��
}