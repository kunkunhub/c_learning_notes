/*
2. ���ֻ�ȴ�
������������
    N���������Ŷӽ���һ�����ֻᡣ
    ���ǵȵú����ģ��������ǿ�ʼת��תȥ�����ڶ�����Ѱ���Լ������ˡ�
    ����������������A��B��������������ڻ�����֮��û���˱�A��B�ߣ���ô�����ǿ��Ի��࿴�ü��ġ�
    дһ�����������ж��ٶ��˿��Ի��࿴����

    ���룺
        ����ĵ�һ�а���һ������N (1 �� N �� 500000), ��ʾ�����й���N���ˡ�
        ��������N���У�ÿ�а���һ����������ʾ�˵ĸ߶ȣ��Ժ�΢��(����10��-9�η���)Ϊ��λ��
        ÿ���˵ĵ��ȶ�С��231��΢�ס���Щ�߶ȷֱ��ʾ�������˵���ߡ�
    �����
        �������һ�У�����һ����S����ʾ�����й���S���˿��Ի��࿴����

������������
7 
2 
4 
1 
2 
2 
5 
1 
�����������
10
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, m, s=0, j=1;
    cin>>n;
    int x[n+5];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++){
        m=x[i+1];
        s++;
        for(int j=i+2;j<n-1;j++){
            if(x[j]>m)
                m=x[j];
            if(x[j]<m)
                break;
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int st[5000], n, top=1,ans,m;
int main(){
    cin>>n;
    int a;
    cin>>st[1];
    for(int i=2;i<=n;i++){
        cin>>a;
        if(st[top]>a){
            top++,
            ans++,
            st[top]=a;
        }else{
            int r=top;
            while(r!=1&&st[r]<=a)
                r--;
            ans+=top-r+1;
            while(top>0&&st[top]<a)
                top--;
            st[++top]=a;
        }
    }
    cout<<ans<<endl;
    return 0;
}