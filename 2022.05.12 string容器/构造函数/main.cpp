#include <iostream>

using namespace std;
#include <string>

//char*��һ��ָ��
//string��һ���� ���ڲ���װ��char*����������ַ�������һ��char*������


//�ص㣺
//string ���ڲ���װ �˺ܶ��Ա����

//ԭ��
//string();
//string(const char* s);
//string(const string& str);
//string(int n, char c);

//string�Ĺ��캯��


void test01()
{
    string s1;//Ĭ�Ϲ���

    const char * str = "hello world";

    string s2(str);
    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(5,'a');
    cout << "s4 = " << s4 << endl;
}

int main()
{

    test01();


    return 0;
}
