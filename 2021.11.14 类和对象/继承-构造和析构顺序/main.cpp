#include <iostream>

using namespace std;
//����̳и���󣬵������������Ҳ����ø���Ĺ��캯��
//�̳��й����������˳��
class Base
{
public:
    Base()
    {
        cout << "Base�Ĺ��캯��" << endl;
    }
    ~Base()
    {
        cout << "Base����������" << endl;
    }
};

class Son :public Base
{
    public:
    Son()
    {
        cout << "Son�Ĺ��캯��" << endl;
    }
    ~Son()
    {
        cout << "Son����������" << endl;
    }
};
void test01()
{
    //Base b;
    Son s;
    //�ȹ��츸�� �ٹ�������  ��������˳���빹���෴
}
int main()
{
    test01();

    return 0;
}
