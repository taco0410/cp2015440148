#include <stdio.h>
#include <windows.h>
int main(void) {
	int input;
	while (1) {

		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &input);

		if (input < 0) {
			printf("�Է��� ������ ����� �ƴմϴ�.�ٽ� �Է����ּ���.\n", input);
			continue;
		}

		if (input > 0) {
			input = input * 2;
			printf("%d", input);
			break;
		}
		else
			printf("�Է��� ������ ����� �ƴմϴ�.�ٽ� �Է����ּ���.\n", input);
		continue;
	}
		system("pause");
		return 0;
}
	
			





	
