#include <iostream>

using namespace std;

class AbstractDrinking
{
public:
    //���麯��  ֻд���� û��ʵ��
    //��ˮ
    virtual void boil() = 0;

    //����
    virtual void Brew() = 0;

    //���뱭��
    virtual void PourInCup() = 0;

    //���븨��
    virtual void PutSomething() = 0;

    //������Ʒ
    void makeDrink()
    {

        boil();
        Brew();
        PourInCup();
        PutSomething();

    }


};

//��������
class Coffee :public AbstractDrinking
{
    virtual void boil()
    {
        cout << "��ˮ" << endl;
    }

    virtual void Brew()
    {
        cout << "���ݿ���" << endl;
    }

    virtual void PourInCup()
    {
        cout << "���뱭��" << endl;
    }

    virtual void PutSomething()
    {
        cout << "�����Ǻ�ţ��" << endl;
    }
};

//������Ҷ
class Tea :public AbstractDrinking
{
public:
    virtual void boil()
    {
        cout << "��ˮ" << endl;
    }

    virtual void Brew()
    {
        cout << "���ݲ�Ҷ" << endl;
    }

    virtual void PourInCup()
    {
        cout << "���뱭��" << endl;
    }

    virtual void PutSomething()
    {
        cout << "�������" << endl;
    }
};

//��������
void doWork(AbstractDrinking*abs)//AbstractDrinking*abs = new Coffee
{
    abs->makeDrink();
    delete abs;//�ͷ�
}

void test01()
{
    //��������
    doWork(new Coffee);
    cout << "----------------------" << endl;
    //������Ҷ
    doWork(new Tea);

}
int main()
{
    test01();

    return 0;
}
