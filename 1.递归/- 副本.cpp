#include<iostream>
using namespace std;
int ball(int m, int n){
	if(m<n)return 0;
	if(n==1)return 1;
	return ball(m-1,n-1)+n*ball(m-1,n);
}
int main(){
	int m, n;
	cin>>m>>n;
	cout<<ball(m,n);
	return 0;
}
