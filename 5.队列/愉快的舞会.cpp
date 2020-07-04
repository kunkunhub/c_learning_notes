#include<iostream>
using namespace std;
int a[300];
int b[300];
int fronta, reara;
int frontb, rearb;
void pusha(int x){
    a[reara++]=x;
}
int popa(){
    return a[fronta++];
}
void pushb(int x){
    b[rearb++]=x;
}
int popb(){
    return b[frontb++];
}
int main(){             // Ãæº¯Êý
    int m, n, p, ta, tb;
    cin>>m>>n>>p;
    for(int i=1;i<m+1;i++)
        pusha(i);
    for(int i=1;i<n+1;i++)
        pushb(i);
    for(int i=0;i<p;i++){
        ta=popa();
        tb=popb();
        cout<<ta<<' '<<tb<<'\n';
        pusha(ta);
        pushb(tb);
    }
    return 0;
}