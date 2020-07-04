#include<iostream>
using namespace std;
int main(){
    unsigned long long int sum=0;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        sum+=x/i;
    }
    cout<<sum;
    return 0;
}