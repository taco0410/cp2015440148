#include <stdio.h>
int main()
{
	int a, b;
	printf("�Ѱ��� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);



	b = a % 2;

	if (b == 0)
		printf("������� even");
	else
		printf("������� odd");

	return 0;
}