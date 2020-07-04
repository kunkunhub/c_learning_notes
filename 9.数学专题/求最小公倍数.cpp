#include<iostream>
using namespace std;
int gd(int m, int n){
    if(n==0)
    return m;
    return gd(n, m%n);
}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a*b/(gd(a, b));
    cout<<c<<endl;
}