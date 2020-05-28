#include "Create.h"
#include "stdio.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <ctime>

using namespace std;

Create::Create(int w,int h)
{
	//随机数种子
	srand(time(NULL));
	//设置长 宽 
	this->weight = w;
	this->height = h;
}

ListNode* Create::createList(Block* **blocks)
{
	ListNode* head = new ListNode;
	head->block = NULL;
	head->next = NULL;

	for (int i = 0; i < this->weight; i++)
	{
		for (int j = 0; j < this->height; j++)
		{
			ListNode* node = new ListNode;
			node->next = NULL;
			node->block = blocks[i][j];

			node->next = head->next;
			head->next = node;
		}
	}

	return head;
}

void Create::DestoryList(ListNode* head)
{
	while ((head->next) != NULL)
	{
		ListNode* node = new ListNode;
		node->next = NULL;
		node->block = NULL;
		node = head->next;

		head->next = node->next;

		delete node;
	}

	delete head;
}

ListNode* Create::deleteNode1(ListNode* head, int aim)
{
	int count = 0;
	ListNode* node = new ListNode;
	ListNode* pre = new ListNode;

	node->next = NULL;
	node->block = NULL;
	pre->next = NULL;
	pre->block = NULL;

	pre = head;
	node = pre->next;
	count = 1;

	while (node != NULL)
	{
		if (count == aim)
		{
			pre->next = node->next;
			return node;
		}
		pre = node;
		node = pre->next;
		count++;
	}

	return NULL;
}

ListNode* Create::deleteNode2(ListNode* head, int x,int y)
{
	ListNode* node = new ListNode;
	ListNode* pre = new ListNode;

	node->next = NULL;
	node->block = NULL;
	pre->next = NULL;
	pre->block = NULL;

	pre = head;
	node = pre->next;

	while (node != NULL)
	{
		if (node->block->x == x && node->block->y == y)
		{
			pre->next = node->next;
			return node;
		}
		pre = node;
		node = pre->next;
	}

	return NULL;
}

int Create::getLength(ListNode* head)
{
	int count = 0;
	ListNode* node = new ListNode;
	node = head->next;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return count;
}

void Create::addNode(ListNode* head, Block* block)
{
	ListNode* node = new ListNode;
	node->next = NULL;
	node->block = block;

	node->next = head->next;
	head->next = node;
}
   //////////////////////////////////////////////////
  /////         生成难度等级easy               /////
 /////         方块种类数：5                 //////
//////////////////////////////////////////////////
Block*** Create::easy()
{

	Block*** blocks = NULL;
	blocks = (Block***)malloc(sizeof(Block**) * this->weight);
	
	//初始化数组
	for (int i = 0; i < this->weight; i++)
	{
		blocks[i] = (Block**)malloc(sizeof(Block*) * this->height);
		for (int j = 0; j < this->height; j++)
		{
			blocks[i][j] = (Block*)malloc(sizeof(Block) * this->height * this->weight);

			blocks[i][j]->num = -1;
			blocks[i][j]->x = i;
			blocks[i][j]->y = j;
			blocks[i][j]->mask = 0;
		}
	}
	ListNode* allhead = new ListNode;
	allhead = createList(blocks);

	while (getLength(allhead) != 0)
	{
		ListNode* newhead = new ListNode;
		newhead->block = NULL;
		newhead->next = NULL;

		int aim = (rand() % (getLength(allhead) - 1 + 1)) + 1;//生成随机数：(rand() % (b - a + 1)) + a;

		ListNode* node = new ListNode;
		node->block = NULL;
		node->next = NULL;

		node = deleteNode1(allhead, aim);//取一个空方块
		int number = (rand() % (5 - 1 + 1)) + 1;//随机标号
		                                        //生成随机数：(rand() % (b - a + 1)) + a;

		blocks[node->block->x][node->block->y]->mask = 1;
		blocks[node->block->x][node->block->y]->num = number;

		//将当前方块的同一行的空方块加入新链表
		for (int i = node->block->x + 1; i < this->weight; i++)
		{
			if (blocks[i][node->block->y]->mask == 0)
			{
				addNode(newhead, blocks[i][node->block->y]);
			}

			else
			{
				break;
			}
		}

		for (int i = node->block->x - 1; i > -1; i--)
		{
			if (blocks[i][node->block->y]->mask == 0)
			{
				addNode(newhead, blocks[i][node->block->y]);
			}

			else
			{
				break;
			}
		}
		//将当前方块的同一列的空方块加入新链表
		for (int i = node->block->y + 1; i < this->height; i++)
		{
			if (blocks[node->block->x][i]->mask == 0)
			{
				addNode(newhead, blocks[node->block->x][i]);
			}

			else
			{
				break;
			}
		}

		for (int i = node->block->y - 1; i > -1; i--)
		{
			if (blocks[node->block->x][i]->mask == 0)
			{
				addNode(newhead, blocks[node->block->x][i]);
			}

			else
			{
				break;
			}
		}
		//从临时链表里取第二个方块，并从主链表中删除
		
		if (getLength(newhead) != 0)
		{
			aim = (rand() % (getLength(newhead) - 1 + 1)) + 1;//生成随机数：(rand() % (b - a + 1)) + a;
			node = deleteNode1(newhead, aim);
			deleteNode2(allhead, node->block->x, node->block->y);

			blocks[node->block->x][node->block->y]->mask = 1;
			blocks[node->block->x][node->block->y]->num = number;
		}

		else
		{
			aim = (rand() % (getLength(allhead) - 1 + 1)) + 1;//生成随机数：(rand() % (b - a + 1)) + a;
			node = deleteNode1(allhead, aim);

			blocks[node->block->x][node->block->y]->mask = 1;
			blocks[node->block->x][node->block->y]->num = number;
		}

		DestoryList(newhead);//销毁临时链表
	}

	return blocks;
}
////////////////////////////////////////////////////
/////         生成难度等级normal              /////
/////         方块种类数：6                 //////
/////////////////////////////////////////////////
Block*** Create::normal()
{
	Block*** blocks = NULL;
	blocks = (Block***)malloc(sizeof(Block**) * this->weight);

	for (int i = 0; i < this->weight; i++)
	{
		blocks[i] = (Block**)malloc(sizeof(Block*) * this->height);
		for (int j = 0; j < this->height; j++)
		{
			blocks[i][j] = (Block*)malloc(sizeof(Block) * this->height * this->weight);

			blocks[i][j]->num = -1;
			blocks[i][j]->x = i;
			blocks[i][j]->y = j;
			blocks[i][j]->mask = 0;
		}
	}
	ListNode* allhead = new ListNode;
	allhead = createList(blocks);

	while (getLength(allhead) != 0)
	{
		ListNode* newhead = new ListNode;
		newhead->block = NULL;
		newhead->next = NULL;

		ListNode* newhead1 = new ListNode;
		newhead1->block = NULL;
		newhead1->next = NULL;

		ListNode* newhead2 = new ListNode;
		newhead2->block = NULL;
		newhead2->next = NULL;

		int aim = (rand() % (getLength(allhead) - 1 + 1)) + 1;

		ListNode* node = new ListNode;
		node->block = NULL;
		node->next = NULL;

		node = deleteNode1(allhead, aim);//取一个空方块
		int number = (rand() % (6 - 1 + 1)) + 1;//生成随机数：(rand() % (b - a + 1)) + a;

		blocks[node->block->x][node->block->y]->mask = 1;
		blocks[node->block->x][node->block->y]->num = number;

		//将当前方块的同一行的空方块加入新链表
		for (int i = node->block->x + 1; i < this->weight; i++)
		{
			if (blocks[i][node->block->y]->mask == 0)
			{
				addNode(newhead1, blocks[i][node->block->y]);
			}

			else
			{
				break;
			}
		}

		for (int i = node->block->x - 1; i > -1; i--)
		{
			if (blocks[i][node->block->y]->mask == 0)
			{
				addNode(newhead1, blocks[i][node->block->y]);
			}

			else
			{
				break;
			}
		}
		//将当前方块的同一列的空方块加入新链表
		for (int i = node->block->y + 1; i < this->height; i++)
		{
			if (blocks[node->block->x][i]->mask == 0)
			{
				addNode(newhead2, blocks[node->block->x][i]);
			}

			else
			{
				break;
			}
		}

		for (int i = node->block->y - 1; i > -1; i--)
		{
			if (blocks[node->block->x][i]->mask == 0)
			{
				addNode(newhead2, blocks[node->block->x][i]);
			}

			else
			{
				break;
			}
		}

		while (getLength(newhead1) != 0)
		{
			node = deleteNode1(newhead1, 1);
			for (int i = node->block->y + 1; i < this->height; i++)
			{
				if (blocks[node->block->x][i]->mask == 0)
				{
					addNode(newhead, blocks[node->block->x][i]);
				}

				else
				{
					break;
				}
			}

			for (int i = node->block->y - 1; i > -1; i--)
			{
				if (blocks[node->block->x][i]->mask == 0)
				{
					addNode(newhead, blocks[node->block->x][i]);
				}

				else
				{
					break;
				}
			}
		}

		while (getLength(newhead2) != 0)
		{
			node = deleteNode1(newhead2, 1);
			for (int i = node->block->x + 1; i < this->weight; i++)
			{
				if (blocks[i][node->block->y]->mask == 0)
				{
					addNode(newhead, blocks[i][node->block->y]);
				}

				else
				{
					break;
				}
			}

			for (int i = node->block->x - 1; i > -1; i--)
			{
				if (blocks[i][node->block->y]->mask == 0)
				{
					addNode(newhead, blocks[i][node->block->y]);
				}

				else
				{
					break;
				}
			}
		}
		//从临时链表里取第二个方块，并从主链表中删除
		if (getLength(newhead) != 0)
		{
			aim = (rand() % (getLength(newhead) - 1 + 1)) + 1;//生成随机数：(rand() % (b - a + 1)) + a;
			node = deleteNode1(newhead, aim);
			deleteNode2(allhead, node->block->x, node->block->y);

			blocks[node->block->x][node->block->y]->mask = 1;
			blocks[node->block->x][node->block->y]->num = number;
		}

		else
		{
			aim = (rand() % (getLength(allhead) - 1 + 1)) + 1;
			node = deleteNode1(allhead, aim);

			blocks[node->block->x][node->block->y]->mask = 1;
			blocks[node->block->x][node->block->y]->num = number;
		}

		DestoryList(newhead);//销毁临时链表
	}
	return blocks;
}
