/*
1. ��Ȥ���˿���
������������
������һ���ƣ��ӵ�һ�ţ���λ�ڶ�����ƣ���ʼ�����������α��Ϊ1~n��
�����ٻ�ʣ������ʱ�������²������ѵ�һ�����ӵ���Ȼ����µĵ�һ�ŷŵ������Ƶ����
���룺һ������n�� ��ʾ�Ƶ�������
�����ÿ���ӵ����Ƶı�ţ��Լ����ʣ�µ��Ƶı�ţ�ÿ��������֮����һ���ո������3��n��100����
���������롿
 7
�����������
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
int main(){             // �溯��
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