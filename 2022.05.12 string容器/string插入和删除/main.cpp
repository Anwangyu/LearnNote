#include <iostream>
#include <string>

using namespace std;
//�����ɾ��
//����ԭ�ͣ�
//string& insert(int pos, const char* s);  //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���N���ַ���c
//string& erase(int pos , int n = npos); //ɾ����Pos��ʼ��N���ַ�

void test01()
{
    string str = "hello";

    //����
    str.insert(1,"1117");//����ӵ�һ��λ�ÿ�ʼ��



    cout << "str = " << str << endl;


    //ɾ��
    str.erase(1,4);
    cout << "str = " << str << endl;

}

int main()
{
    test01();




    return 0;
}
