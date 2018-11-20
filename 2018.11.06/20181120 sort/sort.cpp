#include <stdio.h>
#include <string.h>
void printArray(char* arr[], int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %c \n", index, arr[index]);
	}
}

int main() {
	char c;//character 자료형 아스키 코드
	c = 'A'; // ==> c=65;
	printf("c=%d\n", c);
	printf("c=%c\n", c);//character

	char a[] = { 'h', 'e', 'l','l','o' };
	printArray(a, 5);


	//문자열(string)
	char b[] = "hello";
	printf("%s \n", b);// == > char b[] = { 'h', 'e', 'l', 'l', 'o', \0 };
	printf("the length of the string is %d \n", strlen(b));

	char* str1[50] = "hello";
	char* str2 = "world";// 끝에 null
	strcat(str1, str2);
	printf("s \n", str1);
	strcpy(str1, str2);
	printf("s \n", str1);

	printf("%s \n", strcat(str1,str2));

	return 0;
}