#include <iostream>
#include <string>
using namespace std;
//��Ԫ��Ŀ������һ�����������������һ������˽�г�Ա
//������Ԫ
class Building;
class GoodGay
{
public:
    GoodGay();

    void visit();//�ιۺ��� ���� Building������

    Building * building;
};
class Building
{
    //GoodGay���Ǳ����ĺ����ѣ����Է��ʱ�����˽��
    friend class GoodGay;
    //friend void GoodGay::visit();


public:
    Building();


public:
    string m_SittingRoom;//����

private:
    string m_BedRoom;//����

};

//����д��Ա����
Building::Building()
{
    m_SittingRoom = "����";
    m_BedRoom = "����";
}
GoodGay::GoodGay()
{
    //�������������
    building = new Building;
}
void GoodGay::visit()
{
    cout << "�û��������ڷ���:" << building->m_SittingRoom << endl;
    cout << "�û��������ڷ���:" << building->m_BedRoom << endl;
}
void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{
    test01();

    return 0;
}
