#include "ReverseLinkedNode.h"

ReverseLinkedNode::ReverseLinkedNode()
{
	solution1();
}

void ReverseLinkedNode::solution()
{
	Node FirstNode;

	Node* cur = &FirstNode;
	Node* prev = nullptr;
	Node* next = nullptr;

	do 
	{
		// ���� Ž�� ��ġ ����
		next = cur->NextNode;
		// ���� ��ġ�� prev�� ����
		cur->NextNode = prev;

		// ���� Ž�� ���� �غ�
		prev = cur;
		cur = next;

	} while (next);
}

void ReverseLinkedNode::solution1()
{
	Node Nodes[3];
	for(int i = 0 ; i < 3 ; ++i)
	{
		Nodes[i].Data = i;
		if(i+1 < 3 && i+1>0)
		{
			Nodes[i].NextNode = &Nodes[i+1];	
		}
	}

	Node* curNode = &Nodes[0];
	Node* prevNode = nullptr;
	do 
	{
		Node* nextNode = curNode->NextNode;
		curNode->NextNode = prevNode;
		prevNode = curNode;
		curNode = nextNode;
	}while(curNode != nullptr);
}
