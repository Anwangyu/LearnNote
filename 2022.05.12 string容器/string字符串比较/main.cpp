#include <iostream>

using namespace std;


//�ַ����Ƚ��ǰ���ASCII����жԱ�
//�����ַ������ �򷵻�  0
//��һ�����ڵڶ��� ���� 1  ���� -1

//����ԭ�ͣ�
//int compare(const string &s) const;//���ַ���s�Ƚ�
//int compare(const char*s);//���ַ���s�Ƚ�


void test01()
{
    string str1 = "hell";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 = str2" << endl;
    }
    else if(str1.compare(str2) > 0)
    {
        cout << "str1 > str2" << endl;
    }
    else
    {
        cout << "str1 < str2" << endl;
    }

}


int main()
{

    test01();



    return 0;
}
