#include <stdio.h>
#include <windows.h>
int main(void) {
	int input;
	while (1) {

		printf("정수를 입력하세요: ");
		scanf_s("%d", &input);

		if (input < 0) {
			printf("입력한 정수가 양수가 아닙니다.다시 입력해주세요.\n", input);
			continue;
		}

		if (input > 0) {
			input = input * 2;
			printf("%d", input);
			break;
		}
		else
			printf("입력한 정수가 양수가 아닙니다.다시 입력해주세요.\n", input);
		continue;
	}
		system("pause");
		return 0;
}
	
			





	
