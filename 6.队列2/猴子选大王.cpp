#include<iostream>
using namespace std;
int q[1001];
int main(){
    int n, m, front=0, rear=0, x, ans;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        q[i] = i+1;
    rear=n;
    while(rear!=front){
        for(int i=1;i<m;i++){
            x=q[front];
            front=(front+1)%n;
            q[rear]=x;
            rear=(rear+1)%n;
        }
        ans=q[front];
        front=(front+1)%n;
    }
    cout<<ans<<endl;
    return 0;
}