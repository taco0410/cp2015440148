double averageLL (Node)

int main() {

	double test;
	test = 10 / 4; 1. 10/4=>2��ȯ 2. double�� 2.0 ���� ��ȯ
}

//addTail
//�Է� ���Ḯ��Ʈ, �߰��Ϸ��� ���������
//��� ����
//�μ�ȿ�� �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���.

void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL) {
		printf("error can't add a tail to empty linked list \n")
	}
	Node*pTail = returnTail(pHead);
	pTail->pNext = pNode;
}





