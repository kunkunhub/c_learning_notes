#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    freopen("dice.in", "r", stdin);
    freopen("dice.out", "w", stdout);
    int a, b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        a+=i*2+1;
        b+=(i+1)*2;
    }
    a=a/2*7;
    b=b/2*7;
    if(a>b){
        cout<<"A";
    }else{
        if(a==b)cout<<"p";
        else cout<<"B";
    }
    return 0;
}