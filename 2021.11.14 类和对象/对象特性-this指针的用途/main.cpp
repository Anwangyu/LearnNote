#include <iostream>

using namespace std;
/*this ָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
this ָ�벻��Ҫ���壬ֱ��ʹ�ü���
��;��
    ���βκͳ�Ա����ͬ��ʱ������thisָ��������
    ����ķǾ�̬��Ա�����з��ض�������ʹ�� return *this
*/

class Person
{
public:
    Person(int age)
    {
        //thisָ��ָ�򱻵��õĳ�Ա������������
        this->age = age;
    }

    Person& PersonAddAge(Person &p)
    {
        this->age +=p.age;
        //thisָ��p2��ָ�룬��*this ָ�����p2���������
        return *this;
    }



    int age;
};
//������Ƴ�ͻ
void test01()
{
    Person p1(18);
    cout << "p1������Ϊ��" << p1.age <<endl;
}
//���ض�������*this
void test02()
{
    Person p1(10);

    Person p2(10);
     //��ʽ���˼��
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout <<"p2�����䣺" << p2.age <<endl;
}

int main()
{
    //test01();
    test02();

    return 0;
}
