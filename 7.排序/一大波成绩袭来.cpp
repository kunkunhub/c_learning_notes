#include<bits/stdc++.h>
using namespace std;
bool f[105];
int main(){
    int n, x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        f[x] = true;
    }
    for(int i=100;i>0;i--){
        if(f[i]){
            cout<<i<<' ';
        }
    }
    return 0;
}