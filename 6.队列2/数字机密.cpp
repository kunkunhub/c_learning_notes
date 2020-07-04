#include<iostream>
#include<queue>
using namespace std;
int main(){
    string s;
    cin>>s;
    queue<char> q;
    for(int i=0;i<s.length();i++)
        q.push(s[i]);
    while(!q.empty()){
        cout<<q.front();
        q.pop();
        if(q.empty())break;
        q.push(q.front());
        q.pop();
    }
    return 0;
}
