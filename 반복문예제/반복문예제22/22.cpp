#include <stdio.h> 
#include <windows.h>
int main() {


	int  n, max;


	printf("������ �Է��Ͻÿ�\n");
	scanf_s("%d", &n);


	while (1) {
		{    max = n;
		scanf_s("%d", &n);
		if (n > max) {
			continue;

		}
		if (n == 0)
			break;
		}

	}
	printf("�Է¹��� ����Ÿ�� ����ū���� : %d\n", max);
	system("pause");
	return 0;

}
