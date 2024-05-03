#include <iostream>
#include <string>//使用string所必须使用的头文件
using namespace std;
//类
//类中的属性和行为，我们统一称为 成员
//属性 成员属性 成员变量 都是说类 中的
//行为 成员函数 成员方法  指类中的行为
//属性
class Student
{
    public:

    string m_Name;
    //获取一个学生的姓名
    int m_Id;//学号

    void showStudent()
    {
        cout << " 姓名：" << m_Name << " 学号：" << m_Id << endl;
    }
    //对姓名赋值
   void setName(string name)
   {
    m_Name = name;
   }
   //对学号赋值
   void setId(int id)
   {
       m_Id = id;
   }

};

int main()
{
    //创建具体的学生
    //实例化
    Student s1;
    //给S1对象进行属性赋值操作
    s1.setName("王语");
    s1.setId(1) ;

    //展示信息 调用函数
    s1.showStudent();
    //学生二号
    Student s2;
    s2.m_Name = "王生";
    s2.m_Id = 2;
    s2.showStudent();
    return 0;
}
