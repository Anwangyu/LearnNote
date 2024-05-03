#include <iostream>

using namespace std;

//����������
//  ���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//  �������Ӵ�С�������㷨Ϊѡ������
//  �ֱ�����char�����int������в���

//ʵ��ͨ�� �������������ĺ���
//���� �Ӵ�С  �㷨 ѡ��  ���� char ���顢int����
//�����ĺ���ģ��


//��������ģ��
template<class T>
void mySwap(T&a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}


//�����㷨
template<class T>
void mySort(T arr[],int len)
{
    for(int i = 0;i < len;i++)
    {
        int max = i;//�϶����ֵ���±�
        for (int j = i + 1; j < len;j++)
        {
            //�϶������ֵ �ȱ���������ֵҪС��˵��J�±��Ԫ�ز������������ֵ
            if(arr[max] < arr[j])
            {
                max = j;//�������ֵ�±�
            }
        }
        if(max != i)
        {
            //����max��iԪ��
             mySwap(arr[max],arr[i]);
        }
    }
}

//�ṩ��ӡ����ģ��
template<class T>
void printArray(T arr[],int len)
{
    for(int i =0;i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void text01()
{

    //����char����
    char charArr[] ="badcfe";

    cout << "sizeof(charArr)=" << sizeof(charArr) << endl;
    cout << "sizeof(char)=" << sizeof(char) << endl;

    int num = sizeof(charArr)/sizeof(char);
    mySort(charArr,num);

    printArray(charArr,num);

}

void text02()
{
    //����Int ����
    int intArr[] = { 7,5,6,8,2,1,3,4,9,};

    cout << "sizeof(intArr)=" << sizeof(intArr) <<endl;
    cout << "sizeof(int)   =" << sizeof(int) << endl;
    int num = sizeof(intArr)/sizeof(int);

    mySort(intArr,num);

    printArray(intArr,num);
}
int main()
{
    text01();
    //text02();
    return 0;
}
