#include <iostream>

using namespace std;

/*
概念：
stack容器是一种先进后出的数据结构，它只有一个出口

栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为

栈可以为空 empty  可以返回元素个数  size

push

pop
*/
/*
常用接口

功能描述：栈容器常用的对外接口

构造函数：
stack<T> stk;  //stack采用模板类实现，stack对象的默认构造形式
stack(const stack &stk);  //拷贝构造函数

赋值操作：
stack& operator=(const stack &stk); //重载等号操作符

数据存取：
push(elem); //向栈顶添加元素
pop(); //从栈顶移除第一个元素
top(); //返回栈顶元素

大小操作：
empty(); //判断堆栈是否为空
size();  //返回栈的大小
*/


int main()
{

    return 0;
}
