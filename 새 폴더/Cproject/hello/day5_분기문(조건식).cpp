//#include<stdio.h>
//
//int main(){
//	int a = 0;
//	
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &a);
//
//	if (a > 90 && a < 100)
//	{
//		printf("A����");
//	}
//	else if (a > 80 && a < 91)
//	{
//		printf("B����");
//	}
//	else if (a > 70 && a < 81)
//	{
//		printf("C����");
//	}
//	else if (a > 60 && a < 71)
//	{
//		printf("D����");
//	}
//	else if (a >0 &&  a<61)
//	{
//		printf("F����");
//	}
//	else
//	{
//		printf("�߸��� ���� �Դϴ�.");
//	}
//	return 0;
//	
//}

//#include<stdio.h>
//
//int main()
//{
//	int shortcut;
//	printf("����Ű�� �Է��Ͻÿ� :");
//	scanf_s("%d",&shortcut);
//	switch (shortcut)
//	{
//	case 1:
//		printf("�� : 010-2389-xxxx\n");
//		break;
//	case 2:
//		printf("�Ƶ� : 010-5577-xxxx\n");
//		break;
//	case 3:
//		printf("���� : 010-4561-XXXX\n");
//		break;
//	default:
//		printf("�ش� ����Ű�� �����ϴ�.\n");
//		break;
//	}
//	return 0;
//
//}


//3,4,5 ���Դϴ�.
//6,7,8 �����Դϴ�.
//910 11 �����Դϴ�.
//12 1 2 �ܿ��Դϴ�.

//#include<stdio.h>
//
//int main() 
//{
//	int a = 0;
//	printf("���� ����Դϱ�?");
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 12:
//	case 1:
//	case 2:
//		printf("�ܿ� �Դϴ�");
//		break;
//	case 3:
//	case 4:
//	case 5:
//		printf("�� �Դϴ�");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("���� �Դϴ�");
//		break;
//
//	case 9:
//	case 10:
//	case 11:
//		printf("���� �Դϴ�");
//	
//		break;
//	default:
//		printf("�ش� ����Ű�� �����ϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &a);
//	a = (a-1) / 10;
//	switch (a)
//	{
//	case 10:
//	case 9:
//		printf("A����\n");
//		break;
//	case 8:
//		printf("B����\n");
//		break;
//	case 7:
//		printf("C����\n");
//		break;
//	case 6:
//		printf("D����\n");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("F����\n");
//		break;
//	default:
//		printf("�߸��Ȱ�\n");
//	}
//}
//
//#include <stdio.h>
//
//int main() 
//{
//	int a = 0;
//
//	printf("���� �Է��ϼ���");
//	scanf_s("%d", &a);
//	
//	a = a % 2;
//		switch (a) 
//		
//	{
//		case 0:
//			printf("¦�� �Դϴ�.");
//			break;
//		case 1:
//			printf("Ȧ�� �Դϴ�.");
//			break;
//		default:
//			printf("�߸��� ���Դϴ�.");
//	}
//
//}