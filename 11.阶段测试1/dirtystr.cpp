#include<iostream>
#include<cstdio>
using namespace std;
struct data{
    int n;
    char c;
}x[202];
int main(){
    string s;
    freopen("dirtystr.in", "r", stdin);
    freopen("dirtystr.out", "w", stdout);
    cin>>s;
    for(int i=0;i<202;i++)x[i].n=0;
    for(int i=0;i<s.length();i++){  //Ͱ
        x[s[i]].n++;        //�ַ�����
        x[s[i]].c=s[i];     //������ַ�
    }
    int min=100;
    for(int i=0;i<200;i++){
        if(x[i].n!=0&&x[i].n<min)min=x[i].n;    //�����ٳ��ֵ��ַ��ĳ�������
    }
    cout<<min<<endl;
    for(int i=0;i<200;i++){
        if(x[i].n>min){
            cout<<x[i].c;
        }
    }
    return 0;
}
