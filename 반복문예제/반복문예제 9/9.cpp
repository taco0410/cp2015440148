#include <stdio.h>
#include <windows.h>
int main() {
	int a = 1, num, sum;
	printf("1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 만든다 ");
	scanf_s("%d", &num);

	while (num < 1 || num>9)
	{
		printf("에러입니다!!!!\n");
		printf("다시입력하시오");
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

