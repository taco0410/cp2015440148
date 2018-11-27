#include <stdio.h>
//구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다
struct complex {
	double real;//멤버변수 (member variable)
	double imag;//상동ditto
};//(구조체선언은 반드시 세미콜론으로 끝내야 한다
typedef struct complex Complex;//자료형 " struct complex"를 앞으로 "Complex"라고도 부르겠다

//위의 두문장을 한문장으로

typedef struct complex {
	double real;
	double imag;
} Complex;





//데이터 타입의 별명 선언
typedef int myintType;//자료형 "int"를 앞으로 " myintType"라고도 부르겠다

//함수 printComplex()
//입력: 복소수
//출력: 없음
//부수효과:없음
void printComplex(Complex* ptr) {//대부분 경우 구조체의 포인터를 매개변수로 전달 받는다.
	printf("%f + j%f\n", ptr->real, ptr->imag);

}
//함수 conjugate()
//입력: 복소수(포인터)
//출력:없음
//부수효과:입력된 복소수가 켤레 복소수로 변환됨
void convertToconjugate(Complex* ptr) {
	//허수부에 -1을 곱한다
	ptr->imag = -1 * ptr->imag;
}
//함수 returnConjugate()
//입력: 복소수 포인터
//출력: 복소수 변수
//부수효과: 없음
Complex* returnConjugate(Complex* ptr) {
	Complex temp;
	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	return &temp;

}


int main(){
	myintType count = 10;//==> int count
	//구조체 변수 선언
	Complex a,b;//==>struct complex a;
		//구조체 포인터 변수 선언
	Complex* ptr;
		a.real = 10;//구조체 변수의 멤버변수 접근방법==>구조체변수이름.멤버변수이름
		a.imag = 20;
		ptr = returnConjugate(&a); printComplex(ptr);
		printComplex(&a);
		convertToconjugate(&a); printComplex(&a);

		ptr = &a;
		ptr->real = 100;// 구조체 포인터 변수의 멤버변수 접근방법 ==>구조체변수이름->멤버변수이름
		ptr->imag = 200;
		printComplex(&a);
	return 0;
	}


//구조주의: 구성요소+ 요소간의 관계(논리) 근대철학 데카르트1600s 그전까지는 모든것이 신의 뜻이었다 즉 운명론이다. 르네상스가 그 관념을 버리게한다 f=ma의 철학적의미: 신이 없다! 
//영국경험론 대륙합리론//관측(경험)=>원리 (이치) 데카르트의 명언= 난 생각(이성)한다 고로 존재한다=>신은 없다, 데카르트 사망원인: 결핵,'공공적으로 시인된 것' =공리 정하고 새로운 
//이론을 만든다 =>수학  지식을 얻는방법 영국경험론 대륙합리론,,,,인공지능 영국경험론:존로크 흄, 대륙합리론:  web2.0존로크의 이념을 컴퓨터로 어떻게 구상할까
//숙제 데카르트 책 읽고오기 MIT 스탠포드 버클리 학부에서 애들을 죽인다 책을 존나 읽힌다 정의란 무엇인가
//벡터란 어떤 양을 표현할떄 숫자 두개가 필요  복소수 숫자complex number 2개 필요 실수부 허수부 C의 구조체로 표현 struct complex
//struct complex {
//	double real(member variable);
//	double imag(member variable);
//main() {
//struct complex(데이터타입 자료형) a(구조체 변수); 구조체 변수선언
//};