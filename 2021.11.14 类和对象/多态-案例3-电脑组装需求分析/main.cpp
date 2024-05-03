#include <iostream>

using namespace std;

//抽象不同零件类

//抽象的CPU类
class CPU
{
public:
    //抽象的计算机函数
    virtual void caculate() = 0;

};
//抽象的显卡
class VideoCard
{
    //抽象显示函数
public:
    virtual void display() = 0;

};
//抽象的内存条
class Memory
{
    //抽象存储函数
public:
    virtual void storage() = 0;

};

//电脑类
class Computer
{
public:
    Computer(CPU * cpu, VideoCard * vc, Memory * mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;

    }
    //提供工作的函数
    void work()
    {
        m_cpu->caculate();

        m_vc->display();

        m_mem->storage();
    }

    //提供析构函数  释放3给电脑零件
    ~Computer()
    {
        //释放CPU零件
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
            cout << "虚析构CPU" << endl;
        }
        //释放显卡零件
        if(m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
            cout << "虚析构VC" << endl;
        }
         //释放CPU零件
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
            cout << "虚析构Mem" << endl;
        }

    }


private:
    CPU * m_cpu;//CPU零件的指针
    VideoCard * m_vc;//显卡零件指针
    Memory * m_mem;//内存条零件指针



};

//具体零件厂商 Intel
class IntelCPU :public CPU
{
public:
    virtual void caculate()
    {
        cout << "Inter的CPU开始计算" << endl;
    }
};
class IntelVideoCard :public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示" << endl;
    }
};
class IntelMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel的内存条开始显示" << endl;
    }
} ;

//Lenovo
class LenovoCPU :public CPU
{
public:
    virtual void caculate()
    {
        cout << "Lenovo的CPU开始计算" << endl;
    }
};
class LenovoVideoCard :public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示" << endl;
    }
};
class LenovoMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo的内存条开始显示" << endl;
    }
} ;

void test01()
{
    //第一台电脑零件
    CPU * intelCpu = new IntelCPU;
    VideoCard * intelCard = new IntelVideoCard;
    Memory * intelMem = new IntelMemory;
//
//    创建第一台电脑
    Computer * computer1= new Computer(intelCpu, intelCard, intelMem);
    computer1->work();
    delete computer1;
//
cout<< "-----------------------" << endl;
//    第二台电脑组装
    Computer * computer2= new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;
//
cout << "----------------------" << endl;
//    第三台电脑
    Computer * computer3= new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
    computer3->work();
    delete computer3;

}
int main()
{
    test01();

    return 0;
}
