#include<iostream>
using namespace std;
int s[12]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int find(int x){
    for(int i=0;i<=9;i++){
        if(s[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, x;
    cin>>n;
    int sum=0;
    n-=4;
    for(int i=0;i<=24;i++){
        for(int j=0;j<=24;j++){
            x=n-s[i]-s[j];
            if(x>0&&find(x)>=0&&(i+j==find(x))){
                cout<<i<<"+"<<j<<"="<<i+j<<endl;
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}