#include <stdio.h> 
#include<windows.h>
int main() {
	int n;
	int  a= 1, length = 0;
	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &n);
	while (n > a)
	{

		a *= 10;
		length++;

	}
	printf("%d �ڸ������Դϴ�", length);



	system("pause");
	return 0;


}
