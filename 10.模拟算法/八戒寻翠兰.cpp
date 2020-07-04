#include<iostream>
#include<queue>
using namespace std;
bool o=true;
bool ss(int x){
    for(int i=2;i<x;i++)
        if(x%i==0)return false;
    o=0;
    return true;
}
main(){
    queue<int> out;
    int n=1, x=1, t=0;
    int f=0;
    while(n){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>f)t+=(x-f)*6+5;
            else t+=(f-x)*4+5;
            if(ss(t+x))out.push(x);
            f=x;
        }
        t=0;f=0;
    }
    while(!out.empty()){
        cout<<out.front()<<" ";
        out.pop();
    }
    if(o)cout<<"NO";
}
/*
1 2
3 2 3 1
0

2 2 3
*/