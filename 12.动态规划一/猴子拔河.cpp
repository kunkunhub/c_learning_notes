#include<iostream>
using namespace std;
int a[200], minn=2147483647;
int dp[200];
int main(){
    int n=0, sum=0;
    cin>>n;
    for(int i;i<=n;i++){
        cin>>a[i];
        sum += a[i];
    }
    //动态规划
    for(int i=1;i<=n;i++){
        for(int j=sum/2;j>=a[i];j--){
            dp[j]=max(dp[j], dp[j-a[i]]+a[i]);
        }
    }
    //求两组猴子力量值的差
    minn=sum-dp[sum/2]*2;
    cout<<minn;
    return 0;
}