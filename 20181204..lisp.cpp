//Linked 연습
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int score;
	struct node* pNext;
 }Node;
//함수 printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 없음
//부수효과: 없다
void printLL(Node* ptr) {
	while (ptr != NULL) {
		printf("score= %d\n", ptr->score);
		ptr = ptr->pNext;

	}

}
int main() {
	Node* pHead=NULL;//헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로약속하자)
	Node a, b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;
	printLL(pHead);
	return 0;
}
//score = 10
//score = 20

void printLL(Node* ptr) {
	while (ptr != NULL) {
		printf("score= %d\n", ptr->score);
		ptr = ptr->pNext;

	}

}
//함수 createNode()
//입력 성적
//출력 노드하나를 동적할당으로 생성하여 포인터를 반환한다 이때 입력=score pNext=NULL로한다
//부수효과없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}

int main() {
	Node* pHead = NULL;//헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로약속하자)
//	Node a, b;
//	a.score = 10; b.score = 20;
//	a.pNext = &b; b.pNext = NULL;
//	pHead = &a;
	pHead = createNode(10);
	pHead->pNext = createNode(20);
	printLL(pHead);


	return 0;
}

//함수 addHead()
//입력: 연결리스트, 새 노드
//출력: 없음
//부수효과 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode) {
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}

int main() {
	Node* pHead = NULL, *ptr;//헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로약속하자)
//	Node a, b;
//	a.score = 10; b.score = 20;
//	a.pNext = &b; b.pNext = NULL;
//	pHead = &a;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);


	return 0;
}
//20,10 프린트