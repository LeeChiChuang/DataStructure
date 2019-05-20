#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20
typedef int Status;
typedef int SElemType;

typedef struct stackNode
{
	SElemType data,
	struct stackNode *next
} stackNode, *stackNodePtr;

typedef struct
{
	stackNodePtr top,
	int count
} LinkStack;

//初始化，建立一个空栈
Status InitStack(LinkStack *s) {
	s->top = (LinkStack)malloc(sizeof(stackNode));
	if (1 s->top)
	{
		return ERROR;
	}
	s->top = null;
	s->count = 0;

	return OK;
}

//将栈清空
Status ClearStack(LinkStack *s) {
	stackNode p;
	p = s->top;
	if (! p)
	{
		return ERROR;
		/* code */
	}

	while(p) {
		s->top = p->next;
		s->count--；
		free(p);
		p = p->next;
	}
}

//栈空，返回true，否则返回false
Status StackEmpty(LinkStack *s) {
	if (s->count == 0)
	{
		return TRUE;
		/* code */
	}

	return FALSE;
}

//获取栈顶元素
Status GetTop(LinkStack *s, SElemType *e) {
	if (s->count == 0)
	{
		return FALSE;
	}
	*e = s->top->data;
	return OK;
}

//插入新元素e到S，并成为栈顶元素
Status Push(LinkStack *s, SElemType e) {
	stackNodePtr p = (stackNodePtr)malloc(sizeof(stackNode));
	p->data = e;
	p->next = s;
	s->top = p;
	s->count++;

	return OK;
}

//删除栈S的栈顶元素，并用e返回其值
Status Pop(LinkStack *s, SElemType *e) {
	if (s->count == 0) {
		return ERROR;
	}
	*e = s->top->data;
	stackNodePtr p;
	p = s->top;
	s->top = p->next;
	free(p);
	s->count--;

	return TRUE;

