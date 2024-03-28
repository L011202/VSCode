#pragma once
#ifndef _List_H_
#define _List_H_

#include <stdio.h> 
#include <stdlib.h>
#include <assert.h>

#define ElemType int 

enum Option
{
	Exit_List,
	Push_back,
	Push_front,
	Show_list,
	Pop_back,
	Pop_front,
	Insert_list,
	Find_List,
	Length_List,
	Dele_list,
	Sort_list,
	Reverse,
	Clear_list,
	Destory
};

typedef struct Node{
	ElemType data;
	struct Node* next;
}Node,*PNode;

typedef struct List
{
	PNode  first;
	PNode  last;
	size_t size;
}List;

void InitList(List* list);

void push_back(List* list, ElemType Item);

void push_front(List* list, ElemType Item);

void show_list(List* list);

void pop_back(List* list);

void pop_front(List* list);

void insert_value(List* list, ElemType Item);

Node* find_list(List* list, ElemType key);

int length_list(List* list);
#endif // !_List_H_

