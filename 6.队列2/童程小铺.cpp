#include<iostream>
using namespace std;
int que[200];          //����
int front, rear;        //ָ��
void push(int x){       //���
    if(rear<200){
        que[rear++]=x;  //ͷָ������
    }
    return;
}
int pop(){              //����
    if(rear!=front){
        return que[front++];
    }
}
int longth(){
    return rear-front;  //���г���
}
bool empty(){
    return rear==front; //�Ƿ�Ϊ��
}
int main(){
    string l[100];
    int i=0;
    char c;
    int x;
    while(cin>>c){
        if(c=='O'){
            if(empty()){
                cout<<"-None\n";
            }else{
                cout<<"-"<<pop()<<endl;
            }
        }
        if(c=='I'){
            cin>>x;
            push(x);
        }
    }
    return 0;
}