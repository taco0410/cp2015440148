#include <stdio.h> 
#include<windows.h>
int main() {
	int a= 3, answer;

	while (a <= 100 && a > 1) {
		printf("���� �ϳ��� ���Ͻÿ�:");
		scanf_s("%d", &a);

		answer = 43;


		if (a < answer)
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�");
		else if (a > answer)
			printf("�Է��Ͻ� ���ں��� �۾ƿ�");
		else if (a == answer) {
			printf("�������� Game over");
			break;
		}


		}

		system("pause");
		return 0;

	}

