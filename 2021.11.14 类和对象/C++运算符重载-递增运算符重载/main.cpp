#include <iostream>

using namespace std;
//作用：通过重载递增运算符，实现自己的整型数据  ++

//重载递增运算符

//自定义整型

class MyInteger
{
public:
    MyInteger()
    {
        m_Num = 0;
    }

private:

    int m_Num;


};
//重载左移运算符
ostream& operator <<(ostream& cout , MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;
    cout << myint << endl;


}

int main()
{
    test01();
    return 0;
}
