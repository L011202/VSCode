#define _CRT_SECURE_NO_DEPRECATE
#include "SList.h"

void InitList(List* list)
{
	list->first = list->last = (Node*)malloc(sizeof(Node));
	assert(list->first != NULL && list->last != NULL);
	list->first->next = NULL;
	list->size = 0;
}

void push_back(List* list, ElemType Item)
{
	Node* s = (Node*)malloc(sizeof(Node));
	assert(s != NULL);
	s->data = Item;
	s->next = NULL;

	list->last->next= s;
	list->last = s;
	list->size++;	
}

void push_front(List* list, ElemType Item)//����ͷ��ʱҪ�����Ƿ�����λ���ǵ�һ�����
{
	Node* s = (Node*)malloc(sizeof(Node));
	assert(s != NULL);
	s->data = Item;
	s->next = list->first->next;
	list->first->next = s;
	if (list->size == 0)//����������жϣ������ɿձ��ʱ�����ͷ��֮�����һ��Ԫ�ص�ָ����Ϊ�գ��ᵼ�³������
	{
		list->last = s;
	}
	list->size++;
}

void show_list(List* list)
{
	Node* p = list->first->next;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

void pop_back(List* list)
{
	if (list->size == 0)
	{
		return;
	}
	Node* p = list->first;
	while (p->next != list->last)
		p = p->next;
	free(list->last);
	list->last = p;
	list->last->next = NULL;
	list->size--;
}

void pop_front(List* list)
{
	if (list->size == 0)
	{
		return;
	}
	Node* p = list->first->next;
	list->first->next = p->next;
	free(p);
	if (list->size == 1)
	{
		list->last = list->first;
	}
	list->size--;
}

void insert_value(List* list, ElemType Item)
{
	Node* s = (Node*)malloc(sizeof(Node));
	assert(s != NULL);
	s->data = Item;
	s->next = NULL;

	Node* p = list->first;
	while (p->next!= NULL && p->next->data < Item)
		{
		p = p->next;
		}
	if (p->next == NULL)
	{
		list->last = s;
	}
	s->next = p->next;
	p->next = s;
	list->size++;
}

Node* find_list(List* list, ElemType key)
{
	Node* p = list->first->next;
	while (p != NULL && p->data != key)
	{
		p = p->next;
	}
	return p;
}

int length_list(List* list)
{
	return list->size;
}