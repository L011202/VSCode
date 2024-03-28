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
		printf("请你进行选择:>");
		scanf("%d", &input);
		ElemType Item;
		if (input == 0)
		{
			printf("退出成功,按下任意键退出.\n");
			printf("Exit Successful,Press Any Key To Exit.\n");
			break;
		}
		switch (input)
		{
		case Push_back:
			printf("请你输入你要插入的数据，输入结束后输入-1按下Enter即可.\n");
			while (scanf("%d",&Item),Item!=-1 )
			{
				push_back(&Mylist,Item);
			}	
			break;
		case Push_front:
			printf("请你输入你要插入的数据，输入结束后输入-1，按下Enter即可.\n");
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
			printf("请输入你要插入的数据:>");
			scanf("%d", &Item);
			insert_value(&Mylist,Item);
			break;
		case Find_List:
			printf("请输入你要查找的数据.\n");
			scanf("%d", &Item);
			p=find_list(&Mylist, Item);
			if (p == NULL)
			{
				printf("查找的元素在表中不存在.\n");
			}
			break;
		case Length_List:
			printf("单链表的长度为%d", length_list(&Mylist));
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
			printf("你的输入请求非法，请重新尝试.\n");
			break;
		}
	}
}