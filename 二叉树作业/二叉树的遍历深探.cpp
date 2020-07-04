#include <iostream>
using namespace std;
struct node{            //���ڵ�
    char value;
    int left, right;
}data[101];
int root=0, cnt;
char ch;
//����������
int buildTree(int bt){
    cin>>ch;                //����
    if(ch == '.')          //�����'.' 
        return 0;          //��
    else{
        bt = ++cnt;         //��һ������ռ�
        data[bt].value = ch;        //��
        data[bt].left = data[bt].right = 0;	
        data[bt].left = buildTree(bt);
        data[bt].right= buildTree(bt);  
    }
    return bt;
}
//�������
void postorder(int bt){
    if(bt){
        postorder(data[bt].left);
        postorder(data[bt].right);
        cout << data[bt].value;
        
    }
}
//������� 
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

