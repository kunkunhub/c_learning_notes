#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    int sum=0;
    for(int i=1;i<=10;i++)
        q.push(i);
    cout<<q.front()<<'\n';
    cout<<q.back()<<'\n';
    cout<<q.size()<<'\n';
    for(int i=1;i<=10;i++){
        sum+=q.front();
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<'\n'<<sum;
}
/*
int main(){
    queue<int> q;
    q.empty();
    q.push(1);
    q.push(2);
    q.push(4);
    q.back();       //��ȡ��βֵ
    q.front();      //��ȡ����ֵ
    q.pop();
    q.empty();
    q.size();
    q.pop();
    q.pop();
    cout<<q.size()<<endl;
    return 0;
}
*/
//˫�˶��У����׶�β�����Խ�����ӳ���
/*
#include<deque>
deque<int> dq;
dq.pop_front()

*/