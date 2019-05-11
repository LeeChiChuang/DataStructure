#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define SIZE 20
typedef int Status;
typedef int ElemType;

/* 定义数据结构 */
typedef struct Node
{
	int data;
	struct Node *next;
} Node;

typedef sturct Node *LinkedList;
/* 初始化 */
Status InitList(LinkedList *L) {
	*L = (LinkedList)malloc(sizeof(Node));
	(*L).next = NULL;

	return OK;
}

/* 判断是否为空 */
Status IsEmpty(LinkedList L) {
	if (L->next)
	{
		return FALSE;
	}

	return TRUE;
}

/*  */
/* 插入 */
Status InsertList(LinkedList *L, int i, ElemType e) {
	int j;
	LinkedList p, s;
	p = *L;
	while (p && j < i)
	{
		p = p->next;
		j++;
		/* code */
	}
	if (!p || j > i) {
		return FALSE;
	}
	s = (LinkedList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

/* 删除 */
Status DeleteList(LinkedList *L, int i, ElemType *e) {
	int j;
	LinkedList p, s;
	p = *L;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j < i)
	{
		return FALSE;
	}
	s = p->next;
	*e = p->data;
	p->next = s->next;
	free(s);
}

/* 获取节点值 */

//读取元素
Status Visit(ElemType e) {
    printf("%d ", e);
    return OK;
}

Status Traverse(Sqlist L) {
    for (int i = 0; i < L.length; ++i)
    {
        /* code */
        Visit(L.data[i]);
    }
    printf("\r\n");
    return OK;
}

int main() {}