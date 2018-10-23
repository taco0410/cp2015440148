#include <stdio.h>
#include <windows.h>
int main(void) {
	int count = 0, sum = 0;
	do {
		if (count % 3 == 0)

			sum = sum + count;
		count++;

	} while (count <= 100);
		
	printf("the sum is % d\n", sum);

	system("pause");
	return 0;
}
