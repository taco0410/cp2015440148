#include <stdio.h>
int main() {
	int A, B, C, D, E, n;
	printf("�Ѱ��� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);


	if (0 <= n and n <= 19)
		printf("������� : E\n");
	else if (20 <= n and n <= 39)

		printf("������� : D\n");
	else if (40 <= n and n <= 59)
		printf("������� : C\n");

	else if (60 <= n and n <= 79)
		printf("������� : B\n");

	else if (80 <= n and n <= 100)
		printf("������� : A\n");

	return 0;





}