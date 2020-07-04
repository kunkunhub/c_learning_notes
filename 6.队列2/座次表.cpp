#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<string> dq;
    int n, x;
    string name;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>name;
        
        if(x==0) dq.push_back(name);
        else dq.push_front(name);
    }
    cout<<'\n';
    for(int i=0;i<n;i++){
        cout<<dq.back()<<endl;
        dq.pop_back();
    }
    return 0;
}