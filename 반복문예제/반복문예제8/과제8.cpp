#include <stdio.h>
#include <windows.h>
int main() {
	int a = 1, num, sum;
	printf("1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����� ");
	scanf_s("%d", &num);

	while (a<10) {
	

		printf("%d*%d=%d\n", num , a , num*a); 
		a++;
	}
	
	system("pause");
	return 0;


}