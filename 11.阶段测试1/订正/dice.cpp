#include<iostream>
#include<cstdio>
using namespace std;
int t1[3]={4, 6, 5},t2[3]={1,2,3};
void setDice(const char d, int y[]){
    int u,f,r;
    switch(d){
        case 'R':
            u=7-t[2];
            f=t[1];
            r=t[0];
            break;
        case 'D':
            u=7-t[2];
            f=t[0];
            r=t[2];
            break;
        case 'L':
            u=t[2];
            f=t[1];
            r=7-t[0];
            break;
    }
    t[0]=u;
    t[1]=f;
    t[2]=r;
    return;
}
int main(){
    freopen("dice.in", "r", stdin);
    freopen("dice.out", "r", stdout);
    int n, sum1=0, sum2=0;
    cin>>n;
    int i=1;
    while(i<=n){
        int a=(2*i-1)%4, b=(2*i)%4;
        switch(i%3){
            
        }
    }
    return 0;
}