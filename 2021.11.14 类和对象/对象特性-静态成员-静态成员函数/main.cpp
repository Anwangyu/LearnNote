#include <iostream>

using namespace std;
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
/*静态成员分为：
 1.静态成员变量：
      所有对象共享同一份数据
      在编译阶段分配内存
      类内声明，类外初始化
 2.静态成员函数：
      所有对象共享同一个函数
      静态成员函数只能访问静态成员变量
*/
class Person
{
public:
    //静态成员函数
    static void func()
    {
        m_A = 100;//静态成员函数可以访问静态成员变量
        //m_B = 200;//静态成员函数 不可以访问 非静态成员变量，无法区分哪个对象的m_B
        cout << "static void func调用" << endl;
    }

    static int m_A;//静态成员变量
    int m_B;//非静态成员变量

    //静态成员函数也是有访问权限的
private://私有作用域下访问不到
    static void func2()
    {
        cout << "static void func2调用" << endl;
    }


};
//（类内声明类外初始化）
int Person::m_A = 0;
//两种访问方式
void test01()
{
    //1.通过对象访问
    Person p;
    p.func();

    //2.通过类名访问
    Person::func();
    //Person::func2();//私有域下访问不到,类外访问不到私有的静态
}
int main()
{
    test01();

    return 0;
}
