#include<iostream>
using namespace std;
double x[100];
int main(){ //面函数
    //输入
    int m, n=0, t;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>t;
        if(t%2==1){
            x[n]=t;
            n++;
        }
    }
        
    //排序
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(x[j]<x[j+1])
                swap(x[j], x[j+1]);
    //输出
    for(int i=0;i<n;i++){
        if(x[i]!=x[i+1])
            cout<<x[i]<<' ';
    }
    return 0;
}