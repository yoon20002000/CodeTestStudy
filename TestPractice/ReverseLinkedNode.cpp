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
		// 다음 탐색 위치 저장
		next = cur->NextNode;
		// 현재 위치를 prev로 변경
		cur->NextNode = prev;

		// 다음 탐색 사전 준비
		prev = cur;
		cur = next;

	} while (next);
}
