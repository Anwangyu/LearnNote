#include <iostream>

using namespace std;
/*C++编译器至少给一个累添加4个函数
 1.默认构造函数（无参，函数体为空）
 2.默认析构函数（无参，函数体为空）
 3.默认拷贝构造函数，对属性进行值拷贝
 4.赋值运算符 operator=， 对属性进行值拷贝

 如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
*/

//赋值运算符重载

class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);//堆区（由程序员自己手动开辟，也需要主动释放，析构）
    }

    ~Person()//析构  主动释放  堆区内存释放
    {
        if(m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }
//：：：堆区内存重复释放
//利用深拷贝解决 浅拷贝带来问题

    int *m_Age;//new int 返回一个 int * ；

    //重载 赋值运算符

    Person& operator=(Person &p)
    {
        //编译器提供浅拷贝
        //m_Age = p.m_Age;

        //先判断是否有属性在堆区,如果有先释放干净,然后再深拷贝
        if(m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        //深拷贝的操作
        m_Age = new int(*p.m_Age);
        //返回对象本身
        return *this;

    }
    //int *m_Age;  ???

private:

};

void test01()
{
    Person p1(18);

    Person p2(20);

    Person p3(30);

    p3 = p2 = p1;//赋值运算

    cout << "p1的年龄为：" << *p1.m_Age << endl;//解引用
    cout << "p2的年龄为：" << *p2.m_Age << endl;//解引用
    cout << "p3的年龄为：" << *p3.m_Age << endl;//解引用
}
int main()
{
    test01();
//    int a = 10;
//    int b = 20;
//    int c = 30;
//
//    c = b = a;
//
//
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//    cout << "c=" << c << endl;



    return 0;
}
