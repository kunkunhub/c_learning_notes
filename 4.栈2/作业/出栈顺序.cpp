/*
3. ��ջ˳��
������������
    ����һ����n��Ԫ�ع��ɵ����У�����Ҫ�����е�Ԫ�ذ�˳��ѹ��һ����СΪc��ջ��������
    Ԫ�ذ����ǵĳ�ջ˳��������У���õ�һ���µ����С�
    ����֪�������������л��кܶ��֣�����������������е�һ��Ԫ����С�����С�
    ����һ��Ԫ����С�������ж��������ڶ���������С�������ж���������������С���Դ����ơ�
�������ʽ��
    ��һ�У�������n,c��
    �ڶ���n������Ϊ������n��Ԫ�ص�ֵ��
�������ʽ��
    ���n������Ϊ����Ҫ������С�
���������롿  
6 3
5 2 3 8 7 4
�����������
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