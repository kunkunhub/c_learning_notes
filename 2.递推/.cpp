#include<iostream>
using namespace std;
int main(){
	int n, m, i=1, f[100];
	cin>>n>>m;
	f[0] = m+2;
	while(i<=n){
		f[i] = (f[i-1]-2)*2;
		i++;
	}
	cout<<f[i-1];
} 
