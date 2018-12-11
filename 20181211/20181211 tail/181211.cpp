#include <stilib.h>
#include <stdio.h>
typedef struct node {
	int score;
	struct node* pNext;
} Node;
typedef struct linked



int main() {
	LinkedList

		pHead = createNode(11);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	addTail(pHead, createNode(100));
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));

	pHead = NULL;
	addTail(pHead, createNode(100));
	printL
}


void addHead(LinkedList* pList, Node* pNewNode) {
	pNewNode->pNext = pList->pHead;
	pList->pHead = pNewNode;
	(pList->nNode)++;
}