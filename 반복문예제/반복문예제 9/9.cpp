#include <stdio.h>
#include <windows.h>
int main() {
	int a = 1, num, sum;
	printf("1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����� ");
	scanf_s("%d", &num);

	while (num < 1 || num>9)
	{
		printf("�����Դϴ�!!!!\n");
		printf("�ٽ��Է��Ͻÿ�");
		scanf_s("%d", &num);
	}

	while (num > 0 && num < 10) {
			for(a=1;a<10;a++)
			printf("%d*%d=%d\n", num, a, num*a);
			break;
	}

	system("pause");
	return 0;


}

