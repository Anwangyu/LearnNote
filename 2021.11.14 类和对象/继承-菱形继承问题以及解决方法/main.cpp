#include <iostream>

using namespace std;

/*���μ̳и��
����������̳�ͬһ������
����ĳ����ͬʱ�̳�������������
���ּ̳б���Ϊ���μ̳У���ʯ�̳У�
*/

//������
class Animal
{
public:
     int m_Age;
};
//������̳� ������μ̳�����
//�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ �����
//����
class Sheep:virtual public Animal
{

};
//����
class Tuo:virtual public Animal
{

};
//������
class SheepTuo:public Sheep, public Tuo
{

};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;
//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
    cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;

    //�����������֪�� ֻҪ��һ�ݾͿ��� �����μ̳е�������������  ��Դ�˷�


}
int main()
{
    test01();
    return 0;
}
