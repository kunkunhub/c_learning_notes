#include<iostream>
using namespace std;
int x[100];int n;
int maxx(int s){
    int m=s;
    for(int i=s+1;i<n;i++){
        if(x[i]>x[m]){
            m=i;
        }
    }
    return m;
}
int main(){ //Ãæº¯Êý
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++){
        swap(x[maxx(i)], x[i]);
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
    return 0;
}