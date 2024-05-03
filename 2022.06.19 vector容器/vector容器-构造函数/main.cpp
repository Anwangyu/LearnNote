#include <iostream>

#include <vector>
using namespace std;

//vector��������
//vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
//
//vector����ͨ��������
//��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//
//��̬��չ��
//��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ�����ݿ����¿ռ䣬�ͷ�ԭ�ռ�


//vector�����ĵ�������֧��������ʵĵ�����

//����ԭ�ͣ�
//vector<T> v;   //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(),v.end()); //��v (beigin().end())�����е�Ԫ�ؿ���������
//vector(n,elem); //���캯����n��elem����������
//vector(const vector &vec); //�������캯��

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//�ع˵�:
//push_back��˼�������Ϊ��������;
//iterator ������

void test01()
{
    vector<int>v1;//Ĭ�Ϲ��� �޲ι���

    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    printVector(v1);

    //ͨ������ķ�ʽ���й���

    vector<int>v2(v1.begin(), v1.end());

    printVector(v2);

    //n��elem��ʽ����
    vector<int>v3(10,100);//��һ��Ϊ����  �ڶ���Ϊ��ֵ
    printVector(v3);

    //��������
    vector<int>v4(v3);
    printVector(v4);

}

int main()
{
    test01();

    return 0;
}
