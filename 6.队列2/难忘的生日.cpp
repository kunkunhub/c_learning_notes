#include<iostream>
using namespace std;
int que[500];          //����
int front, rear;        //ָ��
void push(int x){       //���
    if(rear<500){
        que[rear++]=x;  //ͷָ������
    }
    return;
}
int pop(){              //����
    if(rear!=front){
        return que[front++];
    }
    return -1;
}
int longth(){
    return rear-front;  //���г���
}
bool empty(){
    return rear==front; //�Ƿ�Ϊ��
}
int main(){
    int n, j=0;
    cin>>n;
    for(int i=0;i<n;i++){
        push(i);
    }
    while(1){
        if(longth()==1){
            cout<<pop();
            return 0;
        }
        if(j==3){
            pop();
            j=0;
        }else{
            push(pop());
            
        }
        j++;
        
    }
    return 0;
}