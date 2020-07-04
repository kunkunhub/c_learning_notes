#include<iostream>
using namespace std;
struct node{
    char v;
    int l,r;
}data[100];
int root=0,cnt;
char c;
int buildtree(int bt){   //������
    cin>>c;
    if(c=='.')return 0; //��
    bt = ++cnt;
    data[bt].v = c;
    data[bt].l=data[bt].r=0;
    data[bt].l=buildtree(bt);
    data[bt].r=buildtree(bt);
    return bt;
}
void postorder(int bt){
    //�������
    if(bt){
        postorder(data[bt].l);
        postorder(data[bt].r);
        cout<<data[bt].v;
    }
}
void poporder(int bt){
    //�������
    if(bt){
        cout<<data[bt].v;
        poporder(data[bt].l);
        poporder(data[bt].r);
    }
}
void midorder(int bt){
    //�������
    if(bt){
        midorder(data[bt].l);
        cout<<data[bt].v;
        midorder(data[bt].r);
    }
}
int main(){
    root=0;
    cnt=0;
    root= buildtree(0);

    postorder(root);
    cout<<endl;

    poporder(root);
    cout<<endl;

    midorder(root);
    cout<<endl;
    return 0;
}