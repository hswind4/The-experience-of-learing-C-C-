#include "List.h"


LTNode* ListNewNode()
{
	LTNode* new_node = (LTNode*)malloc(sizeof(LTNode));
	assert(new_node);
	return new_node;

}


LTNode* ListInit()
{
	LTNode* phead = ListNewNode();
	phead->next = phead;
	phead->prev = phead;
	return phead;

}



void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	//LTNode* tail = phead->prev;
	//LTNode* new_node = ListNewNode();
	//new_node->data = x;
	//phead->prev = new_node;
	//tail->next = new_node;
	//new_node->prev = tail;
	//new_node->next = phead;
	//
	
	ListInsert(phead, x);

	
}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* node = phead->next;
	//printf("%d_1\n", node->data); // 这是有头的... 注意第一个元素
	//node = node->next;
	while (node != phead)
	{
		printf("%d ", node->data);
		node = node->next;

	}
	printf("\n");
}


void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev->prev;
	free(phead->prev);
	tail->next = phead;
	phead->prev = tail;

}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	//LTNode* new_node = ListNewNode();
	//LTNode* next = phead->next;
	//new_node->data = x;

	//phead->next = new_node;
	//new_node->prev = phead;
	//new_node->next = next;
	//next->prev = new_node;

	ListInsert(phead->next, x);
	
}




void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* new_node = ListNewNode();
	new_node->data = x;

	prev->next = new_node;
	new_node->prev = prev;
	new_node->next = pos;
	pos->prev = new_node;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* pos_prev = pos->prev;
	LTNode* pos_next = pos->next;

	//pos->prev->next = pos->next;
	//pos->next->prev = pos->prev;
	pos_prev->next = pos_next;
	pos_next->prev = pos_prev;
	
}