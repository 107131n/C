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
//	//printf("두 개의 정수를 입력: ");
//	//scanf_s("%d%d", &a, &b);
//
//	//int res = a + b;
//	//printf("%d", res);
//
//}


//void print_start() {
//	printf("===========programming start=============\n");
//	printf("두 개의 정수를 입력하세요. : ");
//}
//
//void print_hap(int result) {
//	printf("두  수의 합은 %d입니다.\n", result);
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
//	printf("정수 하나를 입력: ");
//	scanf_s("%d", &a);
//
//	int m = mul(a);
//	printf("계산 결과: %d", m);
//}


// 사각형 넓이를 구하는 함수 작성

/*int square(int i, int j) {
	return i * j;
}

void main() {
	int i = 0;
	int j = 0;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d%d", &i, &j);

	int s = square(i, j);
	printf("사각형의 넓이: %d", s);
}*/


//void Rect(int w, int h) {
//	printf("사각형의 넓이: %d\n", w * h);
//}
//
//void main(){
//	Rect(10, 20);
//}

//
//int Rect(int w, int h) {
//printf("사각형의 넓이: %d\n", w * h);
//return 0;
//}
//
//void main() {
//	Rect(10, 20);
//}


//원의 넓이

//void cir(int radian) {
//	printf("원의 넓이: %.3f", radian * radian * 3.14);
//}
//void main() {
//	cir(5);
//}

//int cir(int radian) {
//	printf("원의 넓이: %.3f", radian * radian * 3.14);
//	return 0;
//}
//void main() {
//	cir(5);
//}


// 사칙 연산
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
//	printf("두 개의 정수를 입력하세요 : ");
//	scanf_s("%d%d", &a, &b);
//
//	res = plus(a, b);
//	printf("두 수의 합: %d\n", res);
//
//	res = minus(a, b);
//	printf("두 수의 차: %d\n", res);
//
//	res = multiple(a, b);
//	printf("두 수의 곱: %d\n", res);
//
//	res = divide(a, b);
//	printf("두 수의 몫: %d\n", res);
//}


	//// 지역변수	
	//void func2() {
	//	int local = 20;
	//	printf("3번째 메모리 할당 : local = 20\n");		
	//	printf("3번째 메모리 소멸 : local = 20\n");

	//}

	//void func1() {
	//	int local = 10;
	//	printf("2번째 메모리 할당 : local = 10\n");
	//	func2();
	//	printf("2번째 메모리 소멸 : local = 10\n");
	//}

	//void main() {
	//	int val = 0;
	//	printf("1번째 메모리 할당 : val = 0\n");
	//	func1();
	//	printf("1번째 메모리 소멸 : val = 0\n");
	//}


	//전역변수
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


//커피 자판기가 있다. 100원 넣으면 ‘블랙커피’, 200원을 넣으면 ‘밀크커피’가 나온다.
//자판기가 함수와 같은 블랙박스라고 했었다.자판기를 함수로 구현해보자.
//즉, 사용자로부터 정수형 가격(100, 200)을 입력 받아 100을 입력 받으면 ‘블랙커피’를 출력하고, 
//200을 입력 받으면 ‘밀크커피’를 출력하면 된다.


//#include <stdio.h>
//
//void vendingmachine(int m) {
//
//	if (m == 100) {
//		printf("블랙커피");
//	}
//	else if (m == 200) {
//		printf("밀크커피");
//	}
//	else {
//		printf("100이나 200 입력");
//	}
//}
//
//int main() {
//	int m = 0;
//	printf("100이나 200 입력: ");
//	scanf_s("%d", &m);
//	vendingmachine(m);
//}



//사용자로부터 두 수를 입력 받아, 두 수를 비교하여 최대값과 최소값을
//구하는 함수를 정의하라.그리고 main 함수에서 이 함수들을 호출하여
//결과값을 출력하도록 하라.

//#include <stdio.h>
//int max(int a, int b) {
//	if (a > b) {
//		printf("최댓값: %d\n", a);
//	}
//	else {
//		printf("최댓값: %d\n", b);
//	}
//	return 0;
//}
//int min(int a, int b) {
//	if (a > b) {
//		printf("최솟값: %d", b);
//	}
//	else {
//		printf("최솟값: %d", a);
//	}	
//	return 0;
//}
//
//void main() {
//	int a = 0;
//	int b = 0;
//	
//	printf("두 정수를 입력하세요: ");
//	scanf_s("%d%d", &a, &b);
//	max(a, b);
//	min(a, b);
//}


//구구단을 출력하되, 짝수단(2단, 4단, 6단, 8단)만 출력하는 프로그램을 작성하라.
//단, continue문을 사용하여 작성할 것.

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


// static 변수

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




