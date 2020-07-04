#include <iostream>
using namespace std;
int main(){
	int x, n;
	cin>>x>>n;
	int s;
	s = x;
	for(int i=1;i<n;i++){
		s = s*x;
	}
	cout<<s<<endl;
	return 0;
}
