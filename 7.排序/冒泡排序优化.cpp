#include<iostream>
using namespace std;
int x[100];
int main(){
    //����
    int n;
    bool flag=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    //����
    for(int i=0;i<n;i++){
        flag=true;
        for(int j=0;j<n-i;j++){
            if(x[j]<x[j+1]){
                swap(x[j], x[j+1]);
                flag=false;
            }
        }
        if(flag)break;
    }
    //���
    for(int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
    return 0;
}
