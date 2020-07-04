#include<iostream>
using namespace std;
unsigned long long int l[60];
int main(){
	int x, z, i;
	cin>>x>>z;
	for(int i=0;i<60;i++)
		l[i] = 1;
	for(i=x+2;i<=z;i++){
		l[i] = l[i-(x+2)]*2+l[i-1];
	}
	cout<<l[i-1];
	return 0;
}
