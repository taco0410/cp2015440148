#include <stdio.h>
#include <windows.h>
int  main() {
	int a;

	int m = 0;
	printf("0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ���");

	while (1) {
		scanf_s("%d", &a);
		if (a == 0)
		
			
			break;
		

		else if (m < a)
			m = a;
		else
			continue;
	}

	printf("%d", m);
	system("pause");
	return 0;
}
