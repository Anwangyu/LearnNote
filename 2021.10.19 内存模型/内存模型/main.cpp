#include <iostream>
#include <stdlib.h>
using namespace std;
//�������ȫ�ֱ���
int g_m = 10;
int g_n = 10;


//const���ε�ȫ�ֱ���  ȫ�ֳ���
int c_g_m=10;
int c_g_n=10;

int main()
{



  //ȫ����


  //ȫ�ֱ���



  //ȫ�ֱ�������̬����������



  //�ֲ�����
  int m = 10;
  int n = 10;
  cout <<"�ֲ�m�ĵ�ַΪ��" << (int)&m << endl;
  cout <<"�ֲ�n�ĵ�ַΪ��" << (int)&n << endl;




  //�������ȫ�ֱ�����ȡַ
  cout <<"ȫ��m�ĵ�ַΪ��" << (int)&g_m << endl;
  cout <<"ȫ��n�ĵ�ַΪ��" << (int)&g_n << endl;


  //��̬����  ������ͨ����ǰ���static��
  static int s_m = 10;
  static int s_n= 10;
  cout << "��̬����s_m�ĵ�ַΪ��" << (int)&s_m << endl;
  cout << "��̬����s_n�ĵ�ַΪ��" << (int)&s_n << endl;

  //����
  //�ַ�������
  cout << "�ַ��������ĵ�ַΪ��" <<(int)&"Hello world" << endl;

  // const���εı���
  //const ���ε�ȫ�ֱ���  ��const���εľֲ�����

  cout <<"ȫ�ֳ���c_g_m�ĵ�ַΪ��"<<(int)&c_g_m <<endl;
  cout <<"ȫ�ֳ���c_g_n�ĵ�ַΪ��"<<(int)&c_g_n <<endl;




  int c_l_m = 10;
  int c_l_n = 10;

  cout <<"�ֲ�����c_l_m�ĵ�ַΪ��"<<(int)&c_l_m<<endl;
  cout <<"�ֲ�����c_l_n�ĵ�ַΪ��"<<(int)&c_l_n<<endl;








    system("pause");
    //return 0;
}
