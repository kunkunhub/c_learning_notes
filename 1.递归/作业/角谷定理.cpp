#include <iostream>
using namespace std;
int sum=0;
void func(int x){
	if(x==1)return;
	cout<<x<<" ";
	if(x%2==0)
		func(x/2);
	else
		func(x*3+1);
	sum++;
	
}
int main(){
	int n;
	cin>>n;
	func(n);
	cout<<1<<endl<<"STEP="<<sum<<endl;
	return 0;
}
