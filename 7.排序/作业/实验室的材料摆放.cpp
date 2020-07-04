#include<iostream>
using namespace std;
double x[100];
int main(){ //面函数
    //输入
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    //排序
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(x[j]<x[j+1])
                swap(x[j], x[j+1]);
    //输出
    for(int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
    return 0;
}