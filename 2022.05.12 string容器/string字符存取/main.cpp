#include <iostream>

#include <string>

using namespace std;

//�ַ���ȡ��ʽ����

//char& operator[](int n); //ͨ��[]��ʽȡ�ַ�
//char& operator at(int n); //ͨ��at��ʽ��ȡ�ַ�

void test01()
{

    string str = "hello";

    cout << "str = " << str << endl;

    //ͨ��[]���ʵ����ַ�

    for(int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";

    }
    cout << endl;

    //ͨ��at��ʽ���ʵ����ַ�

    for(int i = 0; i < str.size();i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    //�޸ĵ����ַ�
    str[0] = 'x';
    //hello
    cout << "str =  " << str << endl;

    str.at(1) = 'x';
    cout << "str =  " << str << endl;


}

int main()
{

    test01();


    return 0;
}
