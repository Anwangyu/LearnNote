#include <iostream>
#include <string>
using namespace std;

//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//  此时  只需  将父类中的析构函数改为虚析构或者纯虚析构

//虚析构和纯虚析构共性
//可以解决父类指针释放子类对象
//都需要有具体的函数实现
//
//虚析构和纯虚析构的区别
//如果是纯虚析构，该类属于抽象类，无法实例化对象
//
//虚析构语法：
//virtual ~类名(){}
//
//纯虚析构语法：
//virtual ~类名(){}
//类名

class Animal
{
public:
    Animal()
    {
        cout << "Animal构造函数调用" << endl;
    }
    //利用虚析构可以解决父类指针释放子类对象时不干净的问题
//    virtual ~Animal()
//    {
//        cout << "Animal析构函数调用" << endl;
//    }
    //虚析构和纯虚析构只能有一个  需要声明 也需要实现
    //有了纯虚析构之后  这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;
    //纯虚函数
    virtual void speak() = 0;
};

//纯虚析构的实现
Animal::~Animal()
{
    cout << "Animal的纯虚析构" << endl;
}

class Cat :public Animal
{
public:

    Cat(string name)
    {
        cout << "Cat构造函数调用" << endl;
        m_Name = new string(name);
    }
    virtual void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }

    ~Cat()
    {
        if(m_Name != NULL)
        {
            cout << "Cat的析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    string *m_Name;


};

void test01()
{
    Animal * animal = new Cat("Tom");
    animal->speak();
    //父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露情况

    delete animal;

}
int main()
{
    test01();

    return 0;
}
