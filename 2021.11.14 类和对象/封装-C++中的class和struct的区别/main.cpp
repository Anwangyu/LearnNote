#include <iostream>

using namespace std;
//C++��struct��classΨһ�����������  Ĭ�ϵķ���Ȩ�޲�ͬ
/*����
  struct��Ĭ��Ȩ��Ϊ����
  class Ĭ��Ȩ��Ϊ˽��*/

  class C1//Ĭ��Ȩ��Ϊ˽��
  {
      int m_A;
  };
  struct C2//Ĭ��Ȩ��Ϊ����
  {
      int m_A;
  };

int main()
{
    C1 c1;
   //c1.m_A = 100; ���� ԭ�� ����Ȩ����˽��
   C2 c2;
   c2.m_A = 100;

    return 0;
}
