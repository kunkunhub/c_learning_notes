#include<iostream>
using namespace std;
struct data
{
    string name;
    int v;
}x[100];
int main(){ //�溯��
    //����
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i].name>>x[i].v;
    }
    //����
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(x[j].v<x[j+1].v)
                swap(x[j], x[j+1]);

    //���
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<x[i].name<<'\n';
    }
    return 0;
}