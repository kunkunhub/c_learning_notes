/*
1.   舞会
【问题描述】
学校举办了一场舞会，男生和女生在入场时，各自排成一队。伴奏响起时，依次从男队和女队的队首各出一人配成舞伴。
规定每个舞曲只有一对跳舞者，若两队初始人数不同，则较长的那一队中未配对者等待下一轮舞曲。
请利用程序模拟这个过程。
输入：一行，三个数字m，n和p，分别表示男队人数、女队人数和舞曲数目。
输出： p行，每行两个数字，表示第i首舞曲的男女配对编号。（男生编号在前，女生编号在后，用一个空格隔开）
【样例输入】
4 3 6
【样例输出】
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
int main(){             // 面函数
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