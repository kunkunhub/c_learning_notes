/*
* ���У�
* ��ֻ�����ڱ��ǰ�˽���ɾ���������ڱ�ĺ�˽��в��������
* ����Ԫ�أ������е�����Ԫ��
* ��ӣ�����һ��Ԫ��
* ���ӣ�ɾ��һ��Ԫ��
* ���ף�����ɾ������Ԫ�ص�һ��
* ��β������������Ԫ�ص�һ��
* ͷָ�룺front
* βָ�룺rear
* ����������
*   ��������
*   ���
*   ����
*/
#include<iostream>
using namespace std;
int MAXN=1001
int que[MAXN];          //����
int front, rear;        //ָ��
void push(int x){       //���
    if(rear<MAXN){
        que[rear++]=x;  //ͷָ������
    }
    return;
}
int pop(){              //����
    if(rear!=front){
        return que[front++];
    }
}
//��ͨ����
//ȱ�㣺ͷָ���βָ��ֻ����ǰ���ӣ�������ɼ������
//��� "ѭ������"
int longth(){
    return rear-front;  //���г���
}
bool empty(){
    return rear==front; //�Ƿ�Ϊ��
}
int main(){             //�溯��
    
    return 0;
}