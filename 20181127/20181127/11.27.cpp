#include <stdio.h>
//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�
struct complex {
	double real;//������� (member variable)
	double imag;//��ditto
};//(����ü������ �ݵ�� �����ݷ����� ������ �Ѵ�
typedef struct complex Complex;//�ڷ��� " struct complex"�� ������ "Complex"��� �θ��ڴ�

//���� �ι����� �ѹ�������

typedef struct complex {
	double real;
	double imag;
} Complex;





//������ Ÿ���� ���� ����
typedef int myintType;//�ڷ��� "int"�� ������ " myintType"��� �θ��ڴ�

//�Լ� printComplex()
//�Է�: ���Ҽ�
//���: ����
//�μ�ȿ��:����
void printComplex(Complex* ptr) {//��κ� ��� ����ü�� �����͸� �Ű������� ���� �޴´�.
	printf("%f + j%f\n", ptr->real, ptr->imag);

}
//�Լ� conjugate()
//�Է�: ���Ҽ�(������)
//���:����
//�μ�ȿ��:�Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToconjugate(Complex* ptr) {
	//����ο� -1�� ���Ѵ�
	ptr->imag = -1 * ptr->imag;
}
//�Լ� returnConjugate()
//�Է�: ���Ҽ� ������
//���: ���Ҽ� ����
//�μ�ȿ��: ����
Complex* returnConjugate(Complex* ptr) {
	Complex temp;
	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	return &temp;

}


int main(){
	myintType count = 10;//==> int count
	//����ü ���� ����
	Complex a,b;//==>struct complex a;
		//����ü ������ ���� ����
	Complex* ptr;
		a.real = 10;//����ü ������ ������� ���ٹ��==>����ü�����̸�.��������̸�
		a.imag = 20;
		ptr = returnConjugate(&a); printComplex(ptr);
		printComplex(&a);
		convertToconjugate(&a); printComplex(&a);

		ptr = &a;
		ptr->real = 100;// ����ü ������ ������ ������� ���ٹ�� ==>����ü�����̸�->��������̸�
		ptr->imag = 200;
		printComplex(&a);
	return 0;
	}


//��������: �������+ ��Ұ��� ����(��) �ٴ�ö�� ��ī��Ʈ1600s ���������� ������ ���� ���̾��� �� �����̴�. ���׻󽺰� �� ������ �������Ѵ� f=ma�� ö�����ǹ�: ���� ����! 
//��������� ����ո���//����(����)=>���� (��ġ) ��ī��Ʈ�� ���= �� ����(�̼�)�Ѵ� ��� �����Ѵ�=>���� ����, ��ī��Ʈ �������: ����,'���������� ���ε� ��' =���� ���ϰ� ���ο� 
//�̷��� ����� =>����  ������ ��¹�� ��������� ����ո���,,,,�ΰ����� ���������:����ũ ��, ����ո���:  web2.0����ũ�� �̳��� ��ǻ�ͷ� ��� �����ұ�
//���� ��ī��Ʈ å �а���� MIT �������� ��Ŭ�� �кο��� �ֵ��� ���δ� å�� ���� ������ ���Ƕ� �����ΰ�
//���Ͷ� � ���� ǥ���ҋ� ���� �ΰ��� �ʿ�  ���Ҽ� ����complex number 2�� �ʿ� �Ǽ��� ����� C�� ����ü�� ǥ�� struct complex
//struct complex {
//	double real(member variable);
//	double imag(member variable);
//main() {
//struct complex(������Ÿ�� �ڷ���) a(����ü ����); ����ü ��������
//};