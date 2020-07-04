#include<iostream>
#include<cstring>
using namespace std;
string s1, s2;
void calc(string a, string b,int l1){
    if(a.length()==1){
        cout<<a;
        return;
    }
    string ta="", tb="";
    int m=a.find(b[l1]);
    cout<<a[m];
//    cout<<endl;
    ta=a.substr(0, m-1);
    tb=a.substr(m+1, s1.length()-m);
    for(int i=m+1;i<=s1.length()-1;i++)tb=tb+a[i];
    cout<<ta<<tb;
    calc(ta, b, l1+1);
    calc(tb, b, m+1);

}
int main(){
    cin>>s1>>s2;
    calc(s1, s2, 0);
    cout<<endl;
    return 0;
}