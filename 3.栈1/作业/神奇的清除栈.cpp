/*
5.��������ջ
������������
    ѧ��ջ��֪ʶ��Сͯ��С��һ������һ����Ȥ����Ϸ����Ϸ�涨����ջ��������n����д��ĸ���ÿո��������
    ����������ĸ��C������Ҫ��ǰ�����ĸ��ɾ��������ʣ�µ��ַ���������˳�������,��ջΪ�գ��������д��ĸC��
�������ʽ��
    ���У���һ�а���һ������n��0<n<100),�ڶ��а���n����д��ĸ��
�������ʽ��
    ��ջΪ�գ������д��ĸC������Ϊ�գ�����ĸ������˳���������
������������
    10
    A A A B B C D E F R
�����������
    R F E D
*/
/*
#include<iostream>
using namespace std;
char z[105];
int top = 0;
void push(char c){
    top++;
    z[top] = c;
    return;
}
char pop(){
    return z[top];
}
void clear(){
    top=0;
}
int main(){
    int n;
    char(c);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if (c=='C'){
            clear();
        }else{
            push(c);
        }
    }
    if (top==0)
    {
        cout<<"C";
        return 0;
    }
    for(;top>=0;top--){
        cout<<pop();
    }
    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int top=0,n;
    char stuck[101]={},m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if (m!='C'){
            stuck[++top]=m;
        }else{
            top=0;
        }
    }
    if (top==0){
        cout<<"C"<<endl;
    }else{
        while (top){
            cout<<stuck[top--]<<" ";
        }
    }
    
    return 0;
}