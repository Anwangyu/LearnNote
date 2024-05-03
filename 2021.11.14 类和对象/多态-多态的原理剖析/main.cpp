#include <iostream>

using namespace std;


//动物类
class Animal
{
public:
    //虚函数
     void speak()
    {
        cout << "动物在说话" << endl;
    }

};

//猫类
class Cat :public Animal
{
public:

     void speak()
    {
        cout << "小猫在说话" << endl;
    }

};

//狗类
class Dog :public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
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
