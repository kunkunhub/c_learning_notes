#include<iostream>
using namespace std;
int que[200];          //队列
int front, rear;        //指针
void push(int x){       //入队
    if(rear<200){
        que[rear++]=x;  //头指针增加
    }
    return;
}
int pop(){              //出队
    if(rear!=front){
        return que[front++];
    }
}
int longth(){
    return rear-front;  //队列长度
}
bool empty(){
    return rear==front; //是否为空
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