#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    freopen("pigmate.in", "r", stdin);
    freopen("pigmate.out", "w", stdout);
    int n, sum=0;
    cin>>n;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            sum++;
    cout<<sum;
    return 0;
}
