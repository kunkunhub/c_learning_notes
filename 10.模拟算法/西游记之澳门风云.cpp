#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,m,p[10000]={},b[10000]={};
    cin>>n>>m;
    for(int k=1;k<=2*n;k++) p[k]=k;
    for(int i=1;i<=m;i++){
        for(int k=1;k<=n;k++){
            b[2*k]=p[k];
            b[2*k-1]=p[n+k];
        }
        for(int k=1;k<=2*n;k++)
            p[k]=b[k];
    }
    for(int k=1;k<=2*n;k++){
        cout<<p[k]<<" ";
    }
    return 0;
}
