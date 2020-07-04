#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int top=0;
char a[1001];
void push(char n){//»Î’ª 
	if(top<1001){
		top++;
		a[top]=n;
		return;	
	}
}
void pop(){//≥ˆ’ª 
	if(top>0){
		top--;	
		return;
	} 
}
char getTop(){
	char num=a[top];
	return num;
}
void clear(){//«Âø’’ª 
	top=0;
}
int main(){
	char s[1001];
	cin>>s;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]=='('||s[i]=='['){
			push(s[i]);
		}else if(s[i]==']'&&getTop()=='['){
			pop();
		}else if(s[i]==')'&&getTop()=='('){
			pop();
		}else{
			cout<<"No";
			return 0;
		}
	}
	if(top==0){
		cout<<"Yes"; 
	}else{
		cout<<"No";
	}	
	return 0;
}

