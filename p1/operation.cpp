#include <stdio.h>

int main(void) {

	//int a = 5;
	//int b = 6;

	//printf("�� ���� �Է��ϼ���: ");
	//scanf_s("%d%d", &a, &b);

	//��� ������
	//printf("�� ���� ���� %d\n", a + b);
	//printf("�� ���� ���� %d\n", a - b);
	//printf("�� ���� ���� %d\n", a * b);
	//printf("�� ���� ������ %d\n", a / b);
	//printf("�� ���� ������ %d\n", a % b);

	// ����ڷκ��� �� ���� ������ �Է¹޾� �� ������ �հ� ����� ���ϴ� ���α׷��� �ۼ�

	//int a = 0;
	//int b = 0;
	//int c = 0;

	//printf("�� ���� �Է��ϼ���: ");
	//scanf_s("%d%d%d", &a, &b, &c);

	//printf("�� ���� �� %d\n", a + b + c);
	//printf("�� ���� ��� %d\n", (a + b + c) / 3);

	//���� ������
	
	//int a = 8;
	//int b = 2;

	//a = a + b;
	//printf("a += b ��� : %d\n", a);

	//a = a - b;
	//printf("a -= b ��� : %d\n", a);

	//a = a * b;
	//printf("a *= b ��� : %d\n", a);

	//a = a / b;
	//printf("a /= b ��� : %d\n", a);

	//a = a % b;
	//printf("a %= b ��� : %d\n", a);


	//���� ������
	
	//int a;
	//int b;

	//a = 5;
	//printf("++a�� ó�� ���: %d\n", ++a);

	//a = 5;
	//printf("a++�� ó�� ���: %d\n", a++);
	//printf("a�� �ٽ� ���: %d\n", a);

	//b = 10;
	//printf("--b�� ó�� ���: %d\n", --b);

	//b = 10;
	//printf("b--�� ó�� ���: %d\n", b--);
	//printf("b�� �ٽ� ���: %d\n", b);

	//a = 5;
	//b = ++a + a++ - a--;
	//printf("%d\n", b);


	//���� ������

	//printf("a == b�� ���: %d\n", a == b); // 0
	//printf("a < b�� ���: %d\n", a < b); //	1
	//printf("a >= c�� ���: %d\n", a >= b); // 0
	//printf("a == d�� ���: %d\n", a == d); // 1

	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 10;

	////�� ������

	//printf("!(a == 10)�� ��� %d\n", !(a == 10));
	//printf("(a < b) && (a < c)�� ��� %d\n", (a < b) && (a < c));
	//printf("(a < b) || (a < c)�� ��� %d\n", (a < b) || (a < c));


	//
	
	//int a;
	//int b;

	//printf("�� ���� �Է��ϼ���.");
	//scanf_s("%d%d", &a, &b);

	//printf("�� ���� ��: %d\n", a + b);
	//printf("�� ���� ��: %d\n", a - b);
	//printf("�� ���� ��: %d\n", a * b);
	//printf("�� ���� ������: %d\n", a / b);

	int a;
	int b;
	int c;

	//printf("�� ���� ���� �Է�: ");
	//scanf_s("%d%d%d", &a, &b, &c);

	//printf("�� ���� ����: %d", a* b *c);

	printf("�� �� ���� �Է�: ");
	scanf_s("%d%d%d", &a, &b, &c);

	printf("%d + %d * %d = %d\n",a,b,c, a + b * c);

	return 0;
}