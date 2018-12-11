double averageLL (Node)

int main() {

	double test;
	test = 10 / 4; 1. 10/4=>2반환 2. double형 2.0 으로 변환
}

//addTail
//입력 연결리스트, 추가하려는 노드포인터
//출력 없음
//부수효과 추가하려는 노드가 연결리스트의 tail로 추가됨.

void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL) {
		printf("error can't add a tail to empty linked list \n")
	}
	Node*pTail = returnTail(pHead);
	pTail->pNext = pNode;
}





