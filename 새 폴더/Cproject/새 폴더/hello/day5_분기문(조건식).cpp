//#include<stdio.h>
//
//int main(){
//	int a = 0;
//	
//	printf("점수를 입력하세요:");
//	scanf_s("%d", &a);
//
//	if (a > 90 && a < 100)
//	{
//		printf("A학점");
//	}
//	else if (a > 80 && a < 91)
//	{
//		printf("B학점");
//	}
//	else if (a > 70 && a < 81)
//	{
//		printf("C학점");
//	}
//	else if (a > 60 && a < 71)
//	{
//		printf("D학점");
//	}
//	else if (a >0 &&  a<61)
//	{
//		printf("F학점");
//	}
//	else
//	{
//		printf("잘못된 점수 입니다.");
//	}
//	return 0;
//	
//}

//#include<stdio.h>
//
//int main()
//{
//	int shortcut;
//	printf("단축키를 입력하시오 :");
//	scanf_s("%d",&shortcut);
//	switch (shortcut)
//	{
//	case 1:
//		printf("딸 : 010-2389-xxxx\n");
//		break;
//	case 2:
//		printf("아들 : 010-5577-xxxx\n");
//		break;
//	case 3:
//		printf("남편 : 010-4561-XXXX\n");
//		break;
//	default:
//		printf("해당 단축키가 없습니다.\n");
//		break;
//	}
//	return 0;
//
//}


//3,4,5 봄입니다.
//6,7,8 여름입니다.
//910 11 가을입니다.
//12 1 2 겨울입니다.

//#include<stdio.h>
//
//int main() 
//{
//	int a = 0;
//	printf("현재 몇월입니까?");
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 12:
//	case 1:
//	case 2:
//		printf("겨울 입니다");
//		break;
//	case 3:
//	case 4:
//	case 5:
//		printf("봄 입니다");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("여름 입니다");
//		break;
//
//	case 9:
//	case 10:
//	case 11:
//		printf("가을 입니다");
//	
//		break;
//	default:
//		printf("해당 단축키가 없습니다.");
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
//	printf("점수를 입력하세요:");
//	scanf_s("%d", &a);
//	a = (a-1) / 10;
//	switch (a)
//	{
//	case 10:
//	case 9:
//		printf("A학점\n");
//		break;
//	case 8:
//		printf("B학점\n");
//		break;
//	case 7:
//		printf("C학점\n");
//		break;
//	case 6:
//		printf("D학점\n");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("F학점\n");
//		break;
//	default:
//		printf("잘못된값\n");
//	}
//}
//
//#include <stdio.h>
//
//int main() 
//{
//	int a = 0;
//
//	printf("값을 입력하세요");
//	scanf_s("%d", &a);
//	
//	a = a % 2;
//		switch (a) 
//		
//	{
//		case 0:
//			printf("짝수 입니다.");
//			break;
//		case 1:
//			printf("홀수 입니다.");
//			break;
//		default:
//			printf("잘못된 값입니다.");
//	}
//
//}