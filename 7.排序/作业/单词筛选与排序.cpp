#include<iostream>
#include<string>
using namespace std;
int main(){     //�溯��
    int x=0;        //����s��λ��
    string s[102];
    //���룬Ctrl + Z����
    while(cin>>s[x]){   
        x++;
    }
    //ð������
    for(int i=0;i<x;i++)
        for(int j=0;j<x-1;j++)
            if(s[j]>s[j+1])
                swap(s[j], s[j+1]);
    //���
    for(int i=0;i<x;i++){
        if(s[i]!=s[i+1])cout<<s[i]<<"\n"; //�����ж�����ʵ�ֲ��ظ�
    }
    return 0;
}