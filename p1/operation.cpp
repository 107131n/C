#include <stdio.h>

int main(void) {

	//int a = 5;
	//int b = 6;

	//printf("두 수를 입력하세요: ");
	//scanf_s("%d%d", &a, &b);

	//산술 연산자
	//printf("두 수의 합은 %d\n", a + b);
	//printf("두 수의 차는 %d\n", a - b);
	//printf("두 수의 곱은 %d\n", a * b);
	//printf("두 수의 나누기 %d\n", a / b);
	//printf("두 수의 나머지 %d\n", a % b);

	// 사용자로부터 세 개의 정수를 입력받아 세 정수의 합과 평균을 구하는 프로그램을 작성

	//int a = 0;
	//int b = 0;
	//int c = 0;

	//printf("세 수를 입력하세요: ");
	//scanf_s("%d%d%d", &a, &b, &c);

	//printf("세 수의 합 %d\n", a + b + c);
	//printf("세 수의 평균 %d\n", (a + b + c) / 3);

	//대입 연산자
	
	//int a = 8;
	//int b = 2;

	//a = a + b;
	//printf("a += b 결과 : %d\n", a);

	//a = a - b;
	//printf("a -= b 결과 : %d\n", a);

	//a = a * b;
	//printf("a *= b 결과 : %d\n", a);

	//a = a / b;
	//printf("a /= b 결과 : %d\n", a);

	//a = a % b;
	//printf("a %= b 결과 : %d\n", a);


	//증감 연산자
	
	//int a;
	//int b;

	//a = 5;
	//printf("++a의 처리 결과: %d\n", ++a);

	//a = 5;
	//printf("a++의 처리 결과: %d\n", a++);
	//printf("a를 다시 출력: %d\n", a);

	//b = 10;
	//printf("--b의 처리 결과: %d\n", --b);

	//b = 10;
	//printf("b--의 처리 결과: %d\n", b--);
	//printf("b를 다시 출력: %d\n", b);

	//a = 5;
	//b = ++a + a++ - a--;
	//printf("%d\n", b);


	//관계 연산자

	//printf("a == b의 결과: %d\n", a == b); // 0
	//printf("a < b의 결과: %d\n", a < b); //	1
	//printf("a >= c의 결과: %d\n", a >= b); // 0
	//printf("a == d의 결과: %d\n", a == d); // 1

	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 10;

	////논리 연산자

	//printf("!(a == 10)의 결과 %d\n", !(a == 10));
	//printf("(a < b) && (a < c)의 결과 %d\n", (a < b) && (a < c));
	//printf("(a < b) || (a < c)의 결과 %d\n", (a < b) || (a < c));


	//
	
	//int a;
	//int b;

	//printf("두 수를 입력하세요.");
	//scanf_s("%d%d", &a, &b);

	//printf("두 수의 합: %d\n", a + b);
	//printf("두 수의 차: %d\n", a - b);
	//printf("두 수의 곱: %d\n", a * b);
	//printf("두 수의 나누기: %d\n", a / b);

	int a;
	int b;
	int c;

	//printf("세 개의 수를 입력: ");
	//scanf_s("%d%d%d", &a, &b, &c);

	//printf("세 수의 곱은: %d", a* b *c);

	printf("세 수 정수 입력: ");
	scanf_s("%d%d%d", &a, &b, &c);

	printf("%d + %d * %d = %d\n",a,b,c, a + b * c);

	return 0;
}