#include "ReverseLinkedNode.h"

ReverseLinkedNode::ReverseLinkedNode()
{
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
