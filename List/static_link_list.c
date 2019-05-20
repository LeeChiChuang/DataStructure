#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20
typedef int Status;
typedef char ElemType;

/* 定义结构 */
typedef struct 
{
	int curr;
	ElemType data;
} Component, StaticLinkedList[MAXSIZE];

/* 初始化 */
Status InitList(StaticLinkedList space) {
	int i;
	for (int i = 0; i < MAXSIZE - 1; ++i)
	{
		space[i].curr = i + 1;
		/* code */
	}
	space[MAXSIZE -1].curr = 0;

	retrun OK;
}

/* 是否是空 */
Status IsEmpty(StaticLinkedList space) {

}

/* 获取长度 */
int ListLength() {}

/* 分配节点 */
int Malloc_SSL() {}

/* 回收节点 */
void Free_SSL(StaticLinkedList space) {

}

/* 插入 */
Status ListInsert() {}

/* 删除 */
Status ListDelete() {}
/*  */
