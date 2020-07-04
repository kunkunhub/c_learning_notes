#include<iostream>
using namespace std;
int x[100], n;
void sort(){
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(x[j]<x[j+1])
                swap(x[j], x[j+1]);
    return;
}
int main(){
    int v, tmp[100];
    for(int i=0;i<10;i++){
        cin>>tmp[i];
        if(tmp[i]%2==1){
            x[n]=tmp[i];
            n++;
        }
    }
    sort();
    for(int i=0;i<n;i++)cout<<x[i]<<' ';
    n=0;
    for(int i=0;i<10;i++){
        if(tmp[i]%2==0){
            x[n]=tmp[i];
            n++;
        }
    }
    sort();
    for(int i=n-1;i>n;i++)cout<<x[i]<<' ';
    return 0;
}