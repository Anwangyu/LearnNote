#include <iostream>
#include <vector>

using namespace std;

//����
//��vector�����������ʹ�С����
//
//����ԭ�ͣ�
//empty();   //�ж������Ƿ�Ϊ��
//capacity(); //����������
//size();//����������Ԫ�صĸ���
//resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
//                 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num,elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
//                   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);


    if(v1.empty()) //Ϊ�� ��������Ϊ��
    {
        cout << "v1Ϊ��" << endl;
    }
    else
    {
        cout << "v1��Ϊ��" << endl;
        cout << "v1������Ϊ��" << v1.capacity() << endl;
        cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
    }

    //����ָ����С
    v1.resize(15);  //�������ذ汾����ָ��Ĭ�����ֵ  ���磨15��100��
    printVector(v1);//�������ָ���ı�ԭ���ĳ� Ĭ����0�����������

    //
    v1.resize(5);
    printVector(v1);//������ָ���Ķ��� ��ߵ��Զ�ɾ������Ĳ���

}

int main()
{

    test01();
    return 0;
}


//�ܽ� �ӿ�
//�ж��Ƿ�Ϊ��   empty
//����Ԫ�ظ��� size
//������������ capacity
//����ָ����С resize
