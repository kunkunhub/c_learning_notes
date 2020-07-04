#include<iostream>
using namespace std;
int func(int x,int y){
	if(x==1||y==1||x==0)return 1;
	if(y>x)return func(y,y);
	return func(x,y-1)+func(x-y,y);
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<func(m,n);
	return 0;
}

