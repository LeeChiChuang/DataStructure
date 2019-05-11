#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define SIZE 20
typedef int Status;
typedef int ElemType;

//定义结构体
typedef struct {
    ElemType data[SIZE];
    int length;
}Sqlist;

//初始化线性表
Status InitList(Sqlist *L) {
    L->length = 0;
    return OK;
}

//是否是空表
Status IsEmpty(Sqlist L) {
    if (L.length == 0) {
        return TRUE;
    }

    return FALSE;
}

//获取线性表元素
Status GetEle(Sqlist L, int i, ElemType *e) {
    if (i > L.length || i<1) {
        return ERROR;
    }

    *e = L.data[i-1];
    return OK;
}

//定位元素
int LocateElm(Sqlist L, ElemType e) {
    int i;
    if (L.length == 0) {
        return 0;
    }

    for (i=0; i<L.length; i++) {
        if (L.data[i] == e)
            break;
    }

    return i+1;
}

//插入
Status InsertList(Sqlist *L, int i, ElemType e) {
    /*
    if (i > L->length+1 || i<1) {
        return ERROR;
    }

    int k = i;
    for (; k<L->length+1; k++) {
        L->data[k] = L->data[k+1];
        
    }

    L->data[i-1] = e;
    L->length++;

    return OK;
    */
    int k;
    if (L->length==SIZE)  
        return ERROR;
    if (i<1 || i>L->length+1)
        return ERROR;

    if (i<=L->length)      
    {
        for(k=L->length-1;k>=i-1;k--) 
            L->data[k+1]=L->data[k];
    }
    L->data[i-1]=e;          
    L->length++;

    return OK;
}

//删除
Status DeleteList(Sqlist *L, int i) {
    if (i > L->length || i<1) {
        return ERROR;
    }

    int k;
    if (L->length==0)
        return ERROR;
    if (i<1 || i>L->length)
        return ERROR;
    
    //删除位置元素往前移动
    if (i<L->length) {
        for(k=i;k<L->length;k++) {
            L->data[k-1]=L->data[k];
        }
    }
    L->length--;
    return OK;
}

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

int main() {
    Sqlist L;

    Status s;
    ElemType e;

    InitList(&L);
    printf("初始化大小是%d \r\n", L.length);

    //插入十个数字
    for (int i = 1; i <= 10; ++i)
    {
        //printf("%d \n", i);
        /* code */
        s = InsertList(&L, i, i);
        //printf("%d \n", s);
    }
    printf("%d \n", L.length);
    Traverse(L);
    InsertList(&L, 5, 0);
    Traverse(L);
}
