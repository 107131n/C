//#include<stdio.h>
//int main(void)
//{
//	int a = 5;
//	int b = 3;
//	printf("두 수의 합은 %d 입니다. \n", a + b);
//	printf("두 수의 차는 %d 입니다. \n", a - b);
//	printf("두 수의 곱은 %d 입니다. \n", a * b);
//	printf("두 수를 나눈 몫은 %d 입니다. \n", a / b);
//	printf("두 수를 나눈 나머지는 %d 입니다. \n", a % b);
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
//	printf("두 수의 합은 %d 입니다. \n", a);
//	a -= b;
//	printf("두 수의 차는 %d 입니다. \n", a);
//	a *= b;
//	printf("두 수의 곱은 %d 입니다. \n", a);
//	a /= b;
//	printf("두 수를 나눈 몫은 %d 입니다. \n",a);
//	a %= b;
//	printf("두 수를 나눈 나머지는 %d 입니다. \n", a);
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
//	printf("++a 의 처리 결과 : %d\n", ++a);
//	a = 5;
//	printf(" a++ 의 처리 결과 : %d\n", a++);
//	printf("a를 다시출력 : %d\n", a);
//	b = 10;
//	printf("--b 의 처리 결과 : %d\n", --b);
//	b = 10;
//	printf("b-- 의 처리 결과 : %d\n", b--);
//	printf("b 의 재처리 결과 : %d\n", b);
//}
//#include <stdio.h>
//void main(void)
//{
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 10;
//
//	printf("a == b 의 결과는 %d\n", a == b);
//	printf("a < b 의 결과는 %d\n", a < b);
//	printf("a >= c 의 결과는 %d\n", a >= b);
//	printf("a == d 의 결과는 %d\n", a == d);
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b = 0;
//
//	printf("a와 b를 각각 입력하시오\n");
//	//scanf_s("%d", &a);
//	//scanf_s("%d", &b);
//	
//	scanf_s("%d ,%d", &a ,&b);
//
//	printf("두 수의 합 :%d\n", (a + b));
//	printf("두 수의 차: %d\n", (a - b));
//	printf("두 수의 곱: %d\n", (a * b));
//	printf("두 수의 나누기 : %d\n", (a / b));
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b, c = 0;
//	
//	printf("세 개의 정수를 입력하세요:");
//
//	//scanf_s("%d,%d,%d ",&a, &b, &c);
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//
//	printf("세 수의 곱은 %d입니다.", (a * b * c));
//
//	
//}
//#include <stdio.h>
//void main(void)
//{
//	int a, b, c = 0;
//	
//	printf("세 개의 정수를 입력하세요:");
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
//	printf("세 개의 정수를 입력하세요:");
//
//	scanf_s("%d %d %d", &a, &b, &c);
//	/*scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);*/
//
//	printf("합 : % d", (a + b +c));
//	printf("평균 : %d", (a + b + c) / 3);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하세요: ");
//	scanf_s("%d", &a);
//	if (a > 5)
//	{
//		printf("입력받은 값은 5보다 큽니다.\n");
//	}
//	//if (a < 5)
//	//	//else
//	//{
//	//	printf("입력받은 값은 5보다 작습니다.\n");
//	//}
//	else
//	{
//		printf("입력받은 값은 5보다 크지 않습니다.\n");
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
//	printf("a,b,c값을 입력하세요\n");
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
//	printf("정수를 입력하세요:");
//	scanf_s("%d", &a);
//	if (a > 5)
//	{
//		printf("입력값은 5보다 큽니다.\n");
//	}
//	else if (a < 5)
//	{
//		printf("입력값은 5보다 작습니다.\n");
//	}
//	else
//	{
//		printf("입력값은 5입니다.");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("점수를 입력하세요:");
//	scanf_s("%d", &a);
//
//	if (a>=60 && a<=100  )
//	{
//		printf("합격입니다.");
//		if (a >= 90)
//		{
//			printf("장학대상입니다.");
//		}
//	}
//	
//	else if ( a < 60 )
//	{
//		printf("불합격입니다.");
//	}
//	
//	else
//	{
//		printf("유효하지 않은 값입니다.");
//	}
//}
//#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("나이를 입력하세요");
//	scanf_s("%d", &a);
//
//	if (a < 13 && a >= 0)
//	{
//		printf("어린이입니다");
//	}
//	else if (a >= 13 && a <= 19)
//	{
//		printf("청소년입니다.");
//
//	}
//	else if (a >= 20 && a <= 150)
//	{
//		printf("성인입니다.");
//	}
//	else
//	{
//		printf("나이를 잘못입력하셨습니다.");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char a;
//	char y = 0;
//	char n = 0;
//	printf("포맷을 하시겠습니까? 예(y)/아니오(n)");
//	scanf_s("%c", &a, 1);
//
//	if (a =='y')
//	{
//		printf("네, 드라이브를 포멧하겠습니다.");
//	}
//	else if (a =='n')
//	{
//		printf("아니오, 드라이브를 포멧하지 않겠습니다.");
//	}
//	else
//	{
//		printf("문자를 잘못입력하였습니다.");
//	}
//	return 0;
//}
