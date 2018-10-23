#include <stdio.h>
#include <windows.h>
int main() {
	int i = 7, num , sum = 0;

		printf("7부터 입력받은 수까지의 모든 정수들의 합");
		scanf_s("%d", &num);
		for (i = 7; i < num+1; i++); 
			sum += i;

			printf("%d", sum);
		


		if (num < 7)
		printf("에러");
		


	  system("pause");
	  return 0;
}
