/*
2. ����ѡ����
����Ŀ������
    �У�ֻ���ӣ���˳ʱ�뷽��Χ��һȦѡ��������Ŵӣ�������ӵڣ��ſ�ʼ������һֱ������
    ������ĺ����˳�Ȧ�⣬ʣ�µĺ����ٽ��Ŵ�1��ʼ��������������ֱ��Ȧ��ֻʣ��һֻ����ʱ��
    ������Ӿ��Ǻ���������������������������ı�š�
���룺ÿ�����ÿո�ֿ�������������
��һ���� n, �ڶ����� m ( 0 < m,n <=300)��
���������ʣ�µ���ֻ���ӱ�š�
���������롿
 5 3
�����������
 4
*/
#include<iostream>
using namespace std;
int q[1001];
int main(){
    int n, m, front=0, rear=0, x, ans;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        q[i] = i+1;
    rear=n;
    while(rear!=front){
        for(int i=1;i<m;i++){
            x=q[front];
            front=(front+1)%n;
            q[rear]=x;
            rear=(rear+1)%n;
        }
        ans=q[front];
        front=(front+1)%n;
    }
    cout<<ans<<endl;
    return 0;
}