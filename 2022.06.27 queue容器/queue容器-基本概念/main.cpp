#include <iostream>

using namespace std;

/*
概念：
queue是一种先进先出的数据结构，它有两个出口

队列容器允许一端新增元素，从另一端移除元素
队列中只有队长和队尾才可以被外界使用，因此队列不允许有遍历行为
队列进数据为：入队 push
队列出数据为：出队 pop

*/

/*
常用接口

功能描述：
栈容器常用的对外接口

构造函数 ：
queue<T>que; //queue采用模板类实现，queue对象的默认构造形式
queue(const queue &que); //拷贝构造函数

赋值操作：
queue& operator=(const queue &que); // 重载等号操作符

数据存取：
push(elem); //往队尾添加元素
pop();      //从队头移除第一个元素
back();     //返回最后一个元素
front();    //返回第一个元素

大小操作：
empty(); //判断堆栈是否为空
size();  //返回栈的大小
*/

int main()
{
    return 0;
}
