#include<iostream>
using namespace std;
int gcd(int m, int n){
    if(n==0)
        return m;
    return gcd(n, m%n);
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<gcd(gcd(a, b), c)<<" "<<a*b/gcd(a, b)*c/gcd(a*b/gcd(a, b), c);
    return 0;
}