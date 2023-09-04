#include<stdio.h>

//void main(){
//	int size;
//	scanf_s("%d", &size);
//
//	int arr[size];
//}

//void main() {
//	int arr[3]; //12바이트 할당
//	int total = 0;
//	double avg = 0.0;
//
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//		printf("%d번째 학생 성적 입력: ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		total += arr[i];
//	}
//	avg = total / 3;
//
//	printf("총점: %d\n", total);
//	printf("평균: %.1f\n", avg);
//}
//
//void main() {
//	int arr[] = {11,12,13,14,15};
//	int total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
//	printf("배열의 총 합은 %d\n", total);
//}

//void main(){
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5];
//
//	for (int i = 0; i < 5;i++) {
//		arr2[i] = arr1[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", arr2[i]);
//	}
//	
//}
//
//void main() {
	//	int arr1[5] = { 1,2,3,4,5 };
	//	int arr2[5];
	//
	//	for (int i = 0; i < 5; i++) {
	//		arr2[4-i] = arr1[i];
	//	}
	//	
	//	for (int i = 0; i < 5; i++) {
	//		printf("%d\n", arr2[i]);
	//	}
	//}

	//char barbie[] = "바비도 결국 완벽하지 않아도 되고, 약해도 되고, 괴로워도 된다는 것, 그래도 바비는 바비라는 것을 전하고 싶었다";
	//printf("%s\n", barbie);

	/*char str[] = "Hello World";
	printf("문자열 변경 전\n");
	printf("%s\n\n", str);

	str[6] = 'K';
	str[7] = 'O';
	str[8] = 'R';
	str[9] = 'E';
	str[10] = 'A';

	printf("문자열 변경 후\n");
	printf("%s\n\n", str);*/

	//
	//char str1[100] = "Beautiful";

	//for (int i = 0; i < 100; i++) {
	//	printf("%c", str1[i]);
	//}
	//printf("\n");
	//printf("str1 = %s\n", str1);

	//char str1[] = "Hello\0World";
	//printf("str1 = %s\n", str1); // Hello, null전까지만 출력됨

	//str1[3] = '\0';
	//printf("str1 = %s\n", str1); // Hel, Hel'\0'lo null값이 중간에 삽입되므로 Hel까지 출력

	//str1[0] = '\0';
	//printf("str1 = %s\n", str1);

	//int b = 100;
	//int* pB = &b;

	//printf("b  = %d\n", b);
	//printf("&b = %p\n", &b);
	//printf("pB = %p\n", pB);
	//printf("*pB = %d\n", *pB);

//}


