#include<iostream>
using namespace std;
int w[200];     //重量
int c[200];     //价值
int f[200];     //最优解一位数组
int main(){     //面函数
    int m, n;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>c[i];
    for(int i=1;i<=n;i++){
        for(int j=m;j>=0;j--){  //!!!倒着走！！！不会结果叠加
            if(j>=w[i]){
                f[j]=max(f[j], f[j-w[i]]+c[i]);
            }
        }
    }
    cout<<f[n][m];
    return 0;
}