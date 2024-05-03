#include <iostream>
#include <string>
using namespace std;
//友元的目的就是让一个函数或者类访问另一个类中私有成员
//友元关键字是friend
/* 三种实现
  全局函数做友元
  类做友元
  成员函数做友元
*/
//建筑物类
class Building
{
    //goodGay是全局函数 building的好朋友可以访问私有属性
    friend void goodGay(Building *building);
public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_SittingRoom;//客厅

private:
    string m_BedRoom;//卧室
};

//全局函数
void goodGay(Building *building)
{
    cout << "好朋友全局函数 正在访问：" << building->m_SittingRoom << endl;
    cout << "好朋友全局函数 正在访问：" << building->m_BedRoom << endl;
}
void test01()
{
    Building building;
  goodGay(&building);
}
int main()
{
    test01();

    return 0;
}
