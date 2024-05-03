#include <iostream>

using namespace std;

//作用：可以输出自定义数据类型   <<
class Person
{
    friend ostream &operator<<(ostream &cout ,Person &p );
    //friend void test01();
public:
    Person(int a, int b )
    {
        m_A = a;
        m_B = b;
    }
private:
    //利用成员函数重载 左移运算符  p.operator<<(cout) 简化 p << cout
    //不会利用成员函数重载<<运算符，因为无法实现cout在左侧

    int m_A;
    int m_B;
};
//利用全局函数重载<<运算符
ostream &operator<<(ostream &cout ,Person &p )//本质 operator << (cout , p) 简化 cout << p
 //这里 的cout 是 ostream 输出流对象 标准输出流对象  全局只有一个
 {
     cout << "m_A=" << p.m_A << "\nm_B=" << p.m_B ;
     return cout;
 }
void test01()
{
    Person p(10,10);
//    p.m_A = 10;
//    p.m_B = 10;

    cout << p << endl;
}
int main()
{
    test01();

    return 0;
}
