#include <iostream>
using namespace std;
int pell(int an){
	if(an==1)return 1;
	if(an==2)return 2;
	return 2*pell(an-1)+pell(an-2);
}
int main(){
	int n;
	cin>>n;
	int k[n];
	for(int i=0;i<n;i++)
		cin>>k[i];
	for(int i=0;i<n;i++)
		cout<<pell(k[i])%32767<<endl;
	return 0;
}
