#include <iostream>
using namespace std;
int main(){
	int n, l[100], i;
	cin>>n;
	l[0] = 1;
	for(i=1;i<n;i++){
		l[i] = l[i-1]*2+1;
	}
	cout<<l[i-1]<<endl;
	return 0;
}