#include<iostream>
using namespace std;
int stack[1001], a[1001], top=0, n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1, cur=1;i<=n;i++){
        while(cur<=a[i])stack[++top]=cur+=2;
        if(stack[top]==a[i])top--;
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}