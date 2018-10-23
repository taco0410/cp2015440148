#include <stdio.h>
#include <windows.h>
int  main() {
	int a;

	int m = 0;
	printf("0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력");

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
