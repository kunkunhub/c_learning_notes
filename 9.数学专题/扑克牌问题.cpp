#include<iostream>
using namespace std;
int t[15];
int main(){
    int n;
    for(int i=0;i<25;i++){
        cin>>n;
        t[n]++;
    }
    for(int i=0;i<13;i++){
        if(t[i]==1)
            cout<<i;
    }
    return 0;
}