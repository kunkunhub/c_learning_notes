/*
1. 车厢调度
【问题描述】
        有一个火车站，铁路如下图所示，每辆火车都从A方向驶入火车站，再从B方向驶出火车站，
        同时它的车厢可以进行某种方式的重新组合。
        假设从A方向驶来的火车有n节车厢(n<=1000)，分别按顺序编号为1,2,3，…n。
        假设进入车站之前每节车厢之间都是不连接的，并且它们可以自由移动，直到驶入B方向上的铁轨上。
        另外假设C站可以停放任意节车厢，但一旦进入C，只能去B，不能向A回退，一旦进入B，就不能回到C了。
        试判断从B方向驶出的a1,a2,..an的顺序是否是合理的。
    输入：
        第一行整数n，表示n辆车厢，第二行n个元素，表示期待B出现的排列情况。
    输出：
        YES或者NO表示这个序列是否可行
【样例输入1】
5
3 5 4 2 1
【样例输出1】
YES
【样例输入2】
6
6 5 4 3 2 1
【样例输出2】
YES
*/
#include<iostream>
using namespace std;
int stack[1001], a[1001], top=0, n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1, cur=1;i<=n;i++){
        while(cur<=a[i])stack[++top]=cur++;
        if(stack[top]==a[i])top--;
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}