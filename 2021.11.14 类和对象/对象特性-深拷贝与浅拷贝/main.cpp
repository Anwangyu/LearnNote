#include <iostream>

using namespace std;
//浅拷贝：简单的赋值拷贝操作(堆区内存不能重复释放 《非法操作》)
// 再次创建一个堆区（重新开辟）
//深拷贝：在堆区重新申请空间，进行拷贝操作
class Person
{
public:
    Perosn()
    {
        cout<<"无参构造函数调用"<< endl;
    }
    Person(int age,int height)
    {
        cout<<"有参构造函数调用"<< endl;
        m_Age =age;
        m_Height = new int(height);
    }
    //自己实现拷贝构造函数 解决浅拷贝带来的问题
    Person(const Person &p)
    {
        cout<<"Person拷贝构造函数"<<endl;
        m_Age = p.m_Age;
       // m_Height = p.m_Height; 编译器默认实现的代码
       //深拷贝操作

       m_Height = new int(*p.m_Height);
    }


    ~Person()
    {
        //析构代码，将堆区开辟的数据做释放操作
        if( m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout<<"析构函数调用"<< endl;
    }
    int m_Age;
    int *m_Height;
};
void test01()
{
    Person p1(18,160);

    cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height <<endl;
    Person p2(p1);

    cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height <<endl;
}

int main()
{
    test01();

    return 0;
}
