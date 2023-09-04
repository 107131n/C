//
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int a = 0;
//
//	printf("조회할 구구단을 입력하세요:");
//	scanf_s("%d", &a);
//
//	while (i < 10);
//	{
//		printf("a * %d = %d\n", i, (a * i));
//		i++;
//	}
//	return 0;
//}
//class Deposit
//{
//public:
//	Deposit() {
//	}
//	Deposit(char* name, double balance) {
//		strName = name;
//		dBalance = balance;
//	}
//	void BackBalance() {
//		dBalance = dBalance + (dBalance * dInterestRate);//맴버함수 현재 잔액에다가 이자를 더한 금액
//	}
//private:
//public:
//	char* strName;
//	double dBalance;
//	static double dInterestRate;
//};
//
//double Deposit::dInterestRate = 0.05;
//
//void main()
//
//{
//	Deposit custom1;  // 두사람이 고객1,2
//	Deposit custom2;
//
//	//custom1.dInterestRate = 0.03;
//	//ㄴ잘못된 표현이다. static변수는 접근할때 클래스이름::스태틱변수이름 = 변경할값; 
//	//이런식으로 적용해야 한다.
//	Deposit::dInterestRate = 0.03;
//
//}
//
