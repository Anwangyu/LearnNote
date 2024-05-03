/*
#include <stdio.h>
#include <malloc.h>

#include <algorithm>
using namespace std;

typedef struct node
{
    char data;
    struct node *lchild;
    struct node *rchild;
} BTNode;

BTNode *CreateBTNode(char str[]);
int LeafCount(BTNode *b);
int BTHeight(BTNode *b);

int main()
{
    char str[] = "A(B(D(,G)),C(E,F))";
    BTNode *b = CreateBTNode(str);

    printf("%d\n", BTHeight(b));
    printf("----\n");
    printf("%d\n", LeafCount(b));

    system("pause");

    return 0;
}
BTNode *CreateBTNode(char str[])
{
    BTNode *st[100];
    int top = -1, j = 0, k;
    char ch = str[j];
    BTNode *b = NULL, *p;
    while (ch != '\0')
    {
        switch (ch)
        {
        case '(':
            top++;
            st[top] = p;
            k = 1;
            break;
        case ')':
            top--;
            break;
        case ',':
            k = 2;
            break;
        default:
            p = (BTNode *)malloc(sizeof(BTNode));
            p->data = ch;
            p->lchild = NULL;
            p->rchild = NULL;
            if (b == NULL)
            {
                b = p;
            }
            else
            {
                switch (k)
                {
                case 1:
                    st[top]->lchild = p;
                    break;
                case 2:
                    st[top]->rchild = p;
                    break;
                }
            }
        }
        j++;
        ch = str[j];
    }
    return b;
}

int BTHeight(BTNode *b)
{

    if (b == NULL)
    {
        return 0; //�����ĸ߶�Ϊ0
    }
    else
    {
        return 1 + (BTHeight(b->lchild) > BTHeight(b->rchild)) ? BTHeight(b->lchild) : BTHeight(b->rchild);
    }
}

int LeafCount(BTNode *b) //�������T��Ҷ�ӽ�����
{
    int lnum, rnum;
    if (b == NULL) //��������0
        return 0;
    else if (b->lchild == NULL && b->rchild == NULL)
        return 1; //ΪҶ�ӽ��ʱ����1
    else
    {
        lnum = LeafCount(b->lchild); //��������Ҷ�ӽ�����
        rnum = LeafCount(b->rchild); //��������Ҷ�ӽ�����
        return (lnum + rnum);        //���غ�
    }
}
*/

#include<iostream>
using std::cout;

int main()
{
	for (int i=1; i<=9;  i++)//���������
	{
		for (int j=1; j<=i; j++)//����������
		{
			int m=j*i;
			cout<<j<<"x"<<i<<"="<<m<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}










