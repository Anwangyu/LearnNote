#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void test01()
{
    //ͷ�ļ�

    //����������
    ifstream ifs;
    //���ļ����ж��Ƿ�򿪳ɹ�
      ifs.open("test.txt",ios::in);
    if ( !ifs.is_open())
    {
        cout << "�ļ���ʧ��" << endl;
      return;
    }
    //������
    //��һ��
//    char buf[1024] = { 0 };
//    while (ifs >> buf)
//    {
//        cout << buf << endl;
//    }
     //�ڶ�����
//     char buf[1024] = {0};
//     while (ifs.getline(buf,sizeof(buf)))
//     {
//         cout << buf << endl;
//     }
     //������
//     string buf;
//
//     while (getline(ifs,buf))
//     {
//         cout << buf << endl;
//     }
     //������
     char c;
     while((c = ifs.get()) !=EOF)//�ļ�β
     {
         cout << c;
     }
    //�ر��ļ�
    ifs.close();
}
int main()
{
     test01();
    return 0;
}
