#include <iostream>
#include <string>
using namespace std;
//��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա
//��Ԫ�ؼ�����friend
/* ����ʵ��
  ȫ�ֺ�������Ԫ
  ������Ԫ
  ��Ա��������Ԫ
*/
//��������
class Building
{
    //goodGay��ȫ�ֺ��� building�ĺ����ѿ��Է���˽������
    friend void goodGay(Building *building);
public:
    Building()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }

public:
    string m_SittingRoom;//����

private:
    string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(Building *building)
{
    cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test01()
{
    Building building;
  goodGay(&building);
}
int main()
{
    test01();

    return 0;
}
