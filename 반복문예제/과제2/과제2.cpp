#include <stdio.h>
#include <windows.h>
int main(void) {
	int a, b, c, d, e, f, g, h, i, j;
	int result;
	printf("열개의 정수입력:");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	result = a + b + c + d + e + f + g + h + i + j;
	printf("%d + %d + %d + %d + %d + %d + %d + %d + %d + %d = %d \n", a, b, c, d, e, f, g, h, i, j, result);

	system("pause");
	return 0;


}

