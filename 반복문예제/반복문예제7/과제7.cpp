#include <stdio.h>
#include <windows.h>
int main()
{
	int num = 1; 
	int sum = 0;  
	
	scanf_s("%d", &num);
	sum = num;   
	while (num != 0)  
	{
		scanf_s("%d", &num);
		if (num == 0) 
		break; 

		sum = sum + num;  	
	}
	printf("%d\n", sum);
	
	system("pause");
	return 0;
}