#include<iostream>
using namespace std;
int que[500];          //队列
int front, rear;        //指针
void push(int x){       //入队
    if(rear<500){
        que[rear++]=x;  //头指针增加
    }
    return;
}
int pop(){              //出队
    if(rear!=front){
        return que[front++];
    }
    return -1;
}
int longth(){
    return rear-front;  //队列长度
}
bool empty(){
    return rear==front; //是否为空
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