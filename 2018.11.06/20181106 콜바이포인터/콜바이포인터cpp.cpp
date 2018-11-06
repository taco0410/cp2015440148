#include <stdio.h>
void test(int a) {
	a = 100;
}
void testPointer(int* ptr) {
	*ptr = 100;//a의 주소로 100 던진다
}

int main() {
	int a = 10;
	test(a); 
	printf("a = %d\n", a);//10출력

	//포인터를 매개변수값으로 전달
	testPointer(&a);//a의 주소
	printf("a=%d\n", a);//100출력

	return 0;
}