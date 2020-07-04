#include<iostream>
using namespace std;
char z[100];
int top=0;
void push(char c){
    top++;
    z[top] = c;
    return;
}
char pop(){
    int tmp=z[top];
    top--;
    return tmp;
}
int main(){
    char c;
    bool b=true;
    for(int i=0;i<6;i++){
        cin>>c;
        push(c);
    }
    for(int i=0;i<6;i++){
        cin>>c;
        if(pop() != c)b=false;
    }
    if (b){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}