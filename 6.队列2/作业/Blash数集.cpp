/*
4.   Blash����
����Ŀ������
����ѧ�Ҹ�˹Сʱ��żȻ�䷢��һ����Ȥ����Ȼ������Blash����Ӧ��aΪ���ļ���Ba�������£�
��1��a�Ǽ���Ba�Ļ�����a��Ba�ĵ�һ��Ԫ�أ�
��2�����x�ڼ���Ba�У���2x+1��3x+1Ҳ���ڼ���Ba�У�
��3��û������Ԫ���ڼ���Ba���ˡ�
����С��˹��֪�����������Ba��Ԫ�ذ����������У���n��Ԫ�ػ��Ƕ��٣�
���룺�����ܶ��У�ÿ����������������֣����ϵĻ�a(1<=a<=50)�Լ�����Ԫ�����n(1<=n<=1000000)��
�������Ӧÿ�����룬�������Ba�ĵ�n��Ԫ��ֵ��
���������롿
1 100
28 5437
�����������
418
900585
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<unsigned long long int> q;    //���漯��
    queue<unsigned long long int> q2;   //q*2+1
    queue<unsigned long long int> q3;   //q*3+1
    queue<unsigned long long int> out;  //�ݴ���������������һ�������
    int n, a;
    while(cin>>a){          //Ctrl + Z�˳�
        cin>>n;
        q.push(a);          //��ʼֵ���
        q2.push(a*2+1);     
        q3.push(a*3+1);
        for(int i=1;i<n;i++){
            if(q2.front()>q3.front()){          //��q2��q3����ѡ��С�����q��ʵ������
                q.push(q3.front());
    //            cout<<q3.front()<<endl;
                q3.pop();
            }else{
                if(q2.front()==q3.front()){     //��С��ͬһ�����
                    q.push(q2.front());
    //                cout<<q3.front()<<endl;   //�⼸���ǵ����õ�
                    q2.pop();
                    q3.pop();
                }else{
    //                cout<<q2.front()<<endl;
                    q.push(q2.front());
                    q2.pop();
                }
            }
            /*
            if(q.front()*2+1>q2.front() || q2.empty()){     //bug
                q2.push(q.back()*2+1);
                cout<<"p\n";
            }else{
        
            }*/
            q2.push(q.back()*2+1);              //q.front() -- bug
            q3.push(q.back()*3+1);              //���q*2+1��q*3+1
            /*
            if(q.front()*3+1>q3.front() || q3.empty()){
                q3.push(q.back()*3+1);                      //�����õ�
                cout<<"p3\n";       
            }
            */
            
        }
        out.push(q.back());
        while(!q.empty())q.pop();
        while(!q2.empty())q2.pop();
        while(!q3.empty())q3.pop(); //���
    }
    
        /*
        while(!q.empty()){
            cout<<endl<<q.front();              //�����õ�
            q.pop();
        }
        */
    while(!out.empty()){                        //һ�������
        cout<<out.front()<<endl;
        out.pop();
    }
    return 0;
}
//����