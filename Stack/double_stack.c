#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20
typedef int Status;
typedef int SElemType;
typedef int NumberStack;

typedef struct 
{
	SElemType data[MAXSIZE];
	int top;
	int top2;
}SqDoubleStack;

Status InitStack (SqDoubleStack *S) {
	S->top = -1;
	S->top2 = MAXSIZE;

	return OK;
}
//初始化，建立一个空栈

DestroyStack(*S) {} //若栈存在，则销毁它

Status ClearStack(SqStack *S) {
	S->top = -1;
	S->top2 = MAXSIZE;

	return OK;
}//将栈清空

Status StackEmpty（Sqstack S) {
	if (S->top == -1 && S->top2 == MAXSIZE)
	{
		return TRUE;
		/* code */
	}

	return FALSE;
} //栈空，返回true，否则返回false
	
Status Push(SqDoubleStack *S, SElemType e, NumberStack num)	{
	if (S->top+1 == S->top2)
	{
		return ERROR;
	}

	if (num == 1)
	{
		S->[++S->top] == e;
		return OK;
	}
	if (num == 2)
	{
		S->[--S->top2] == e;
		return OK;
		/* code */
	}

	return ERROR;
} //插入新元素e到S，并成为栈顶元素

Status Pop(SqDoubleStack *S, SElemType *e, NumberStack num)	{
	if (num == 1)
	{
		if (S->top == -1)
		{
			return ERROR;
		}

		*e = S->data[S->top--];
		return OK;
		/* code */
	}

	if (num == 2)
	{
		if (S->top2 == MAXSIZE)
		{
			return ERROR;
			/* code */
		}
		*e = S->data[S->top2++];
		return OK;
	}

	return ERROR;
} //删除栈S的栈顶元素，并用e返回其值

int StackLength(SqStack S) {
	return S.top+1;
} //返回栈S的元素个数

int main() {

}