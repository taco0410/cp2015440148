#include <stdio.h>
void test(int a) {
	a = 100;
}
void testPointer(int* ptr) {
	*ptr = 100;//a�� �ּҷ� 100 ������
}

int main() {
	int a = 10;
	test(a); 
	printf("a = %d\n", a);//10���

	//�����͸� �Ű����������� ����
	testPointer(&a);//a�� �ּ�
	printf("a=%d\n", a);//100���

	return 0;
}