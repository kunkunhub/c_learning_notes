/*
4.push与pop
【问题描述】
    输入n（1<n<20）个数字,将这n个数字按照输入顺序倒序输出。（使用自定义的入栈和出栈函数）
【输入格式】
    共两行，第一行包含一个正整数n，第二行包含n个正整数。
【输出格式】
    一行，包含n个正整数。
【输入样例】
    5
    1 2 3 4 5
【输出样例】
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

