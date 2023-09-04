//#include<stdio.h>
/*
//1-1
//변수
int main()
{	
	int value;// 4바이트의 value라는 변수를 메모리에 할당함
	value = 100;// value 라는 변수의 값은 100이다.
	//변수를 초기화하지 않고 할당만 해주는 것은 위험하다.(쓰레기값이 존재하기 때문)
	
	int num = 5;
	// 4바이트의 num 이라는 변수를 메모리에 할당함과 동시에 변수값을 5로 지정
	printf ("%d %d \n" , value,num);
	return 0; 

}
*/

//1-2
// 데이터 출력
// 메인함수를 여러개를 빌드할 수 없기때문에 
// 필요 메인함수외의 파일들은 빌드에서 제외한다.
//int main()
//{
//
//	int value= 100;
//	char ch = 'C';
//	printf("출력결과 : 정수 %d, 문자 %c \n", value, ch);
//	return 0;
//
//
//}

//int main() 
//{
//
//	int age = 26;
//	char grade = 'A';
//
//	
//	printf("이름: 김범준\n");
//	printf("나이 : %d\n", age);
//	printf("성적 : %c\n", grade);
//
//}

//넓이 구하기
//int main(void) 
//{
//	int width = 10;
//	int height = 20;
//	printf("사각형의 넓이는 %d다.\n", width * height);
//
//
//}

//int main(void)
//{
//	double area;
//	double radius = 5;
//	area = radius * radius * 3.141592;
//	printf("원의 넓이는 %f 이다.\n", area);
//	return 0;
//}

//int main()
//{
//	char ch1 = 'A';
//	char ch2 = 'b';
//	char ch3 = '1';
//	
//	printf( "ch1 : %c\n", ch1);
//	printf("ch2 : %c\n", ch2);
//	printf("ch3 : %c\n", ch3);
//
//	printf("ch1 : %d \n", ch1);
//	printf("ch2 : %d \n", ch2);
//	printf("ch3 : %d \n", ch3);
//}
//상수란 무엇인가

//1-4 데이터 직접입력하기 scanf_s
//int main()
//{
//	int input = 0;
//	printf("input값을 입력하세요..");
//	
//	scanf_s("%d", &input);
//
//	printf("input x 5 =%d", input * 5);
//
//}

//int main(void)
//{
//	int input1 = 0;
//	int input2 = 0;
//	int total = 0;
//	printf("첫 번째 정수를 입력하세요:");
//	scanf_s("%d, &input1");
//	printf("두 번째 정수를 입력하세요:");
//	scanf_s("%d, &input2");
//	total = input1 + input2;
//	printf("두 수의 합은 %d 이다.\n", total);
//	return 0;
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	int input3 = 0;
//	int total;
//	int avg;
//	scanf_s("%d %d %d " , &input1 ,&input2 ,&input3);
//	total = input1 + input2 + input3;
//	avg = total / 3;
//	printf("합은%d", total);
//	printf("평균은%d", avg);
//}
//
//
