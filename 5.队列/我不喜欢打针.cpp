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
int main(){             // Ãæº¯Êý
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