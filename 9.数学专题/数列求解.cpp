#include<iostream>
using namespace std;
int main(){
    int f[20];
    //直接求整个数列
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=15;i++)
        f[i]=3*f[i-1]+2*f[i-2];
    //输出某项
    int n;
    
    cin>>n;
    cout<<f[n];
    return 0;
}