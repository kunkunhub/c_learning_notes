/*
4.push��pop
������������
    ����n��1<n<20��������,����n�����ְ�������˳�����������ʹ���Զ������ջ�ͳ�ջ������
�������ʽ��
    �����У���һ�а���һ��������n���ڶ��а���n����������
�������ʽ��
    һ�У�����n����������
������������
    5
    1 2 3 4 5
�����������
    5 4 3 2 1
*/
#include<iostream>
using namespace std;
int l[30];
int top=0;
void push(int n){
    top++;
    l[top] = n;
    return;
}
int pop(){
    int tmp=l[top];
    top = top-1;
    return tmp;
}
int main(){
    int n, t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        push(t);
    }
    for(int i=0;i<n;i++)
        cout<<pop()<<" ";
    return 0;

}

