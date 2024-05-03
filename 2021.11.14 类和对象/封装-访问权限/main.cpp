#include <iostream>

using namespace std;
//类 在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限有三种
/*1.public     公共权限（类内可以访问  ，类外可以访问  ）
  2.protected  保护权限（类内可以访问  ，类外不可以访问）
  3.private    私有权限（类内可以访问  ，类外不可以访问）
*/

class Person
{
    public://公共权限
    string m_Name;

protected://保护权限
    string m_Car;
private://私有权限
    string m_Password;


public:
    void func()
    {
        m_Name = "张三";
        m_Car  = "拖拉机";
        m_Password = 123456 ;
    }
};

int main()
{
    Person p1;//具体对象
    p1.m_Name = "李四";
    //保护权限 类外无法访问p1.m_Car
    //私有权限内容类外无法访问p1.m_Password
    p1.func();
    return 0;
}
