#include <stdio.h>

int main() {
	int x, y, z, w;

	printf("���ڸ� ������ �Է��Ͻÿ�:");

	scanf_s("%d", &w);



	x = w / 10;
	y = w % 10;
	z = (10 * y) + x;



	if (w >= 10)
		printf("����� %d �Դϴ�.", z);


	return 0;




}