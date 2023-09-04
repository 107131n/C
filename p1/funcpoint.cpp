//#include <stdio.h>
//
//int Plus(int a, int b) {
//	return a + b;
//}
//int Minus(int a, int b) {
//	return a - b;
//} 
//int Multiple(int a, int b) {
//	return a * b;
//}
//int Divide(int a, int b) {
//	return a / b;
//}
//void main() {
//	int i, j, sel, result;
//
//	int (*fPtr)(int a, int b) = NULL;
//
//	while (true) {
//		printf("다음 중 선택하시오.(1.+ 2.- 3.end) :");
//		scanf_s("%d", &sel); //런타임
//
//		switch (sel) {
//		case 1:
//			fPtr = Plus;
//			break;
//		case 2:
//			fPtr = Minus;
//			break;
//		case 4:
//			fPtr = Multiple;
//			break;
//		case 5:
//			fPtr = Divide;
//			break;
//		case 3:
//			return;
//		default:
//			break;
//		}
//		printf("두 정수를 입력하세요. : ");
//		scanf_s("%d%d", &i, &j);
//		result = fPtr(i, j);
//		printf("결과: %d\n", result);
//	}
//}

#include <stdio.h>

void main() {
	static int a = 0;
	for (int a = 0; a > -1; a++) {
		if (a != -1) {
			printf("내가 읽은 페이지 수를 입력하세요. : ");
			scanf_s("%d", &a);
			printf("%d페이지\n", a);
		}
		else if (a == -1) {
			printf("더 분발하세요.");
		}
	}
}