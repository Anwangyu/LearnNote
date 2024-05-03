#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
#include <cstdlib>

//�����ϵ�˽ṹ��
struct Person
{
    //����
    string m_Name;
    //�Ա� 1����  2Ů��
    int m_Sex;
    //����
    int m_Age;
    //�绰
    string m_Phone;
    //��ַ
    string m_Addr;
};


//���ͨѶ¼�ṹ��
struct Addressbooks
{
    //ͨѶ¼�б������ϵ������
    struct Person personArray[MAX];

    //ͨѶ¼�е�ǰ��¼��ϵ�˸���
    int m_Size;
};


//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
    //�ж�ͨѶ¼�Ƿ���
    if (abs->m_Size == MAX)
    {
        cout <<"ͨѶ¼�������޷����" << endl;
        return;
    }
    else
    {
        //��Ӿ�����ϵ��

        //����
        string name;
        cout <<"��������ϵ��������" << endl;
        cin >> name;
        abs->personArray[abs->m_Size] .m_Name = name; //��������
        //�Ա�
        cout <<"��������ϵ���Ա�" << endl;
        cout <<"1--����" << endl;
        cout <<"2--Ů��" << endl;
        int sex = 0;
        while(true)
        {
            //�������1����2�����˳�ѭ����������������
            cin >> sex;
             if(sex == 1 || sex == 2)
             {
            abs->personArray[abs->m_Size].m_Sex = sex;//��������
            break;
             }
             cout <<"������������������" << endl;
        }
        //����
        cout <<"���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;//��������


        //�绰
        cout <<"��������ϵ�˵绰��" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;//��������


        //סַ
        cout <<"��������ϵ��סַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //����ͨѶ¼����
        abs->m_Size++;

        cout <<"��ӳɹ�" << endl;
        system("pause");//���������������Code blocks ��  Ҫ��ʹ��system Ҫ��ͷ�ļ�
        system("cls");//����Ļ
    }
}
//2.��ʾ������ϵ��(��װ����)
void showPerson(Addressbooks * abs)
{
    // �����ж���ϵ�˵������Ƿ�Ϊ0����Ϊ0������ʾͨѶ¼Ϊ�գ���֮ ����ʾ��ϵ����Ϣ
    if(abs->m_Size == 0)
    {
        cout <<"��ǰ��ϵ�˼�¼Ϊ��" << endl;
    }
    else
    {
        for(int i= 0; i < abs->m_Size; i++)
        {
            //ˮƽ�Ʊ��\t
          cout <<"������" << abs->personArray[i].m_Name << "\t";
          cout <<"�Ա�" << (abs->personArray[i].m_Sex == 1 ?"����":"Ů��") << "\t";
          cout <<"���䣺" << abs->personArray[i].m_Age << "\t";
          cout <<"�绰: " << abs->personArray[i].m_Phone << "\t";
          cout <<"��ַ: " << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause") ;//���������
    system("cls");// ����Ļ

}

//�����ϵ�˵Ĵ��ڣ��������򷵻������ڵľ���λ�ã��������򷵻�-1
//����1 ͨѶ¼����  ����2 �Ա����������Ƿ����
int isExist(Addressbooks * abs, string name)
{
    for(int i = 0; i <abs->m_Size; i++)
    {
        //���ҵ������û�����
        if(abs->personArray[i].m_Name == name)
        {
            return i;//�ҵ���������˵ı��
        }
    }
    return -1;//û�ҵ�����-1
}

//3ɾ����ϵ��
void deletePerson(Addressbooks * abs)
{
    cout <<"������Ҫɾ������ϵ��"<< endl;
    string name;
    cin >> name;
     //-1��ʾδ�鵽 ������-1 ����鵽
    int ret = isExist(abs, name);

    if (ret != -1)
    {
        //�鵽����ʱ��ɾ��forѭ��
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];//����������ǰ�ƶ�
        }
        abs->m_Size--;//������Ա��
        cout << "ɾ���ɹ�" << endl;

    }
    else
    {
        cout <<"���޴���"<< endl;
    }
    system("pause");
    system("cls");
}
//4.������ϵ����Ϣ
void findPerson(Addressbooks * abs)
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    //�ж���ϵ���Ƿ���ͨѶ¼��
    int ret = isExist(abs,name);


    if(ret != -1)
    {
        cout << "������" << abs->personArray[ret].m_Name << "\t";
        cout << "�Ա�: " << (abs->personArray[ret].m_Sex == 1 ?"����":"Ů��") << "\t";
        cout << "����: " << abs->personArray[ret].m_Age << "\t";
        cout << "�绰: " << abs->personArray[ret].m_Phone << "\t";
        cout << "��ַ: " << abs->personArray[ret].m_Addr << endl;
     }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}
//5.�޸���ϵ��
void modifyPerson(Addressbooks * abs)
{
    cout << "������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);

    if(ret != -1)//�ҵ���ϵ��
    {
        //����
        string name;
        cout <<"����������:" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        //�Ա�
        cout <<"�������Ա�"<< endl;
        cout <<"1--��"<< endl;
        cout <<"2--Ů"<< endl;
        int sex = 0;

        while (true)
        {
            cin >> sex;
        if(sex == 1 || sex == 2)
           {

            abs->personArray[ret].m_Sex = sex;
            break;
           }
           cout <<"������������������"<< endl;
        }




        //����
        cout <<"����������:"<<endl;
        int age = 0;
        cin >> age ;
        abs->personArray[ret].m_Age = age;



        //�绰
        cout << "��������ϵ�绰:" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        //סַ
        cout << "������סַ: " << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "�޸ĳɹ�" << endl;
    }
    else//δ�ҵ�
    {
        cout <<"���޴���"<< endl;
    }
    system("pause");
    system("cls");

}

//6.�����ϵ��
void cleanPerson(Addressbooks * abs)
{
    abs->m_Size = 0;
    //�߼�����ղ���
    cout << "ͨѶ¼�����" << endl;
    system("pause");
    system("cls");//�����Ļ

}


void showMenu()
{
    cout << "�����**************�����" << endl;
    cout << "�����*1.�����ϵ��*�����" << endl;
    cout << "�����*2.��ʾ��ϵ��*�����" << endl;
    cout << "�����*3.ɾ����ϵ��*�����" << endl;
    cout << "�����*4.������ϵ��*�����" << endl;
    cout << "�����*5.�޸���ϵ��*�����" << endl;
    cout << "�����*6.�����ϵ��*�����" << endl;
    cout << "�����*0.�˳�ͨѶ¼*�����" << endl;
    cout << "�����**************�����" << endl;

}

int main()
{
    //����ͨѶ¼�ṹ�����
    Addressbooks abs;
    //��ʼ��ͨѶ¼��ǰ��Ա����
    abs.m_Size = 0;




    //�����������
    int select = 0;

    while(true)
    {

    //�˵�����
    showMenu();
    cin >> select;
    switch(select)
        {
        //�û��Բ˵��ĵ����1.2.3.4.5.6.0��
        case 1://1.�����ϵ��
            addPerson(&abs);//(&��ַ���� �޸�ʵ��)
            break;
        case 2://.��ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3://3.ɾ����ϵ��
            deletePerson(&abs);
            break;
        case 4://4.������ϵ��
            findPerson(&abs);
            break;
        case 5://5.�޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6://6.�����ϵ��
            cleanPerson(&abs);
            break;
        case 0://0.�˳�ͨѶ¼
            cout <<"��ӭ�´�ʹ��" << endl;
            //system("pause")
            return 0;
            break;


        default:
            break;

        }

     }
     return 0;
}
