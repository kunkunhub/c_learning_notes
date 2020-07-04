/*
#include<iostream>
#include<cmath>
using namespace std;
bool ss(int x){
    const int sq=sqrt(x)+1;
    if(x==1||x==0)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<sq;i+=2)
        if(x%i==0)return false;
    return true;
}
int main(){
    int n, sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(ss(i))
            sum++;
    }
    cout<<sum;
    return 0;
}
*/
#include<iostream>
using namespace std;
const int MAX=10000001;
int a[MAX];
int main(){
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
			cout<<i<<"";
return 0;
}
