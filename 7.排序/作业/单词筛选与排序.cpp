#include<iostream>
#include<string>
using namespace std;
int main(){     //面函数
    int x=0;        //存入s的位置
    string s[102];
    //输入，Ctrl + Z结束
    while(cin>>s[x]){   
        x++;
    }
    //冒泡排序
    for(int i=0;i<x;i++)
        for(int j=0;j<x-1;j++)
            if(s[j]>s[j+1])
                swap(s[j], s[j+1]);
    //输出
    for(int i=0;i<x;i++){
        if(s[i]!=s[i+1])cout<<s[i]<<"\n"; //加上判断条件实现不重复
    }
    return 0;
}