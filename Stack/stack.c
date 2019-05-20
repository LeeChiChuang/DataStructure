#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20
typedef int Status;
typedef int SElemType;

typedef struct 
{
	SElemType data[MAXSIZE];
	int top;
}SqStack;

Status InitStack (SqStack *s) {
	s->top = -1;
	return OK;
}
//初始化，建立一个空栈

DestroyStack(*S) {} //若栈存在，则销毁它

Status ClearStack(SqStack *S) {
	s->top = -1;
	return OK;
}//将栈清空

Status StackEmpty（Sqstack S) {
	if (s->top == -1)
	{
		return TRUE;
	}

	return FALSE;
} //栈空，返回true，否则返回false
	
Status GetTop(SqStack S, *e) {
	if (S->top == -1)
	{
		return FALSE;
		/* code */
	}
	*e = S->data[S->top];
	return OK;
} //若栈存在切非空，用e返回栈顶元素

Status Push(SqStack *S, e)	{
	if (S->top == MAXSIZE -1)
	{
		return FALSE;
		/* code */
	}
	S->top++;
	S->data[S->top] = e;

	return OK;
} //若栈存在切非空，插入新元素e到S，并成为栈顶元素

Status Pop(*S, *e)	{
	if (S->top == -1)
	{
		return ERROR;
		/* code */
	}

	*e = S->data[S->top];
	S->top--;

	return OK;
} //删除栈S的栈顶元素，并用e返回其值

int StackLength(SqStack S) {
	return S.top+1;
} //返回栈S的元素个数

int main() {

}