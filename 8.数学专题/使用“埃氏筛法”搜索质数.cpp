#include<iostream>
#include<cstdio>
using namespace std;
bool x[100000];
int main(){
    int n;
    cin>>n;
    //∞£ œ…∏∑®
    for(int i=2;i*i<=n;i++)
        if(x[i]==0)
            for(int j=i*i;j<=n;j+=i)
                x[j]=1;
    // ‰≥ˆ
    int o=0;
    for(int i=2;i<=n;i++){
        if(x[i]==0){
            printf("%d ", i);
            o++;
        }
       if(o==6){
           printf("\b\n");
           o=0;
       }
    }
    return 0;
}