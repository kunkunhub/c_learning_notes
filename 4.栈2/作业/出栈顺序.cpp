/*
3. 出栈顺序
【问题描述】
    给定一个由n个元素构成的序列，你需要将其中的元素按顺序压入一个大小为c的栈并弹出。
    元素按它们的出栈顺序进行排列，会得到一个新的序列。
    我们知道，这样的序列会有很多种，请输出所有新序列中第一个元素最小的序列。
    若第一个元素最小的序列有多个，则令第二个尽可能小；若仍有多个，则令第三个最小，以此类推。
【输入格式】
    第一行，两个数n,c；
    第二行n个数，为序列中n个元素的值。
【输出格式】
    输出n个数，为满足要求的序列。
【样例输入】  
6 3
5 2 3 8 7 4
【样例输出】
2 3 5 4 7 8
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, c, m, a, n2;
    cin>>n;
    n2=n;
    int x[n+10];
    for(int i=0;i<n;i++)cin>>x[i];
    while(n2>0){
        m=0;
        a=0;
        for(int j=0;j<c+a;j++){
            if(j>=n)break;
            if(x[j]!=-1){
                if(x[m]>x[j]){
                    m=j;
                    
                    n2--;
                }
            }else a++;

        }
        cout<<x[m]<<' ';
        x[m]=-1;
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int n, c, flag, m;
int stack[10001],top;
int num[10001];
int main(){
    cin>>n>>c;
    for(int i=1;i<=n;i++)cin>>num[i];
    while(m<n)
        if(flag<n){
            int minn=0x7ffffff,q;
            for(int i=flag+1;i<=flag+c-top&&i<=n;i++)
                if(num[i]<minn)minn=num[i],q=i;
            if(!top){
                for(int i=flag+1;i<q;i++)stack[++top]=num[i];
                cout<<num[flag=q]<<" ";
                m++;
            }else{
                if(stack[top]<num[q]){
                    cout<<stack[top--]<<" ";
                    m++;
                }else{
                    for(int i=flag+1;i<q;i++)stack[++top]=num[i];
                    cout<<num[flag=q]<<" ";
                    m++;
                }
            }
        }else{
            while(top){
                cout<<stack[top--]<<" ";
                m++;
            }
        }
    return 0;
}