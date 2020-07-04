#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    char c;
    string str;
    cin>>str;
    int len = str.size();
    bool b=true;
    for(int i=0;i<len/2;i++){
        s.push(str[i]);
    }
    for(int i=len-len/2;i<len;i++){
        if(s.top() != str[i])b=false;
        s.pop();
    }
    if(b)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}