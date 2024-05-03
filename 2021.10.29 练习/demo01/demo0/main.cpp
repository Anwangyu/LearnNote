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
        return 0; //空树的高度为0
    }
    else
    {
        return 1 + (BTHeight(b->lchild) > BTHeight(b->rchild)) ? BTHeight(b->lchild) : BTHeight(b->rchild);
    }
}

int LeafCount(BTNode *b) //求二叉树T的叶子结点个数
{
    int lnum, rnum;
    if (b == NULL) //空树返回0
        return 0;
    else if (b->lchild == NULL && b->rchild == NULL)
        return 1; //为叶子结点时返回1
    else
    {
        lnum = LeafCount(b->lchild); //求左子树叶子结点个数
        rnum = LeafCount(b->rchild); //求右子树叶子结点个数
        return (lnum + rnum);        //返回和
    }
}
*/

#include<iostream>
using std::cout;

int main()
{
	for (int i=1; i<=9;  i++)//控制输出行
	{
		for (int j=1; j<=i; j++)//控制输入列
		{
			int m=j*i;
			cout<<j<<"x"<<i<<"="<<m<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}










