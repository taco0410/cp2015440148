#include <stdio.h> 
#include<windows.h>
int main() {
	int sum = 0, a;


	for (a = 0; a <= 100; a++) {
		if (a % 5 == 0)
			sum += a;

	}
	printf("1���� 100������ 5�� ������� �� %d", sum);


	system("pause");
	return 0;



}
