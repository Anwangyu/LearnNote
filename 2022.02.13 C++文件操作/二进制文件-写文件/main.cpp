#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*�Զ����Ƶķ�ʽ���ļ����ж�д����
�򿪷�ʽҪָ��Ϊ ios::binary

д�ļ�
�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ�ͣ�ostream &write(const char * buffer,int len);
��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
*/

class Person
{
public:
    char m_Name[64];
    int m_Age;

};

void test01()
{
    //ͷ�ļ�

    //����������
    ofstream ofs("person.txt",ios::out | ios::binary);
    //���ļ�
//    ofs.open("person.txt",ios::out | ios::binary);
    //д�ļ�
    Person p = {"����" ,18};
    ofs.write((const char *)&p,sizeof(Person));

    //�ر��ļ�
    ofs.close();
}

int main()
{
    test01();

    return 0;
}
