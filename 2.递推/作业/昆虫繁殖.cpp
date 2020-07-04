#include <iostream>
using namespace std;
unsigned long long int z, a[60]={0,2,2,2}, b[60]={0,0,2,2}, c[60]={1,0,0,2}, d[60]={0,1,1,1};
int main(){
	cin>>z;
	for(int i=4;i<=50;i++){
		d[i] = d[i-1]+c[i-1];
		a[i] = d[i]*2;
		b[i] = a[i-1];
		c[i] = b[i-1];
	}
	cout<<d[z]+c[z]<<endl;
	return 0;
}
