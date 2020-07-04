/*
【样例输入】
6
male 1.72
male 1.78
female 1.61
male 1.65
female 1.70
female 1.56
【样例输出】
1.65 1.72 1.78 1.70 1.61 1.56
*/
#include<iostream>
#include<algorithm>     //[坏笑]
#include<cstdio>
using namespace std;
int main(){
    double x[100], y[100]; //分别存放男女身高
    string sex;         //存入性别
    int n;
    int xi=0, yi=0;     //身高存入x或y的位置、

    cin>>n;
    for(int i=0;i<n;i++){   //输入n个
        cin>>sex;           //输入性别
        if(sex=="male"){    //如果是male，存入x
            cin>>x[xi];     //输入身高
            xi++;
        }else{              //否则存入y
            cin>>y[yi];
            yi++;
        }
    }
    //冒泡排序x
    for(int i=0;i<xi;i++)
        for(int j=0;j<xi-1;j++)
            if(x[j]>x[j+1])
                swap(x[j], x[j+1]);
    //冒泡排序y
    for(int i=0;i<yi;i++)
        for(int j=0;j<yi-1;j++)
            if(y[j]<y[j+1])
                swap(y[j], y[j+1]);
    
    for(int i=0;i<xi;i++)printf("%0.2f ", x[i]);    //输出保留两位小数
    for(int i=0;i<yi;i++)printf("%0.2f ", y[i]);    //输出保留两位小数
    return 0;
}