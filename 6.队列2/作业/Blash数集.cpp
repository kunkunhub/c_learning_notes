/*
4.   Blash数集
【题目描述】
大数学家高斯小时候偶然间发现一种有趣的自然数集合Blash，对应以a为基的集合Ba定义如下：
（1）a是集合Ba的基，且a是Ba的第一个元素；
（2）如果x在集合Ba中，则2x+1和3x+1也都在集合Ba中；
（3）没有其他元素在集合Ba中了。
现在小高斯想知道如果将集合Ba中元素按照升序排列，第n个元素会是多少？
输入：包含很多行，每行输入包括两个数字，集合的基a(1<=a<=50)以及所求元素序号n(1<=n<=1000000)。
输出：对应每个输入，输出集合Ba的第n个元素值。
【样例输入】
1 100
28 5437
【样例输出】
418
900585
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<unsigned long long int> q;    //储存集合
    queue<unsigned long long int> q2;   //q*2+1
    queue<unsigned long long int> q3;   //q*3+1
    queue<unsigned long long int> out;  //暂存输出，程序结束后一次性输出
    int n, a;
    while(cin>>a){          //Ctrl + Z退出
        cin>>n;
        q.push(a);          //初始值入队
        q2.push(a*2+1);     
        q3.push(a*3+1);
        for(int i=1;i<n;i++){
            if(q2.front()>q3.front()){          //从q2和q3里面选最小的入队q，实现有序。
                q.push(q3.front());
    //            cout<<q3.front()<<endl;
                q3.pop();
            }else{
                if(q2.front()==q3.front()){     //大小相同一起出队
                    q.push(q2.front());
    //                cout<<q3.front()<<endl;   //这几行是调试用的
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
            q3.push(q.back()*3+1);              //算出q*2+1和q*3+1
            /*
            if(q.front()*3+1>q3.front() || q3.empty()){
                q3.push(q.back()*3+1);                      //调试用的
                cout<<"p3\n";       
            }
            */
            
        }
        out.push(q.back());
        while(!q.empty())q.pop();
        while(!q2.empty())q2.pop();
        while(!q3.empty())q3.pop(); //清空
    }
    
        /*
        while(!q.empty()){
            cout<<endl<<q.front();              //调试用的
            q.pop();
        }
        */
    while(!out.empty()){                        //一次性输出
        cout<<out.front()<<endl;
        out.pop();
    }
    return 0;
}
//天哪