//// �迭�� ����
//
//#include<stdio.h>
//
//int main() 
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5];
//
//
//	for (int i = 0; i < 5; i++) 
//	{
//		arr2[i] = arr1[i];
//		printf("arr2[%d]=%d\n", i, arr2[i]);
//		printf("arr1[%d]=%d\n", i, arr1[i]);
//	}
//	printf("arr2[%d]=%d\n",, arr2[i]);
//	arr2[0] = arr1[0];
//	arr2[1] = arr1[1];
//	arr2[2] = arr1[2];
//	arr2[3] = arr1[3];
//	arr2[4] = arr1[4];
//
//	printf("%d", arr2[2]);
//}

//
//#include <stdio.h>
//
//int main() 
//{
//	int arr1[3] = {1,2,3};
//	int arr2[3];
//	for (int i = 0; i < 3; i++)
//	{
//		arr2[i] = arr1[i];
//		printf("%d", arr2[i]);
//	}
//
//}

//
////�������� ó���϶�
//#include <stdio.h>
//
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5];
//	for (int i = 0; i < 5; i++)
//	{
//		arr2[4-i] = arr1[i];
//		printf("%d\n", arr2[i]);
//	}
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char str[12] = "Hello World";
//	printf("%s \n", str);
//	
//}
//
//#include<stdio.h>
//int main(void)
//{
//	char str[] = "Hello World";
//	printf("*** ���ڿ� ���� �� **\n");
//	printf("%s \n\n", str);
//	str[6] = 'K';
//	str[7] = 'o';
//	str[8] = 'r';
//	str[9] = 'e';
//	str[10] = 'a';
//	printf("*** ���ڿ� ���� ��  ***\n");
//	printf("%s \n", str);
//	return 0;
//
//}

//#include <stdio.h>
//int main() 
//{
//	int i;
//	char str1[100] = "Beautiful";
//
//	for (i = 0; i < 10; i++)
//		printf("%c", str1[i]);
//
//	printf("\n");
//	printf("str1 = %s \n", str1);
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	char str1[] = "Hello\0World";
//		printf("str1 = %s \n", str1);
//
//		str1[3] = '\0';
//		printf("st1 = %s \n", str1);
//		str1[0] = '\0';
//		printf("str1 = %s \n", str1);
//		return 0;
//}
//
//#include<stdio.h>
//
//int main() 
//{
//	char ch = 'A';
//	
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%c ", ch + i);
//	}
//}
//
//#include<stdio.h>
//int main()
////���̰� 100�� �迭 ���� ����ڷκ��� �ݺ��Ͽ� ���� �Է¹ھ� �迭�� ��ҿ� ���������� ����
////if �Է°��� -1�̸� �ݺ����� ���������� ���ݱ��� �Է��� ������ ���� ��� ����غ���
//{
//	int  a = 0;
//	int cnt = 0;
//	int arr[100];
//	printf("������ ���� �Է��ϼ���");
//	for (int i = 0; i < 100; i++) 
//	{
//		scanf_s("%d", &arr[i]);
//		if (arr[i] == -1)
//		{
//			cnt = i;
//			break;
//		}
//	}
//	for (int j = 0; j < cnt; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int Swap(int i, int j);
//
//int main()
//
//{
//
//	int a=0;
//	int b=0;
//
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	
//	Swap(a, b);
//}
//
//
//int Swap(int i ,int j)
//{
//	int temp = 0;
//	temp = i;
//	i = j;
//	j = temp;
//	printf("%d%d", i, j);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() 
//
//{
//	int arr[2];
//	int a = 0;
//	int b = 0;
//
//	scanf_s("%d%d", &arr[0], &arr[1]);
//	
//
//	if (arr[0] > arr[1])
//	{
//		printf("ū ����:%d", arr[0]);
//	}
//	else if(arr[0] = arr[1])
//	{
//		printf("�����ϴ�.");
//	}
//	else
//	{
//		printf("ū����%d", arr[1]);
//	}
//
//}

#include <stdio.h>
void Max(int a, int b);
int main() 

{
	int arr[2];
	scanf_s("%d%d", &arr[0], &arr[1]);
	Max(arr[0], arr[1]);
}
void Max(int a, int b)
{
	
	if (a > b)
	{
		printf("ū ����:%d", a);
	}
	else if (a == b)
	{
		printf("�����ϴ�.");
	}
	else
	{
		printf("ū����%d", b);
	}

}


//#include <stdio.h>
//int  main() {
//	int arr[100];
//	int sum = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = i+1;
//		sum = sum + arr[i];
//	}
//	printf("��� ����� ����:%d", sum);
//
//}
//
//
//

















