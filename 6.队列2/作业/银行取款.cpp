/*
1. 银行取款
【题目描述】
在现代文明社会中，大家在诸如银行办理业务、车站买票等活动时都很文明没有插队的现象，本着“先来先服务”的规矩。
新年马上到了，明明的爸爸打算上银行去取点钱，带着一向表现很好的明明同学到三亚旅游，
明明的爸爸到银行时发现很多人在办理业务，明明的爸爸就自觉地在排队机上去了一个业务号码，
并焦急的等待着银行柜台叫自己的号码......
输入：输入中包含I（表示等待办理业务）和顾客的序号，或者 O（表示办理完业务的人离开）；输入数据不超过100行。
输出：输出银行排队中出队顾客序列，若队列为空（没人等待），则输出“None”
【样例输入】
O
I 1
I 2
O
I 3
O
O
O
【样例输出】
None
1
2
3
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    queue<int> out;     //暂存输出，结束后一次性输出所有答案， 值为-1时代表None
    char c;
    int x;
    while(cin>>c){      //Ctrl + Z 终止
        if(c=='O'){
            if(q.empty()){
                out.push(-1);
            }else{
                out.push(q.front());
                q.pop();
            }
        }
        if(c=='I'){
            cin>>x;
            q.push(x);
        }
    }
    cout<<endl;
    while(!out.empty()){
        if(out.front()==-1)cout<<"None\n";
        else cout<<out.front()<<endl;
        out.pop();
    }
    return 0;
}