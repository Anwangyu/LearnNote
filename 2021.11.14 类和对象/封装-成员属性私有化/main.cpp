#include <iostream>
#include <string>

using namespace std;
//优点1 ：将所有成员属性设置为私有，可以自己控制读写权限
//优点2 ：对于写权限，我们可以检测数据的有效性
class Person
{
public:
    //姓名设置可读可写
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    //获取姓名
    string getName()
    {
        return m_Name;
    }
    //设置年龄
    int getAge()
    {
        //m_Age = 0;//初始化0岁
        return m_Age;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            m_Age = 0;
            cout<<"输入有误"<<endl;
            return ;
        }
        m_Age = age;
    }

    //设置情人 只写
    void setLover(string lover)
    {
        m_Lover = lover;
    }



private:
    //姓名
    string m_Name;
    //年龄
    int m_Age;
    //情人
    string m_Lover;
};
int main()
{
    Person p;
    p.setName("张三");
    cout <<"姓名:"<< p.getName() <<endl;
    p.setAge(21);
    cout <<"年龄:"<< p.getAge() <<endl;

    p.setLover("石原");
    //cout <<"情人为："<<p.getLover()<< endl; 不可访问 只写权限

    return 0;
}
