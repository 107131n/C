//#include <stdio.h>

//int Add(int a, int b) {
//	int res = a + b;
//	return res;
//}
//
//void main() {
//
//	////int a = Add(10, 20);
//	////printf("%d\n", a);
//
//	//int a = 0;
//	//int b = 0;
//	//printf("�� ���� ������ �Է�: ");
//	//scanf_s("%d%d", &a, &b);
//
//	//int res = a + b;
//	//printf("%d", res);
//
//}


//void print_start() {
//	printf("===========programming start=============\n");
//	printf("�� ���� ������ �Է��ϼ���. : ");
//}
//
//void print_hap(int result) {
//	printf("��  ���� ���� %d�Դϴ�.\n", result);
//	printf("===========programming end=============\n");
//}
//
//int plus(int i, int j) {
//	int res = i + j;
//	return res;
//}
//
//
//void main(){
//
//	int a = 0;
//	int b = 0;
//
//	print_start();
//	scanf_s("%d%d", &a, &b);
//	
//	int res = plus(a, b);
//	print_hap(res);
//
//}


//int mul(int a){
//	return a * 2;
//}
//
//void main() {
//	int a = 0;
//	printf("���� �ϳ��� �Է�: ");
//	scanf_s("%d", &a);
//
//	int m = mul(a);
//	printf("��� ���: %d", m);
//}


// �簢�� ���̸� ���ϴ� �Լ� �ۼ�

/*int square(int i, int j) {
	return i * j;
}

void main() {
	int i = 0;
	int j = 0;

	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d%d", &i, &j);

	int s = square(i, j);
	printf("�簢���� ����: %d", s);
}*/


//void Rect(int w, int h) {
//	printf("�簢���� ����: %d\n", w * h);
//}
//
//void main(){
//	Rect(10, 20);
//}

//
//int Rect(int w, int h) {
//printf("�簢���� ����: %d\n", w * h);
//return 0;
//}
//
//void main() {
//	Rect(10, 20);
//}


//���� ����

//void cir(int radian) {
//	printf("���� ����: %.3f", radian * radian * 3.14);
//}
//void main() {
//	cir(5);
//}

//int cir(int radian) {
//	printf("���� ����: %.3f", radian * radian * 3.14);
//	return 0;
//}
//void main() {
//	cir(5);
//}


// ��Ģ ����
//int plus(int a, int b) {
//	return a + b;
//}
//
//int minus(int a, int b) {
//	return a - b;
//} 
//
//int multiple(int a, int b) {
//	return a * b;
//}
//
//int divide(int a, int b) {
//	return a / b;
//}
//
//void main() {
//
//	int a = 0;
//	int b = 0;
//	int res = 0;
//
//	printf("�� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d%d", &a, &b);
//
//	res = plus(a, b);
//	printf("�� ���� ��: %d\n", res);
//
//	res = minus(a, b);
//	printf("�� ���� ��: %d\n", res);
//
//	res = multiple(a, b);
//	printf("�� ���� ��: %d\n", res);
//
//	res = divide(a, b);
//	printf("�� ���� ��: %d\n", res);
//}


	//// ��������	
	//void func2() {
	//	int local = 20;
	//	printf("3��° �޸� �Ҵ� : local = 20\n");		
	//	printf("3��° �޸� �Ҹ� : local = 20\n");

	//}

	//void func1() {
	//	int local = 10;
	//	printf("2��° �޸� �Ҵ� : local = 10\n");
	//	func2();
	//	printf("2��° �޸� �Ҹ� : local = 10\n");
	//}

	//void main() {
	//	int val = 0;
	//	printf("1��° �޸� �Ҵ� : val = 0\n");
	//	func1();
	//	printf("1��° �޸� �Ҹ� : val = 0\n");
	//}


	//��������
	//int global;
	//
	//int Plus(int i, int j) {
	//	int k = i + j;
	//	global = i + j;
	//	return k;
	//}

	//void main() {
	//	int res = Plus(10, 20);
	//	printf("%d\n", res);
	//	printf("%d\n", global);
	//}


//Ŀ�� ���ǱⰡ �ִ�. 100�� ������ ����Ŀ�ǡ�, 200���� ������ ����ũĿ�ǡ��� ���´�.
//���ǱⰡ �Լ��� ���� ���ڽ���� �߾���.���Ǳ⸦ �Լ��� �����غ���.
//��, ����ڷκ��� ������ ����(100, 200)�� �Է� �޾� 100�� �Է� ������ ����Ŀ�ǡ��� ����ϰ�, 
//200�� �Է� ������ ����ũĿ�ǡ��� ����ϸ� �ȴ�.


//#include <stdio.h>
//
//void vendingmachine(int m) {
//
//	if (m == 100) {
//		printf("��Ŀ��");
//	}
//	else if (m == 200) {
//		printf("��ũĿ��");
//	}
//	else {
//		printf("100�̳� 200 �Է�");
//	}
//}
//
//int main() {
//	int m = 0;
//	printf("100�̳� 200 �Է�: ");
//	scanf_s("%d", &m);
//	vendingmachine(m);
//}



//����ڷκ��� �� ���� �Է� �޾�, �� ���� ���Ͽ� �ִ밪�� �ּҰ���
//���ϴ� �Լ��� �����϶�.�׸��� main �Լ����� �� �Լ����� ȣ���Ͽ�
//������� ����ϵ��� �϶�.

//#include <stdio.h>
//int max(int a, int b) {
//	if (a > b) {
//		printf("�ִ�: %d\n", a);
//	}
//	else {
//		printf("�ִ�: %d\n", b);
//	}
//	return 0;
//}
//int min(int a, int b) {
//	if (a > b) {
//		printf("�ּڰ�: %d", b);
//	}
//	else {
//		printf("�ּڰ�: %d", a);
//	}	
//	return 0;
//}
//
//void main() {
//	int a = 0;
//	int b = 0;
//	
//	printf("�� ������ �Է��ϼ���: ");
//	scanf_s("%d%d", &a, &b);
//	max(a, b);
//	min(a, b);
//}


//�������� ����ϵ�, ¦����(2��, 4��, 6��, 8��)�� ����ϴ� ���α׷��� �ۼ��϶�.
//��, continue���� ����Ͽ� �ۼ��� ��.

//#include <stdio.h>
//
//void main() {	
//	int a = 0;
//	while (a % 2 == 0) {
//		continue;
//		} 
//		int i = 0;
//	for (i; i < 10; i++) {
//		printf("%d", a);
//		scanf_s("%d", &a);
//
//		printf("%d * %d = %d", a, i, a * i);
//	}
//	
//}


// static ����

//#include <stdio.h>
	//void func(){
	//	static int value = 0;
	//	value++;
	//	printf("%d\n", value);
	//	}

	//void main(){
	//	int i = 0;
	//	while (i < 5) {
	//		func();
	//		i++;
	//	}
	//




