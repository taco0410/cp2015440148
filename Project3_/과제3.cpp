#include <stdio.h>

int main()
{
	int a, b, c;
	int large;
	printf("�� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &a, &b, &c);


	large = a < b ? (b < c ? c : b) : (a < c ? c : a);


	printf("ū ���� %d �Դϴ�.\n", large);
	return 0;
}