#include <stdio.h>
#include <windows.h>
int gvar = 100;//���� ���� (global variation)
//�Լ� sum ()
//�Է�: ������
//	���: �������� ��
//	�μ�ȿ�� ����
int sum(int a, int b)/*�Լ�����(1.sum�� �Լ��� �̸��̴�. 2.�Ű������� ����(a,b 2��)3. �� �Ű������� �ڷ���(int,int) 4. ��ȯ���� �ڷ���(��ȯ��)=�Ǿ�int  1~4 �Լ�ȣ�⿡ �ʿ�������*/  {
	int c;
	c = a + b; a=100;
	return c;
}  //�Լ���ü   ��ü�� �Լ�����
//�Լ�: goodprint()
//�Է� ����
//��� ����
//�μ�ȿ�� ȭ�鿡 good ���
void goodprint() {
	printf("good\n");
}

int main() {
	int x = 10, y = 20, z;
	z = sum(x, y); //   �Լ�ȣ��
	printf("z=%d\n", z,x);
	goodprint();

	system("pause");
	return 0;
}
