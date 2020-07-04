#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    char c;
    bool b=true;
    do{
        c = getchar();
        if(c!='\n'){
            if(c=='(')
                s.push(c);
            if(c==')'){
                if(s.top()=='(')s.pop();
                else b = false;
            }
            if(c=='[')
                s.push(c);
            if(c==']'){
                if(s.top()=='[')s.pop();
                else b = false;
            }
        }
        else break;
    }while(1);
    if(!s.empty())b = false;
    if(b)cout<<"YES";
    else cout<<"NO";
    return 0;
}