#include <stdio.h>
#include <windows.h>
int gvar = 100;//전역 변수 (global variation)
//함수 sum ()
//입력: 두정수
//	출력: 두정수의 합
//	부수효과 없음
int sum(int a, int b)/*함수선언(1.sum은 함수의 이름이다. 2.매개변수의 개수(a,b 2개)3. 각 매개변수의 자료형(int,int) 4. 반환값의 자료형(반환형)=맨앞int  1~4 함수호출에 필요한정보*/  {
	int c;
	c = a + b; a=100;
	return c;
}  //함수본체   전체는 함수정의
//함수: goodprint()
//입력 없음
//출력 없음
//부수효과 화면에 good 출력
void goodprint() {
	printf("good\n");
}

int main() {
	int x = 10, y = 20, z;
	z = sum(x, y); //   함수호출
	printf("z=%d\n", z,x);
	goodprint();

	system("pause");
	return 0;
}
