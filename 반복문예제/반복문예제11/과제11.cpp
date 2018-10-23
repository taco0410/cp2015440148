#include <stdio.h>
#include <windows.h>
int main()
{
	int a=1 , i;
	while ( a != 0) {
		scanf_s("%d", &a);

		for (i = 2; i < a; i++)
			if (a%i == 0) {
				printf("%d ", i);
				continue;
				}
		if (a == 0)
			break;
		
	}
	
	system("pause");
	return 0;

}