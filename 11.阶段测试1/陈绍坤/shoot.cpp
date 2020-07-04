#include<iostream>
#include<cstdio>
using namespace std;
const int MAX=1000001;
bool a[MAX];
unsigned long long int sum=0;
int main(){
    freopen("shoot.in", "r", stdin);
    freopen("shoot.out", "w", stdout);
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(a[i]==0)
            sum++;
    cout<<sum;
return 0;
}
