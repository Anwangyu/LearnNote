#include <iostream>

using namespace std;

//�ӿ�  �Ӵ�  ������ȡ

//���ַ����л�ȡ��Ҫ���Ӵ�

//����ԭ��
//string substr(int pos = 0,int n = npos) const;//������pos��ʼ��N���ַ���ɵ��ַ���

void test01()
{
    string str = "abcdef";

    string subStr = str.substr(1,3);

    cout <<  "subStr= " << subStr << endl;


}


//ʵ�ò���  ����
void test02()
{
    string email = "zhangsan@sina.com";

    //���ʼ���ַ�� ��ȡ�û�����Ϣ

    int pos = email.find("@");

    string usrName = email.substr(0,pos);

    cout << usrName << endl;


}


int main()
{
    test01();
    test02();




    return 0;
}
