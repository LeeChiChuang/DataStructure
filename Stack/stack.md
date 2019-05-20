# ADT Stack

## Data

	同线性表。元素具有相同类型，相邻元素之间有前驱和后继关系

## Operation

	InitStack (*S) 初始化，建立一个空栈
	DestroyStack(*S) 若栈存在，则销毁它
	ClearStack(*S) 将栈清空
	StackEmpty（S) 栈空，返回true，否则返回false
	GetTop(S, *e) 若栈存在切非空，用e返回栈顶元素
	Push(*S, e)	若栈存在切非空，插入新元素e到S，并成为栈顶元素
	Pop(*S, *e)	删除栈S的栈顶元素，并用e返回其值
	StackLength(S) 返回栈S的元素个数