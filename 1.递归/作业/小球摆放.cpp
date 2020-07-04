#include <iostream>
using namespace std;
int func(int m,int n){
	if(m==1||n==1||m==0)return 1;
	if(n>m)return func(m,m);
	return func(m,n-1)+func(m-n,n);
}
int main(){
	int m, n;
	cin>>m>>n;
	cout<<func(m, n);
	return 0;
}
