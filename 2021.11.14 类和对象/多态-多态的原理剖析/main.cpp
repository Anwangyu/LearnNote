#include <iostream>

using namespace std;


//������
class Animal
{
public:
    //�麯��
     void speak()
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

void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
}
int main()
{
    test02();

    return 0;
}
