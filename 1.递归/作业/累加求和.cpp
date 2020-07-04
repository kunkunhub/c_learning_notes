#include <iostream>
using namespace std;
int sum(int n){
	if(n==1)return 1;
	return sum(n-1)+n;
}
int main(){
	int x;
	cin>>x;
	cout<<sum(x)<<endl;
	return 0;
}
