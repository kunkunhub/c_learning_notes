/*
 * 计算机程序设计 = 算法 + 数据结构
 * 这句话获得了图灵奖 
 *
 * 数据结构：
 * 抽象层 -> 逻辑结构（抽象、想出来的）  {网状、集合、线性、树形……结构} 
 * 结构层 -> 物理结构 {顺序结构、链式结构} 
 * 实现层 -> 运算结构 {增删改查……} 
 *
 * 集合结构： 松散的组织，元素之间没关系，除了它们都在集合里，就是一个圈圈起来的。
 * 线性结构： 一对一前后关系 
 *			  唯一首元素、尾元素。
 *            前后分明。
 *            除了首元素和尾元素，每个元素都有唯一前趋元素
 *            唯一后继元素 
 *      例如：A -> C -> B -> E -> D 
 * 
 * 树形结构： 一对多的父子关系。
 *            唯一的根元素 
 *            唯一前趋元素
 *            一到多个后继元素 
 *      例如：     A
 *               B  C
 *           D E F    G
 *          H   K    L M
 *         J I
 * 网状结构： 多对多映射关系 
 *            每个元素都可以拥有任意数量的前趋和后继元素 
 *            任意两个元素之可以建立关系
 *             
 * 顺序结构： 把逻辑上相邻的元素放到物理位置也相邻的储存单元中。
 *            A B C D 
 * 链式结构： 不使用连续的储存空间放存结构中的元素，为每个元素造一个节点，
 *            节点中不仅要存放数据
 *            还要存放指向下一个节点的指针
 * 循环链表： 最后一个节点的指针指向头结点 
 * 
 *
 * 栈：
 * 特点=先进后出，后进先出 
 * 栈顶=允许进栈 
 * 栈底=不许动
 * 栈顶元素 = 栈的最上面的元素 
 * 栈底元素 = 栈底的元素 
 * 空栈 = 栈空
 * 满栈 = 栈满 
 * 
 */
#include<iostream>
using namespace std;
const int MAX=5;
int top=0, l[MAX];
void push(int n){
	//入栈 
	if(top<MAX){
		top++;
		l[top] = n;
		return;
	}else{
		cout<<"err push:"<<n<<endl;
	}
}
int pop(){
	//出栈 
	if(top>0){
		return l[top--];
	}else{
		cout<<"err pop\n";
		return -1;
	}
}
int getTop(){
	//得到栈顶元素 
	if(top>0){
		return l[top];
	}else{
		cout<<"err getTop\n";
	}
}
int clear(){
	//清空栈 
	top=0;
}
int main(){
	//面函数
	push(10);
	push(20);
	cout<<pop()<<endl;
	push(30);
	push(40);
	cout<<pop()<<endl;
	push(50);
	push(60);
	cout<<pop()<<endl;
	cout<<pop()<<endl;
	push(70);
	push(80);
	cout<<pop()<<endl;
	clear();
	cout<<pop()<<endl;
	push(123);
	cout<<pop()<<endl;
	return 0;
} 

 
