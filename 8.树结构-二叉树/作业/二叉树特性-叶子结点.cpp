#include<iostream>
using namespace std;
struct node{
    char v;
    int l,r;
}data[100];
int root=0,cnt;
char c;
int sum=0;
int buildtree(int bt){   //½¨Á¢Ê÷
    cin>>c;
    if(c=='#')return 0; //¿Õ
    bt = ++cnt;
    data[bt].v = c;
    data[bt].l=data[bt].r=0;
    data[bt].l=buildtree(bt);
    data[bt].r=buildtree(bt);
    if(data[bt].l==0&&data[bt].r==0)sum++;
    return bt;
}
int main(){
    root=0;
    cnt=0;
    root= buildtree(0);
    cout<<sum;
    return 0;
}