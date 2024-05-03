#include <iostream>

using namespace std;

//����ͬ�����

//�����CPU��
class CPU
{
public:
    //����ļ��������
    virtual void caculate() = 0;

};
//������Կ�
class VideoCard
{
    //������ʾ����
public:
    virtual void display() = 0;

};
//������ڴ���
class Memory
{
    //����洢����
public:
    virtual void storage() = 0;

};

//������
class Computer
{
public:
    Computer(CPU * cpu, VideoCard * vc, Memory * mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;

    }
    //�ṩ�����ĺ���
    void work()
    {
        m_cpu->caculate();

        m_vc->display();

        m_mem->storage();
    }

    //�ṩ��������  �ͷ�3���������
    ~Computer()
    {
        //�ͷ�CPU���
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
            cout << "������CPU" << endl;
        }
        //�ͷ��Կ����
        if(m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
            cout << "������VC" << endl;
        }
         //�ͷ�CPU���
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
            cout << "������Mem" << endl;
        }

    }


private:
    CPU * m_cpu;//CPU�����ָ��
    VideoCard * m_vc;//�Կ����ָ��
    Memory * m_mem;//�ڴ������ָ��



};

//����������� Intel
class IntelCPU :public CPU
{
public:
    virtual void caculate()
    {
        cout << "Inter��CPU��ʼ����" << endl;
    }
};
class IntelVideoCard :public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel���Կ���ʼ��ʾ" << endl;
    }
};
class IntelMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel���ڴ�����ʼ��ʾ" << endl;
    }
} ;

//Lenovo
class LenovoCPU :public CPU
{
public:
    virtual void caculate()
    {
        cout << "Lenovo��CPU��ʼ����" << endl;
    }
};
class LenovoVideoCard :public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo���Կ���ʼ��ʾ" << endl;
    }
};
class LenovoMemory :public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo���ڴ�����ʼ��ʾ" << endl;
    }
} ;

void test01()
{
    //��һ̨�������
    CPU * intelCpu = new IntelCPU;
    VideoCard * intelCard = new IntelVideoCard;
    Memory * intelMem = new IntelMemory;
//
//    ������һ̨����
    Computer * computer1= new Computer(intelCpu, intelCard, intelMem);
    computer1->work();
    delete computer1;
//
cout<< "-----------------------" << endl;
//    �ڶ�̨������װ
    Computer * computer2= new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;
//
cout << "----------------------" << endl;
//    ����̨����
    Computer * computer3= new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
    computer3->work();
    delete computer3;

}
int main()
{
    test01();

    return 0;
}
