#include <iostream>

using namespace std;
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        //����ԭ������Ϊ�����ָ��ΪNULL

        if(this == NULL)
        {
            return;
        }
        cout << "age = " << this->m_Age << endl;
    }
    int m_Age;
};
void test01()
{
    Person * p = NULL;

    p->showClassName();

    p->showPersonAge();
}

int main()
{
    test01();

    return 0;
}
