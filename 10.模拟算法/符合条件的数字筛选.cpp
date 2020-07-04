#include<iostream>
using namespace std;
int main(){
    int a, b, c, sum=0;
    int num[10]={};
    for(int i=123;i<=329;i++){
        a=i;
        b=2*a;
        c=3*a;
        whiel(a){
            num[a%10]=1;
            a/=10;
        }
        whiel(c){
            num[c%10]=1;
            c/=10;
        }
        whiel(c){
            num[c%10]=1;
            c/=10;
        }
        for(int j=1;j<=9;j++)
            sum+=num[j];
            num[j]=0;
        }
        if(sum==9)cout<<i<<" "<<2*i<<" "<<3*i<<endl;
        sum=0;
    }
    return 0;
}