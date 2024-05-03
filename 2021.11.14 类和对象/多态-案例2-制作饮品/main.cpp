#include <iostream>

using namespace std;

class AbstractDrinking
{
public:
    //纯虚函数  只写功能 没做实现
    //煮水
    virtual void boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅料
    virtual void PutSomething() = 0;

    //制作饮品
    void makeDrink()
    {

        boil();
        Brew();
        PourInCup();
        PutSomething();

    }


};

//制作咖啡
class Coffee :public AbstractDrinking
{
    virtual void boil()
    {
        cout << "煮水" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入糖和牛奶" << endl;
    }
};

//制作茶叶
class Tea :public AbstractDrinking
{
public:
    virtual void boil()
    {
        cout << "煮水" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入枸杞" << endl;
    }
};

//制作函数
void doWork(AbstractDrinking*abs)//AbstractDrinking*abs = new Coffee
{
    abs->makeDrink();
    delete abs;//释放
}

void test01()
{
    //制作咖啡
    doWork(new Coffee);
    cout << "----------------------" << endl;
    //制作茶叶
    doWork(new Tea);

}
int main()
{
    test01();

    return 0;
}
