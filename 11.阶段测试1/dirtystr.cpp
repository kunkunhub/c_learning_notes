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
    for(int i=0;i<s.length();i++){  //桶
        x[s[i]].n++;        //字符计数
        x[s[i]].c=s[i];     //这里的字符
    }
    int min=100;
    for(int i=0;i<200;i++){
        if(x[i].n!=0&&x[i].n<min)min=x[i].n;    //找最少出现的字符的出现数量
    }
    cout<<min<<endl;
    for(int i=0;i<200;i++){
        if(x[i].n>min){
            cout<<x[i].c;
        }
    }
    return 0;
}
