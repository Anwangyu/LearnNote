#include <iostream>
#include <stack>
using namespace std;

//ջstack����
/*
���ýӿڣ�
��ջ��push
��ջ��pop
����ջ����top
�ж�ջ�Ƿ�Ϊ�գ�empty
����ջ�Ĵ�С:size
*/

void test01()
{
    //�Ƚ���������ݽṹ
    stack<int>s;

    //��ջ
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "ջ�Ĵ�С��" << s.size() << endl;

    //ֻҪջ��Ϊ�� �Ͳ鿴ջ�� ��ִ�г�ջ
    while(!s.empty())
    {
        //�鿴ջ��Ԫ��
        cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;

        //��ջ
        s.pop();
    }

    cout << "ջ�Ĵ�С��" << s.size() << endl;


}

int main()
{
    test01();


    return 0;
}
