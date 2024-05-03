#include <iostream>
#include <string>
using namespace std;

//多态的优点：
//代码组织结构清晰
//可读性强
//利于前期和后期的扩展以及维护

//普通写法

class Calculator
{
public:
    int getResult(string oper)//操作符
    {
        if(oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        else if(oper == "/")
        {
            return m_Num1 / m_Num2;
        }
        //若要扩展新功能 需要修改源码
        //实际开发中  遵循  开闭原则：对扩展进行开发，对修改进行关闭

    }
    int m_Num1;//操作数
    int m_Num2;//操作数
};

void test01()
{
    //创建计算器对象
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

    cout << c.m_Num1 << "+" << c.m_Num2 << "=" <<c.getResult("+") << endl;

    cout << c.m_Num1 << "-" << c.m_Num2 << "=" <<c.getResult("-") << endl;

    cout << c.m_Num1 << "*" << c.m_Num2 << "=" <<c.getResult("*") << endl;

    cout << c.m_Num1 << "/" << c.m_Num2 << "=" <<c.getResult("/") << endl;

}
//利用多态实现计算器

//实现计算器的抽象类

class AbstractCalculator
{
public:
    virtual int getResult()//父类
    {
        return 0;
    }
    int m_Num1;//操作符
    int m_Num2;//操作符
};

//加法计算器的类
class AddCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};


void test02()
{
    //多态使用条件
    //父类指针或者引用指向子类对象

    //加法运算
    AbstractCalculator * abc = new AddCalculator;//堆区
    abc->m_Num1 = 100;//赋值运算
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //堆区用完后记得销毁
    delete abc;

    //减法计算器

    abc = new SubCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
    delete abc;

    //乘法运算
    abc = new MulCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
    delete  abc;


}
int main()
{
    //test01();

    test02();


    return 0;
}
