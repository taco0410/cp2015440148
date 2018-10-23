#include <stdio.h>
#include <windows.h>
int main(void) {
	int count = 0, sum = 0;
	for (count = 0; count <= 100; count++) {		
		if (count % 3 == 0)
			sum = sum + count;
	}
	printf("the sum is % d\n", sum);

	system("pause");
	return 0;
}