//#include<stdio.h>
//#include<windows.h>
//
//int main() {
//
//	for (int i = 2; i < 10; i++)
//	{
//		printf("------------------%d ��------------------- \n", i);
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
//		printf("------------------ % d ��-------------------\n", i);
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
//		printf("������ �Է��ϼ��� :");
//		scanf_s("%d", &input);
//		sum += input;
//	} 
//
//	printf("�� ���� %d �Դϴ�.\n", sum);
//}
//#include<stdio.h>

//int main()
//{
//	int sum = 0;
//	int input = 0;
//
//	while (1)
//	{
//		printf("������ �Է��ϼ��� :");
//		scanf_s("%d", &input);
//		sum += input;
//		if (input == 0)
//		{
//			break;
//		}
//	}
//	printf("�� ���� %d �Դϴ�.\n", sum);
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
//		printf("������ �Է��ϼ���:");
//		scanf_s("%d", &input);
//		sum += input;
//	} while (input!=0);
//	printf("�� ���� %d �Դϴ�.\n", sum);
//
//	return 0;
//}
//


// 1���� ����ڰ� �Է��ϴ� ������������ ���ϴ� ���α׷�

//#include<stdio.h>
//
//int main() 
//{
//	int input = 0;
//	int sum = 0;
//	int i = 0;
//
//	printf("������ �Է��ϼ���");
//	scanf_s("%d", &input);
//	do
//	{
//		i++;
//		sum = sum + i;
//	} while (i<input);
//	printf("1���� %d������ ����: %d", input, sum);
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	
//	printf("������ �Է�:");
//	scanf_s("%d", &input);
//
//	for (int i = 1; i <= input; i++)
//	{
//		sum = sum + i;
//		
//	}
//	printf("����:%d",sum);
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
//		printf("a�� ���� %d�̴�.\n", a);
//		a++;
//	}
//	printf("a�� 100���� ũ��.\n");
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
//		printf("a�� ����  %d �̴�.\n", a);
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

		printf("---------%d�� ���-----------\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}



