//3 5 4 2 1
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    
    int n, m=0;
    cin>>n;
    int l[n+5];
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>l[i];
        a[i] = i+1;
    }
    for(int i=0;i<n;i++){
        while (1){
            if(s.empty())s.push(a[m]);
            if(m>n){
                cout<<"NO\n";
                return 0;
            }
            if(l[i] != s.top())s.push(a[m]);  
            if(l[i] == s.top()){
                s.pop();
                break; 
            }
            m++;
        }
    }
    cout<<"YES\n";
    return 0;
}
*/
#include<iostream>
using namespace std;
int stack[1001], a[1001], top=0, n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1, cur=1;i<=n;i++){
        while(cur<=a[i])stack[++top]=cur++;
        if(stack[top]==a[i])top--;
        else{cout<<"NO\n";return 0;}
    }
    cout<<"YES\n";
    return 0;
}