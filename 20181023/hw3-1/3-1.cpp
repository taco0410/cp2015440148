#include <stdio.h>
#include <windows.h>
//�Լ� printNumber
//�Է�: �� ����
//��� : ����
//�μ�ȿ�� ����
void printNumber(int a, int b) {
	int count = a;
	while (count <= b)
		printf("%d\n", count++);
}

int main()  {


	int a = 3, b = 50;
	//printNumber (a,b);
     printNumer(-20, 100);
	
	printf("end of program\n");

	system("pause");
	return 0;



}





