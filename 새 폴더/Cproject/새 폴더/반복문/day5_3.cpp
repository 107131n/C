//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i < 13; i++)
//	{
//
//		printf("%d��",i);
//	}
//	return;
//}
//#include<stdio.h>

//int main()
//{
//	int i = 1;
//	int a;
//
//	printf("���?:");
//	scanf_s("%d", &a);
//
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", a ,i ,(a * i));
//		i++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int a;
//
//	printf("�� ��?:");
//	scanf_s("%d", &a);
//	
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d X %d = %d\n", a, i, a * i);
//	}
//	return 0;
//
//}
//#include<stdio.h>

//int main() 
//{
//	int a = 2;
//	
//	for (int i = 2; i <= 100; i+=2)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int i=1;
//	while (i <= 50)
//	{
//		printf("%d\n", a * i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int sum = 0;
//	
//	for (int i = 1; i < 11; i++)
//
//	{
//		sum+=i;
//		printf("%d\n", sum);
//		
//	}
//	
//}
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	while (i < 11)
//	{
//		sum += i;
//		printf("%d\n", sum);
//		i++;
//
//	}
//	return 0;
//}
//#include<stdio.h>

//int main() 
//{
//	int sum = 0;
//	int a = 0;
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &a);
//	for (int i = 1; i <= a; i++) 
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	
//}
//#include<stdio.h>
//#include<windows.h>
//
//int main() 
//
//{
//	for (int i = 1; i<=100; i++)
//	{
//		printf("���� : %d %%%\n", i);
//		Sleep(100);
//	}
//	printf("������ �Ϸ�Ǿ����ϴ�\n");
//	return 0;
//}

#include<stdio.h>
#include<windows.h>

int main() 
{	
	int i = 1;
	while (i <= 100)
	{
		
		printf("����: %d\n", i);
		i++;
		Sleep(100);
	}
	printf("������ �Ϸ�Ǿ����ϴ�.");

	
}