/*
1.   ���
������������
ѧУ�ٰ���һ����ᣬ������Ů�����볡ʱ�������ų�һ�ӡ���������ʱ�����δ��жӺ�Ů�ӵĶ��׸���һ�������顣
�涨ÿ������ֻ��һ�������ߣ������ӳ�ʼ������ͬ����ϳ�����һ����δ����ߵȴ���һ��������
�����ó���ģ��������̡�
���룺һ�У���������m��n��p���ֱ��ʾ�ж�������Ů��������������Ŀ��
����� p�У�ÿ���������֣���ʾ��i����������Ů��Ա�š������������ǰ��Ů������ں���һ���ո������
���������롿
4 3 6
�����������
1 1
2 2
3 3
4 1
1 2
2 3
*/
#include<iostream>
using namespace std;
int a[300];
int b[300];
int fronta, reara;
int frontb, rearb;
void pusha(int x){
    a[reara++]=x;
}
int popa(){
    return a[fronta++];
}
void pushb(int x){
    b[rearb++]=x;
}
int popb(){
    return b[frontb++];
}
int main(){             // �溯��
    int m, n, p, ta, tb;
    cin>>m>>n>>p;
    for(int i=1;i<m+1;i++)
        pusha(i);
    for(int i=1;i<n+1;i++)
        pushb(i);
    for(int i=0;i<p;i++){
        ta=popa();
        tb=popb();
        cout<<ta<<' '<<tb<<'\n';
        pusha(ta);
        pushb(tb);
    }
    return 0;
}