#include <iostream>

using namespace std;

/*��̬��C++���������������֮һ
��̬��Ϊ���ࣺ
 ��̬��̬���������غ�������������ھ�̬��̬�����ú�����
 ��̬��̬����������麯��ʵ������ʱ��̬

��̬��̬�Ͷ�̬��̬����
 ��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
 ��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ
*/

//������
class Animal
{
public:
    //�麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }

};

//è��
class Cat :public Animal
{
public:

     void speak()
    {
        cout << "Сè��˵��" << endl;
    }

};

//����
class Dog :public Animal
{
public:
    void speak()
    {
        cout << "С����˵��" << endl;
    }

};

//ִ��˵���ĺ���
//��ַ���  �ڱ���׶ξ�ȷ���˺�����ַ
//�����ִ��è����ô�����ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1.�м̳й�ϵ
//2.����Ҫ��д������麯��  ����д ��������ֵ���� ������ �����б� ��ȫ��ͬ��

//��̬��̬ʹ��
//�����ָ������� ָ���������


void doSpeak(Animal &animal)//Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);

    Animal animal;
    doSpeak(animal);
}

int main()
{
    test01();

    return 0;
}
