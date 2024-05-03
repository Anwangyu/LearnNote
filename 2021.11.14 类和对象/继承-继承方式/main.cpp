#include <iostream>

using namespace std;
//继承语法:class 子类 : 继承方式  父亲
/*继承方式三种
 1.公共继承
 2.保护继承
 3.私有继承
*/

//公共继承
class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1//
{
public:
    void func()
    {
        m_A = 10;//父类中公共权限 成员到子类中依然是公共权限
        m_B = 10;//父类中保护权限的成员到了子类中依然是保护权限
//        m_C = 10;父类中私有的权限 到子类中不可以访问

    }
};
void test01()
{
    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100;  保护权限内容  类内可以访问 类外不可以访问
}
//保护继承

class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 100; //父类中的公共成员到子类中变为保护权限
        m_B = 100; //父类中保护成员  到子类中不变
        //m_C = 100; 父类中的私有成员  子类访问不到
    }
} ;
void test02()
{
    Son2 s1;
    //s1.m_A = 100; //在Son2中  变为保护权限  类外访问不到
    // m_B同理
}

class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son3 : private Base3
{
public:
    void func()
    {
        m_A = 100; //父类中公共成员 到子类中变为私有成员
        m_B = 100; //父类中保护成员 到子类中变为 私有成员
        //m_C = 100; 父类中私有成员子类访问不到
    }
};

void test03()
{
    //Son3 s1;
    //s3.m_A = 100;//到Son3中  变为私有成员 类外访问不到
    //s3.m_B = 100;//到Son3中  变为私有成员 类外访问不到
}
class GrandSon3 : public Son3
{
public:
    void func()
    {
//        m_A = 100;//到了Son3中 m_A变为 私有 即使是儿子也无法访问
//        m_B = 100;
    }
};


int main()
{

    return 0;
}
