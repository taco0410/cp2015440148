#include <stdio.h>
//printArray()
//�Է�: �迭
//���: ����
//�μ�ȿ��: ȭ�鿡 �迭�� ���� ���
void printArray(int arr[], int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

int main() {
	int a[3] = { 10,20,30 };//�迭�� ����:�迭�̸� a �迭���� 
	int*ptr;
	ptr = a;//==> ptr = &a[0];�迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ��� �ȴ�
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//�����ͺ��� �̸��� �迭 �̸����� ����� �� �ִ�.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);

	a = ptr;//error �迭�� �̸��� ���� ���´� �޸� ������Ұ� ����. �� rvalue�̴�.
	10 = a[2];

	//printArray(a,3);


		return 0;

}