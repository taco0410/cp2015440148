#include <stdio.h>
#include<windows.h>
int main() {
	int n, x, i;
	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &n);
	x = 0;
	for (i = 2; i < n; i++)
	{

		if (n%i == 0)
		{
			x++;
			break;
		}


	}
	if (x != 0)
		printf("�Ҽ��� �ƴϴ�");
	else
		printf("�Ҽ��̴�.");


	system("pause");
	return 0;


}
