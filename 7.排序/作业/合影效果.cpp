/*
���������롿
6
male 1.72
male 1.78
female 1.61
male 1.65
female 1.70
female 1.56
�����������
1.65 1.72 1.78 1.70 1.61 1.56
*/
#include<iostream>
#include<algorithm>     //[��Ц]
#include<cstdio>
using namespace std;
int main(){
    double x[100], y[100]; //�ֱ�����Ů���
    string sex;         //�����Ա�
    int n;
    int xi=0, yi=0;     //��ߴ���x��y��λ�á�

    cin>>n;
    for(int i=0;i<n;i++){   //����n��
        cin>>sex;           //�����Ա�
        if(sex=="male"){    //�����male������x
            cin>>x[xi];     //�������
            xi++;
        }else{              //�������y
            cin>>y[yi];
            yi++;
        }
    }
    //ð������x
    for(int i=0;i<xi;i++)
        for(int j=0;j<xi-1;j++)
            if(x[j]>x[j+1])
                swap(x[j], x[j+1]);
    //ð������y
    for(int i=0;i<yi;i++)
        for(int j=0;j<yi-1;j++)
            if(y[j]<y[j+1])
                swap(y[j], y[j+1]);
    
    for(int i=0;i<xi;i++)printf("%0.2f ", x[i]);    //���������λС��
    for(int i=0;i<yi;i++)printf("%0.2f ", y[i]);    //���������λС��
    return 0;
}