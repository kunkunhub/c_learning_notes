#include<iostream>
using namespace std;
struct data
{
    string name;
    int v;
}x[100];
int main(){ //面函数
    //输入
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i].name>>x[i].v;
    }
    //排序
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(x[j].v<x[j+1].v)
                swap(x[j], x[j+1]);

    //输出
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<x[i].name<<'\n';
    }
    return 0;
}