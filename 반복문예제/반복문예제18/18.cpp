#include <stdio.h> 
#include<windows.h>
int main() {
	int sum = 0, a;


	for (a = 0; a <= 100; a++) {
		if (a % 5 == 0)
			sum += a;

	}
	printf("1부터 100이하의 5의 배수들의 합 %d", sum);


	system("pause");
	return 0;



}
