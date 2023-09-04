//#include<stdio.h>
//
//void Add(int a)
//{
//    static int sum = 0;
//
//	if (a == -1)
//	{
//		printf("더 분발하세요");
//	}
//	else {
//		sum = sum + a;
//		printf("최종 누적 페이지 : %d\n", sum);
//	}	
//}
//int main(void)
//{
//	int page = 0;
//	int sum = 0;
//
//	do {
//		printf("읽은 책의 페이지 수를 입력하시오:");
//		scanf_s("%d", &page);
//		Add(page);
//
//	} while (page != -1);
//	return 0;
//}


#include<stdio.h>



//int main() {
//	int page = 0;
//	int sum = 0;
//	
//	
//	
//	do {
//		
//		printf("페이지 수를 입력하세요");
//		scanf_s("%d", &page);
//		sum = sum + page;
//		
//		if (page == -1)
//		{
//			printf("분발하세요");
//			break;
//		}
//		printf("페이지의 합은:%d\n", sum);
//	} while (page != -1);
//	
//
//}

//#include<stdio.h>
//
//int main() {
//	
//	
//	int arr[10];
//
//
//
//	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
//	{
//		arr[i] = 10 * (i + 1);
//		
//		printf("%d\n", arr[i]);
//	}
//
//	printf("각 요소의 합 :%d\n", arr[0] + arr[1] + arr[2]);
//	printf("평균:%d", (arr[0] + arr[1] + arr[2]) / 3);
//
//	
//	
//	
//}
//
//#include<stdio.h>
//int main() {
// int student[3];
// int sum = 0;
// 
// for (int i = 0; i < sizeof(student) / sizeof(int); i++)
// {
//	 printf("%d번의 학생의 점수를 입력하세요:", i + 1);
//	 scanf_s("%d", &student[i]);
// }
// for (int j = 0; j < sizeof(student) / sizeof(int); j++)
// {
//	 sum = sum + student[j];
// }
// printf("각 요소의 합 :%d \n",  sum);
//
// printf("평균값: %d \n", sum / (sizeof(student) / sizeof(int)));
//
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int total = 0;
//	int array[5] = {1,2,3,4,5};
//	total = array[0] +array[1] +array[2] +array[3] +array[4];
//	printf("배열 요소의 총합은 %d 입니다.\n", total);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int total = 0;
//	int array[5] = { 1,2 };
//	total = array[0] + array[1] + array[2] + array[3] + array[4];
//	printf("배열요소의 총 합은 %d 입니다.\n", total);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int total = 0;
//	int array[] = { 1,3,5,7,9 };
//	total = array[0] + array[1] + array[2] + array[3] + array[4];
//	printf("배열요소의 총 합은%d 입니다. \n", total);
//	return 0;
//}


#include<stdio.h>




