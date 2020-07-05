#include <iostream>
using namespace std;
struct node{            //树节点
    char value;
    int left, right;
}data[101];
int root=0, cnt;
char ch;
//建立二叉树
int buildTree(int bt){
    cin>>ch;                //输入
    if(ch == '.')          //如果是'.' 
        return 0;          //空
    else{
        bt = ++cnt;         //下一个储存空间
        data[bt].value = ch;        //根
        data[bt].left = data[bt].right = 0;	
        data[bt].left = buildTree(bt);
        data[bt].right= buildTree(bt);  
    }
    return bt;
}
//后序遍历
void postorder(int bt){
    if(bt){
        postorder(data[bt].left);
        postorder(data[bt].right);
        cout << data[bt].value;
        
    }
}
//中序遍历 
void midorder(int bt){
    if(bt){
        midorder(data[bt].left);
        cout<<data[bt].value;
        midorder(data[bt].right);
    }
} 

int main() {
    root=0;
    cnt=0;
    root = buildTree(0);
    midorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}

