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
//		printf("���� �� �����Ͻÿ�.(1.+ 2.- 3.end) :");
//		scanf_s("%d", &sel); //��Ÿ��
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
//		printf("�� ������ �Է��ϼ���. : ");
//		scanf_s("%d%d", &i, &j);
//		result = fPtr(i, j);
//		printf("���: %d\n", result);
//	}
//}

#include <stdio.h>

void main() {
	static int a = 0;
	for (int a = 0; a > -1; a++) {
		if (a != -1) {
			printf("���� ���� ������ ���� �Է��ϼ���. : ");
			scanf_s("%d", &a);
			printf("%d������\n", a);
		}
		else if (a == -1) {
			printf("�� �й��ϼ���.");
		}
	}
}