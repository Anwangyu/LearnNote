#include <iostream>
#include <fstream>
using namespace std;

/*��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
ͨ���ļ����Խ����ݳ־û�

C++�ж��ļ�������Ҫ����ͷ�ļ� <fstream>

�ļ����ͷ�Ϊ���ţ�
1.�ı��ļ� - �ļ����ı���ASCLL����ʽ�洢�ڼ������
2.�������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������

�����ļ���������
1.ofstream:д����
2.ifstream:������
3.fstream :��д����
*/

/*д�ļ�
1.����ͷ�ļ�
#include <fstream>
2.����������
ofstream ofs;
3.���ļ�
ofs.open("�ļ�·��"���򿪷�ʽ);
4.д����
ofs << "д�������";
5.�ر��ļ�
ofs.close();
*/

/*�ļ��򿪷�ʽ:
ios::in Ϊ���ļ������ļ�
ios::out Ϊд�ļ������ļ�
ios::ate ��ʼλ��:�ļ�β
ios::app ׷�ӷ�ʽд�ļ�
ios::trunc ����ļ�������ɾ�����ٴ���
ios::binary �����Ʒ�ʽ

ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
���磺�ö����Ʒ�ʽд�ļ� ios::binary |ios::out
*/

void test01()
{
    //����������
    ofstream ofs;
    //ָ���򿪷�ʽ
    ofs.open("test.txt",ios::out);
    //д����
    ofs << "����:zhangsan" << endl;
    ofs << "xxxxxxxxxxxxx" << endl;

    //�ر��ļ�
    ofs.close();
}
int main()
{
    test01();

    return 0;
}
