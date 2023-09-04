//#include<stdio.h>
//#include<windows.h>
//
//int main() {
//
//	for (int i = 2; i < 10; i++)
//	{
//		printf("------------------%d 단------------------- \n", i);
//		for (int j = 1; j < 10; j++)
//		{
//		
//			printf("%d x %d = %d\n", i, j, i * j);
//			Sleep(100);
//		}
//	}
//}

//int main() {
//	
//	int i = 2;
//	int j = 1;
//	while (i < 10)
//	{
//		
//		printf("------------------ % d 단-------------------\n", i);
//		j = 1;
//		while (j < 10)
//		{
//			printf(" % d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//		i++;
//		
//	}
//	
//}

//#include<stdio.h>
//
//int main() 
//{	
//	
//	for (int i = 1; i < 6; i++)
//	{	
//
//		for (int j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int input = 1;
//
//	while(input!=0)
//	{
//		printf("정수를 입력하세요 :");
//		scanf_s("%d", &input);
//		sum += input;
//	} 
//
//	printf("총 합은 %d 입니다.\n", sum);
//}
//#include<stdio.h>

//int main()
//{
//	int sum = 0;
//	int input = 0;
//
//	while (1)
//	{
//		printf("정수를 입력하세요 :");
//		scanf_s("%d", &input);
//		sum += input;
//		if (input == 0)
//		{
//			break;
//		}
//	}
//	printf("총 합은 %d 입니다.\n", sum);
//}

//#include<stdio.h>
// 
//
//int main()
//{
//	int sum = 0;
//	int input = 0;
//	
//		
//	do
//	{
//		printf("정수를 입력하세요:");
//		scanf_s("%d", &input);
//		sum += input;
//	} while (input!=0);
//	printf("총 합은 %d 입니다.\n", sum);
//
//	return 0;
//}
//


// 1부터 사용자가 입력하는 값까지의합을 구하는 프로그램

//#include<stdio.h>
//
//int main() 
//{
//	int input = 0;
//	int sum = 0;
//	int i = 0;
//
//	printf("정수를 입력하세요");
//	scanf_s("%d", &input);
//	do
//	{
//		i++;
//		sum = sum + i;
//	} while (i<input);
//	printf("1부터 %d까지의 합은: %d", input, sum);
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	
//	printf("정수를 입력:");
//	scanf_s("%d", &input);
//
//	for (int i = 1; i <= input; i++)
//	{
//		sum = sum + i;
//		
//	}
//	printf("합은:%d",sum);
//}


//#include <stdio.h>
//
//void main() 
//{
//	int a = 0;
//6	while (1)
//	{
//		if (a > 100)
//		{
//			break;
//		}
//		printf("a의 값은 %d이다.\n", a);
//		a++;
//	}
//	printf("a는 100보다 크다.\n");
//}
//#include <stdio.h>
//void main()
//{
//	int a = 0;
//	while(a < 100) 
//	{
//		a++;
//		if (a > 80 && a < 90)
//		{
//			continue;
//		}
//		printf("a의 값은  %d 이다.\n", a);
//	}
//}

#include <stdio.h>
void main()
{

	
	for (int i = 2; i < 10; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("---------%d단 출력-----------\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}



