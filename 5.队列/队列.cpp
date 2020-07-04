/*
* 队列：
* 它只允许在表的前端进行删除操作，在表的后端进行插入操作。
* 队列元素：队列中的数据元素
* 入队：插入一个元素
* 出队：删除一个元素
* 队首：允许删除队列元素的一端
* 队尾：允许插入队列元素的一端
* 头指针：front
* 尾指针：rear
* 基本操作：
*   创建队列
*   入队
*   出队
*/
#include<iostream>
using namespace std;
int MAXN=1001
int que[MAXN];          //队列
int front, rear;        //指针
void push(int x){       //入队
    if(rear<MAXN){
        que[rear++]=x;  //头指针增加
    }
    return;
}
int pop(){              //出队
    if(rear!=front){
        return que[front++];
    }
}
//普通队列
//缺点：头指针和尾指针只会向前增加，可能造成假溢出。
//另见 "循环队列"
int longth(){
    return rear-front;  //队列长度
}
bool empty(){
    return rear==front; //是否为空
}
int main(){             //面函数
    
    return 0;
}