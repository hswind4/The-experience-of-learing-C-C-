
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct LTNode
{
	struct LTNode* prev;
	struct LTNode* next;
	LTDataType data;


}LTNode;


LTNode* ListInit();
LTNode* ListNewNode();
void ListPushBack(LTNode* phead, LTDataType x);
void ListPopBack(LTNode* phead);
void ListPrint(LTNode* phead);
void ListPushFront(LTNode* phead, LTDataType x);
void ListPopFront(LTNode* phead);

void ListFind(LTNode* phead, LTDataType x);
void ListInsert(LTNode* pos, LTDataType x);
void ListErase(LTNode* pos);


