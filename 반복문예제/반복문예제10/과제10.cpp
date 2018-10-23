#include <stdio.h>
#include <windows.h>
int main()
{
	int a, i;

	scanf_s
	("%d", &a);

	for (i = 2; i < a; i++)
	{


		if (a%i == 0)
			printf("%d ", i);

	}system("pause");
	return 0;
}

