/*
5.神奇的清除栈
【问题描述】
    学完栈的知识后，小童和小美一起做了一个有趣的游戏，游戏规定：向栈里面输入n个大写字母（用空格隔开），
    如果输入的字母是C，就需要把前面的字母都删除，最后把剩下的字符按照输入顺序倒序输出,若栈为空，就输出大写字母C。
【输入格式】
    两行，第一行包含一个数字n（0<n<100),第二行包含n个大写字母。
【输出格式】
    若栈为空，输出大写字母C，若不为空，将字母按输入顺序倒序输出。
【输入样例】
    10
    A A A B B C D E F R
【输出样例】
    R F E D
*/
/*
#include<iostream>
using namespace std;
char z[105];
int top = 0;
void push(char c){
    top++;
    z[top] = c;
    return;
}
char pop(){
    return z[top];
}
void clear(){
    top=0;
}
int main(){
    int n;
    char(c);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if (c=='C'){
            clear();
        }else{
            push(c);
        }
    }
    if (top==0)
    {
        cout<<"C";
        return 0;
    }
    for(;top>=0;top--){
        cout<<pop();
    }
    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int top=0,n;
    char stuck[101]={},m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if (m!='C'){
            stuck[++top]=m;
        }else{
            top=0;
        }
    }
    if (top==0){
        cout<<"C"<<endl;
    }else{
        while (top){
            cout<<stuck[top--]<<" ";
        }
    }
    
    return 0;
}