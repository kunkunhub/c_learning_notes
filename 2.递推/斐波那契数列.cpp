#include<iostream>
using namespace std;
//18 4181
int main(){
	int x[100], n, i;
	x[1] = 1;
	x[2] = 2;
	cin>>n;
	for(i=3;i<=n;i++){
		x[i] = x[i-1]+x[i-2];
	}
	cout<<x[i-1];
	return 0;
}
