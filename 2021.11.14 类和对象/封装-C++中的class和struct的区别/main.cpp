#include <iostream>

using namespace std;
//C++中struct和class唯一的区别就在于  默认的访问权限不同
/*区别：
  struct：默认权限为公共
  class 默认权限为私有*/

  class C1//默认权限为私有
  {
      int m_A;
  };
  struct C2//默认权限为公共
  {
      int m_A;
  };

int main()
{
    C1 c1;
   //c1.m_A = 100; 错误 原因： 访问权限是私有
   C2 c2;
   c2.m_A = 100;

    return 0;
}
