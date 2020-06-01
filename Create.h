#pragma once
#include "stdio.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
//方块
struct Block
{
	int x;
	int y;
	int num;
	int mask;
};
//以链表型式储存方块
struct ListNode
{
	Block* block;
	ListNode* next;
};
class Create
{
public:
	Create(int w,int h);
	///////////////////////////////////////////
	Block*** easy();                       //主要使用函数
	Block*** normal();                     //依次为简单、普通、困难模式、重置
	Block*** hard();                       //简单模式为5种方块，普通模式为6种方块，困难为7种
	Block*** reset(Block*** blocks);       //
	/////////////////////////////////////////

	ListNode* createList(Block*** blocks);//以一个数组创建链表
	void DestoryList(ListNode* head);//摧毁一个链表
	ListNode* deleteNode1(ListNode* head,int aim);//删除链表中第aim个节点
	ListNode* deleteNode2(ListNode* head, int x,int y);//删除链表中的block中x，y为传入x，y的节点
	int getLength(ListNode* head);//获得链表长度
	void addNode(ListNode* head, Block* block);//向链表中添加节点

private:
	int weight;
	int height;
};

