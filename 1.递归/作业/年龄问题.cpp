#include<iostream>
using namespace std;
int func(int x){
	if(x==1)return 10;
	return func(x-1)+2;
}
int main(){
	int n;
	cin>>n;
	cout<<func(n)<<endl;;
	return 0;
}
