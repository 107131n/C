//#include<stdio.h>
//
//int main(void)
//{
//	int b = 100;
//	int *pB = &b;
//
//	printf("b = %d\n", b);
//	printf("&b = %x\n",&b);
//	printf("pB = %d\n", *pB);
//	printf("pB = %p\n", pB);
//	return 0;
//
//}
//

//#include<stdio.h>
//int main(void)
//{
//	char str[] = "Programming";
//	char* ptr1;
//
//	ptr1 = &str[0];
//	printf("%x\n", ptr1);
//	printf("%x\n", ptr1+1);
//	printf("%c\n", *(ptr1+1));
//	printf("%x\n", ptr1+3);
//	printf("%c\n", *(ptr1+3));
//}

//#include<stdio.h>
//int main(void)
//{
//	char a = 'F';
//	int b = 5;
//	char* pA = &a;
//	int* pB = &b;
//
//	printf("%c\n", *pA);
//	printf("%d\n", *pB);
//
//}
//
//#include<stdio.h>
//int main(void)
//{
//	int arr[5] = {1,2,3,4,5};
//	int* ptr;
//
//	ptr = &arr[0];
//	printf("�߾Ӱ��� %d", *(ptr+2));
//	
//	return 0;
//
//}
//#include<stdio.h>
//int main() 
//{
//	char a = 'A';
//	char* pA = &a;
//	int b = 100;
//	int* pB = &b;
//	double c = 3.14;
//	double* pC = &c;
//	
//	printf("pA�� ũ��: %dbyte\n", sizeof(pA));
//	printf("pB�� ũ��: %dbyte\n", sizeof(pB));
//	printf("pC�� ũ��: %dbyte\n\n", sizeof(pC));
//	printf("*pA�� ũ��: %dbyte\n", sizeof(*pA));
//	printf("*pB�� ũ��: %dbyte\n", sizeof(*pB));
//	printf("*pC�� ũ��: %dbyte\n", sizeof(*pC));
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	char a = 'C';
//	int b = 10;
//	double c = 3.14;
//
//	char* pA = &a;
//	int* pB = &b;
//	double* pC = &c;
//
//
//	printf("1������Ų��:%c,%d,%.2f", (*pA) + 1, (*pB) + 1, (*pC) + 1);
//
//}
//#include<stdio.h>
//
//int main() 
//{
//	char a = 'A';
//	char* pA = &a;
//
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%c ", *pA + i);
//	}
//}
//#include<stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//	char b = 'a';
//	
//	for (int i = 0; i < 26; i++) {
//		pA = &b;
//		printf("%c ", *pA + i);
//	}
//	
//
//}




//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 3,5,2,11,10 };
//	int i = 0;
//	int imax = a[0];
//	int* pA = &imax;
//	int b = 0;
//	int c = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		if (a[i] < a[i + 1])
//		{
//			b = a[i + 1];
//			
//		}
//		else if (a[i] > a[i + 1])
//		{
//			c = a[i];
//			a[i] = c;
//		}
//		else { continue; }
//	}
//	printf("���� %d\n", b);
//}
//

//#include<stdio.h>
//int main()
//{
//	int a[] = {1,2,3,4,5};
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("�迭�� ��� ���:%d\n", a[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("�迭�� �ּ� ���:%d\n", &a[i]);
//	}
//
//	printf("�迭�� �̸� ���:%d\n", a);
//}
//


//
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int num;
//	int* student;
//
//	fputs("�л����� �Է��ϼ���:", stdout);
//	scanf_s("%d", &num);
//
//	student = (int*)malloc(sizeof(int) * num);
//	
//	if (student == NULL)
//	{
//		printf("�޸𸮰� �����Ͽ� �޸𸮸� �Ҵ��� �� �����ϴ�.\n");
//
//	}
//	printf("�Ҵ�� �޸��� ũ��� %d �Դϴ�.\n", sizeof(int) * num);
//	free(student);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int i;
//
//	printf("�迭�� ��� ���:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//	printf("\n");
//
//	printf("�迭�� �̸��� �̿��� �迭������:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%x ", arr + i);
//		printf("%d ", *(arr + i));
//	}
//	printf("\n\n");
//	return 0;
//}
 


//#include<stdio.h>
//int main() 
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* pTemp;
//	int i;
//
//	pTemp = arr;
//
//	printf("�迭�� ������:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", pTemp[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int num, i, total = 0;
//	int* student;
//
//	fputs("�л����� �Է��ϼ��� :".stdout);
//	scanf("%d", &num);
//	student = ((int*)malloc(sizeof(int) * num);
//	if (student == NULL)
//	{
//		printf("�޸𸮰� �����Ͽ� �޸𸮸� �Ҵ��� �� �����ϴ�.\n");
//		return0;
//	}
//		for (i = 0; i < num; i++) 
//		{
//			printf("%d��° �л��� �����Է�", i + 1);
//			scanf_s("")
//		}
//		for (i = 0; i < num; i++) 
//		{
//			total += student[i];
//		}
//		printf("����: %d")
//
//
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int i;
//	int* arr = (int*)malloc(sizeof(int) * 5);
//	int* rearr;
//
//	for (i = 0; i < 5; i++) 
//	{
//		arr[i] = i + 1;
//	}
//	rearr = (int*)realloc(arr, sizeof(int) * 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", rearr[i+1]);
//	}
//	free(rearr);
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//
//{
//	char str[] = "love";
//	const char* pStr = "you";
//
//	str[0] = 'r';
//
//	printf("str�� ���:%s\n", str);
//	printf("pStr�� ���: %s\n", pStr);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	const char* pArr[] = {"c���","�ڹ�","������"};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", pArr[i]);
//		
//	}
//
//	return 0;
//}
//2�����迭

//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	int arr[2][3];
//	arr[0][0] = 1;
//	arr[0][1] = 2;
//	arr[0][2] = 3;
//	arr[1][0] = 4;
//	arr[1][1] = 5;
//	arr[1][2] = 6;
//
//	printf("2���� �迭 ���� ��� ���\n");
//	printf("----------------------------\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	printf("============================\n");
//	return 0;
// }
//
//
//
//#include<stdio.h>
//
//void func(int* pArr);
//
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i;
//	
//	func(arr);
//	for (i = 0; i < 5; i++)
//	{
//		printf("�迭�� ��� ���: %d\n", arr[i]);
//	}
//	return 0;
//}
//void func(int *pArr)
//{
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("�Լ� �ȿ��� �迭�� ��� ��� : %d\n", *(pArr + i));
//
//	}
//
//}
//#include<stdio.h>
//
//void func(int* pArr, int size);
//
//int main(void)
//{
//	int arr [] = {1,2,3,4,5};
//	int sumArr, sizeArr;
//
//	sizeArr = sizeof(arr) / sizeof(int);
//	sumArr = func(arr, sizeArr);
//	printf("�迭�� ������ : %d\n", sumArr);
//
//	return 0;
//}
//
//int func(int* pArr, int size)
//{
//
//	int i, sum = 0;
//	for (i = 0; i < size; i++)
//	{
//		sum += *(pArr + i);
//	}
//	return sum;
//}

//#include <stdio.h>
//
//void callValue(int b);
//
//int main(void)
//{
//	int a = 1;
//	callValue(a);
//	printf("���μ� a�� ���: %d\n", a);
//	return 0;
//
//}
//void callValue(int b)
//{
//	b = b + 3;
//	printf("�����μ� b�� ���: %d\n", b);
////}
////#include <stdio.h>
//
//void Swap(int a, int b);
//
//int main(void)
//{
//	int x = 10, y = 20;
//	printf("�ʱⰪ x=%d, y=%d\n", x, y);
//	Swap(x, y);
//	printf("�Լ� �ۿ��� ���� �� x = %d, y= %d\n", x, y);
//	return 0;
//}
//
//void Swap(int a, int b)
//{
//
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("�Լ� �ȿ��� ���� �� a=%d,b=%d\n", a, b);
//}
//#include<stdio.h>
//
//void callReference(int* b);
//
//int main(void)
//{
//	int a = 1;
//	callReference(&a);
//	printf("���μ� a�� ��� : %d\n", a);
//	return 0;
//
//}
//void callReference(int* b)
//{
//	*b = *b + 3;
//	printf("�����μ� *b�� ���:%d\n", *b);
//}
//#include <stdio.h>
//
//void Swap(int *a, int *b);
//
//int main(void)
//{
//	int x = 10, y = 20;
//	printf("�ʱⰪ x=%d, y=%d\n", x, y);
//	Swap(&x, &y);
//	printf("�Լ� �ۿ��� ���� �� x = %d, y= %d\n", x, y);
//	return 0;
//}
//
//void Swap(int *a, int *b)
//{
//
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	printf("�Լ� �ȿ��� ���� �� *a = %d, *b=%d\n", *a, *b);
//}

//#include <stdio.h>
//void Temp(int* a, int* b, int* pSum, int* pMul);
//
//int main() {
//	
//	 
//	int i = 0;
//	int j = 0;
//	int hap = 0;
//	int gob = 0;
//
//	printf("�� ���� �Է��ϼ���");
//	scanf_s("%d,%d", &i, &j);
//	
//
//	Temp(&i, &j, &hap, &gob);
//
//	printf("�� : %d\n", hap);
//	printf("�� : %d\n", gob);
//
//	return 0;
//
//}
//void Temp(int *a, int *b,int* pSum,int* pMul)
//{
//	*pSum = *a + *b;
//	*pMul = *a * *b;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Factorial(int a, int* pRet)
//{
//	int i;
//	
//	for (i = 1; i < (a + 1); i++)
//	{
//		*pRet = *pRet * i;
//	}
//	
//}
//
//int  main() {
//
//	int i = 5;
//	int result = 1;
//	Factorial(i, &result);
//	printf("��� : %d\n", result);
//}
//

//#include <stdio.h>
//
//int Add(int a, int b);
//int Min(int a, int b);
//
//int main(void)
//{
//	int a, b, sel, result;
//	int(*fPtr)(int a, int b) = 0;
//	while (1)
//
//	{
//		printf("������ �����Ͻÿ� ����, ����, ���� :");
//			scanf_s("%d", &sel);
//
//		switch (sel)
//		{
//		case 1:
//
//			fPtr = Add;
//			break;
//		case2:
//			fPtr = Min;
//			break;
//		case3:
//			return 0;
//		default:
//			break;
//		}
//
//		printf("�� ������ �Է��Ͻÿ� :");
//		scanf_s("%d %d",&a, &b);
//		
//		result = fPtr(a, b);
//
//		printf("��� : %d\n", result);
//	
//
//	}
//	return 0;
//		
//}
//int Add(int a, int b)
//{
//	return a + b;
//	
//}
//int Min(int a, int b)
//{
//	return a - b;
//}

//
//#include <stdio.h>
//
//void PlusMul(int* a, int* b, int* pSum, int* pMul);
//
//int main (void)
//{
//
//	int a= 0;
//	int b = 0;
//	int hap= 0;
//	int gop = 0;
//
//	printf("�� ���� �Է��Ͻÿ� : ");
//	scanf_s("%d %d", &a, &b);
//
//	PlusMul(&a, &b, &hap, &gop);
//	printf("�� : %d\n", hap);
//	printf("�� : %d\n", gop);
//	return 0;
//}
//
//void PlusMul(int* a, int* b, int* pSum, int* pMul)
//{
//	*pSum = *a + *b;
//	*pMul = *a * *b;
//
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "Love";
//	
//	char* p;
//
//	p = strchr(str, 'v');
//	
//	if (p != NULL)
//	{
//		*p = 'b';
//		printf("������ : %s\n", str);
//	}
//	else 
//	{
//		printf("NULL�� �����Ͽ����ϴ�.\n");
//	}
//	return 0;
//}