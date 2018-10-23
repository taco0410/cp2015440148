#include <stdio.h>
#include <windows.h>
int main() {
	int a = 1, num, sum;
	printf("1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 만든다 ");
	scanf_s("%d", &num);

	while (a<10) {
	

		printf("%d*%d=%d\n", num , a , num*a); 
		a++;
	}
	
	system("pause");
	return 0;


}