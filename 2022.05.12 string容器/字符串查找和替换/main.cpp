#include <iostream>

using namespace std;

//�ַ������Һ��滻

//����ԭ��:
//    int find(const string& str,int pos = 0) const;//����str��һ�γ���λ�ã���pos��ʼ����
//    int find(const char* s,int pos = 0) const; //����s��һ�γ���Ϊ��ּ����pos��ʼ����
//    int find(const char* s,int pos,int n) const;//��posλ�ò���s��ǰn���ַ���һ��λ��
//    int find(const char  c,int pos = 0)const; //�����ַ�c��һ�γ��ֵ�λ��
//    int rfind(const string& str,int pos = npos) const;//�����ַ�c��һ�γ���λ��
//    int rfind(const char* s, int pos = npos) const;//����s���һ�γ��ֵ�λ��,��Pos��ʼ����
//    int rfind(const char* s,int pos,int n)const;//��pos����s��ǰn���ַ����һ��λ��
//    int rfind(const char c,int pos = 0)const;//�����ַ�c���һ�γ���λ��
//    string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
//    string& replace(int pos,int n,const char*s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//


void test01()
{

    string str1 = "abcdefg";

    int pos = str1.find("de");//û�оͷ���-1  ��


    if(pos==-1)
    {
        cout << "δ�ҵ��ַ���" << endl;
    }
    else
    {
        cout << "�ҵ��ַ���,pos =" << pos << endl;
    }



    //rfind ��find����
    //rfind�����������  find�������ǲ���
    pos = str1.rfind("de");

    cout << "pos = " << pos <<endl;

    cout << "pos=" << pos << endl;

}

//�滻
void test02()
{
    string str1 = "abcdefgh";




}


int main()
{
    test01();








    return 0;
}
