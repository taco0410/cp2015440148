#include <stdio.h>
#include <windows.h>
int mai(void) {
	int count = 0;
	while (count <= 9)
		printf("count = %d\n", count);

	count = ++count;
	system("pause");
	return 0;


}