//#include<stdio.h>
//int main(void)
//{
//	int a = 5;
//	int b = 3;
//	printf("�� ���� ���� %d �Դϴ�. \n", a + b);
//	printf("�� ���� ���� %d �Դϴ�. \n", a - b);
//	printf("�� ���� ���� %d �Դϴ�. \n", a * b);
//	printf("�� ���� ���� ���� %d �Դϴ�. \n", a / b);
//	printf("�� ���� ���� �������� %d �Դϴ�. \n", a % b);
//	return 0;
//
//
//}
//#include<stdio.h>
//int main(void)
//{
//	int a = 5;
//	int b = 3;
//	a += b;
//	printf("�� ���� ���� %d �Դϴ�. \n", a);
//	a -= b;
//	printf("�� ���� ���� %d �Դϴ�. \n", a);
//	a *= b;
//	printf("�� ���� ���� %d �Դϴ�. \n", a);
//	a /= b;
//	printf("�� ���� ���� ���� %d �Դϴ�. \n",a);
//	a %= b;
//	printf("�� ���� ���� �������� %d �Դϴ�. \n", a);
//	return 0;
//
//
//}
//#include<stdio.h>
//int main() 
//{
//	int a;
//	int b;
//
//	a = 5;
//	printf("++a �� ó�� ��� : %d\n", ++a);
//	a = 5;
//	printf(" a++ �� ó�� ��� : %d\n", a++);
//	printf("a�� �ٽ���� : %d\n", a);
//	b = 10;
//	printf("--b �� ó�� ��� : %d\n", --b);
//	b = 10;
//	printf("b-- �� ó�� ��� : %d\n", b--);
//	printf("b �� ��ó�� ��� : %d\n", b);
//}
//#include <stdio.h>
//void main(void)
//{
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 10;
//
//	printf("a == b �� ����� %d\n", a == b);
//	printf("a < b �� ����� %d\n", a < b);
//	printf("a >= c �� ����� %d\n", a >= b);
//	printf("a == d �� ����� %d\n", a == d);
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b = 0;
//
//	printf("a�� b�� ���� �Է��Ͻÿ�\n");
//	//scanf_s("%d", &a);
//	//scanf_s("%d", &b);
//	
//	scanf_s("%d ,%d", &a ,&b);
//
//	printf("�� ���� �� :%d\n", (a + b));
//	printf("�� ���� ��: %d\n", (a - b));
//	printf("�� ���� ��: %d\n", (a * b));
//	printf("�� ���� ������ : %d\n", (a / b));
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b, c = 0;
//	
//	printf("�� ���� ������ �Է��ϼ���:");
//
//	//scanf_s("%d,%d,%d ",&a, &b, &c);
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//
//	printf("�� ���� ���� %d�Դϴ�.", (a * b * c));
//
//	
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b, c = 0;
//	
//	printf("�� ���� ������ �Է��ϼ���:");
//
//	//scanf_s("%d,%d,%d ",&a, &b, &c);
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//
//	printf("%d", ((a * b) + c));
//
//	
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b, c = 0;
//
//	printf("�� ���� ������ �Է��ϼ���:");
//
//	scanf_s("%d %d %d", &a, &b, &c);
//	/*scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);*/
//
//	printf("�� : % d", (a + b +c));
//	printf("��� : %d", (a + b + c) / 3);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("������ �Է��ϼ���: ");
//	scanf_s("%d", &a);
//	if (a > 5)
//	{
//		printf("�Է¹��� ���� 5���� Ů�ϴ�.\n");
//	}
//	//if (a < 5)
//	//	//else
//	//{
//	//	printf("�Է¹��� ���� 5���� �۽��ϴ�.\n");
//	//}
//	else
//	{
//		printf("�Է¹��� ���� 5���� ũ�� �ʽ��ϴ�.\n");
//	}
//
//	return 0;
//}
//

//#include<stdio.h>
//
//int main() {
//
//	int a,b,c = 0;
//	printf("a,b,c���� �Է��ϼ���\n");
//
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if(a>b>c)
//	{
//		printf("%d\n",c);
//	}
//	if(b>a>c)
//	{
//		printf("%d\n",c);
//	}
//	if (a>c>b)
//	{
//		printf("%d\n", b);
//	}
//	if (c >a> b)
//	{
//		printf("%d\n", b);
//	}
//	else
//	{
//		printf("%d", a);
//	}
//	return 0;
//
//}
//#include<stdio.h>

//int main(void)
//{
//	int a = 0;
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &a);
//	if (a > 5)
//	{
//		printf("�Է°��� 5���� Ů�ϴ�.\n");
//	}
//	else if (a < 5)
//	{
//		printf("�Է°��� 5���� �۽��ϴ�.\n");
//	}
//	else
//	{
//		printf("�Է°��� 5�Դϴ�.");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &a);
//
//	if (a>=60 && a<=100  )
//	{
//		printf("�հ��Դϴ�.");
//		if (a >= 90)
//		{
//			printf("���д���Դϴ�.");
//		}
//	}
//	
//	else if ( a < 60 )
//	{
//		printf("���հ��Դϴ�.");
//	}
//	
//	else
//	{
//		printf("��ȿ���� ���� ���Դϴ�.");
//	}
//}
//#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("���̸� �Է��ϼ���");
//	scanf_s("%d", &a);
//
//	if (a < 13 && a >= 0)
//	{
//		printf("����Դϴ�");
//	}
//	else if (a >= 13 && a <= 19)
//	{
//		printf("û�ҳ��Դϴ�.");
//
//	}
//	else if (a >= 20 && a <= 150)
//	{
//		printf("�����Դϴ�.");
//	}
//	else
//	{
//		printf("���̸� �߸��Է��ϼ̽��ϴ�.");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char a;
//	char y = 0;
//	char n = 0;
//	printf("������ �Ͻðڽ��ϱ�? ��(y)/�ƴϿ�(n)");
//	scanf_s("%c", &a, 1);
//
//	if (a =='y')
//	{
//		printf("��, ����̺긦 �����ϰڽ��ϴ�.");
//	}
//	else if (a =='n')
//	{
//		printf("�ƴϿ�, ����̺긦 �������� �ʰڽ��ϴ�.");
//	}
//	else
//	{
//		printf("���ڸ� �߸��Է��Ͽ����ϴ�.");
//	}
//	return 0;
//}
