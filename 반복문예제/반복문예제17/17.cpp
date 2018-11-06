#include <stdio.h> 
#include<windows.h>
int main() {
	int sum = 0, i;

	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 총합=%d", sum);

	system("pause");
	return 0;



}
