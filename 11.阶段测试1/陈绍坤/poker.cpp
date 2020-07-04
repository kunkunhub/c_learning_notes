#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    freopen("poker.in", "r", stdin);
    freopen("poker.out", "w", stdout);
    char a, b;
    int x, y;
    cin>>a>>x>>b>>y;
    if(x==y)cout<<"legendary";
    else if(a==b)cout<<"especially";
    else cout<<"ordinary";
    return 0;
}