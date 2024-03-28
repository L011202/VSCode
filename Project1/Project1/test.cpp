#define _CRT_SECURE_NO_DEPRECATE

#include "SList.h"

void main(void)
{
	List Mylist;
	InitList(&Mylist);
	Node* p=NULL;
	int input=1;
	while (input)
	{
		printf("----------------------------------------\n");
		printf("---[1] push_back   - [2] push_front  ---\n");
		printf("---[3] show_list   - [4] pop_back    ---\n");
		printf("---[5] pop_front   - [6] insert_value---\n");
		printf("---[7] find_value  - [8] length_list ---\n");
		printf("---[9] dele_value  - [10]sort_list   ---\n");
		printf("---[11]reverse     - [12]clear_list  ---\n");
		printf("---[13]destory     - [0] exit_list   ---\n");
		printf("----------------------------------------\n");
		printf("�������ѡ��:>");
		scanf("%d", &input);
		ElemType Item;
		if (input == 0)
		{
			printf("�˳��ɹ�,����������˳�.\n");
			printf("Exit Successful,Press Any Key To Exit.\n");
			break;
		}
		switch (input)
		{
		case Push_back:
			printf("����������Ҫ��������ݣ��������������-1����Enter����.\n");
			while (scanf("%d",&Item),Item!=-1 )
			{
				push_back(&Mylist,Item);
			}	
			break;
		case Push_front:
			printf("����������Ҫ��������ݣ��������������-1������Enter����.\n");
			while (scanf("%d",&Item),Item!=-1)
			{
				push_front(&Mylist,Item);
			}
			break;
		case Show_list:
			show_list(&Mylist);
			break;
		case Pop_back:
			pop_back(&Mylist);
			break;
		case Pop_front:
			pop_front(&Mylist);
			break;
		case Insert_list:
			printf("��������Ҫ���������:>");
			scanf("%d", &Item);
			insert_value(&Mylist,Item);
			break;
		case Find_List:
			printf("��������Ҫ���ҵ�����.\n");
			scanf("%d", &Item);
			p=find_list(&Mylist, Item);
			if (p == NULL)
			{
				printf("���ҵ�Ԫ���ڱ��в�����.\n");
			}
			break;
		case Length_List:
			printf("������ĳ���Ϊ%d", length_list(&Mylist));
			break;
		case Dele_list:
			break;
		case Sort_list:
			break;
		case Reverse:
			break;
		case Clear_list:
			break;
		case Destory:
			break;
		case Exit_List:
			break;
		default:
			printf("�����������Ƿ��������³���.\n");
			break;
		}
	}
}