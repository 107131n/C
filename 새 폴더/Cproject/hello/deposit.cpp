//#include<iostream>
//using namespace std;
//
//class Deposit
//{
//public:
//	Deposit() {
//		nCount++;
//		cout << "객체 생성 잔여 개수 : " << nCount << endl;
//	}
//	~Deposit() {
//		nCount--;
//		cout << "객체 소멸 잔여 개수 : " << nCount << endl;
//	}
//	Deposit(char* name, double balance) {
//		strName = name;
//		dBalance = balance;
//	}
//	void BankBalance() {
//		dBalance = dBalance + (dBalance * dInterestRate);//맴버함수 현재 잔액에다가 이자를 더한 금액
//	}
//	//set함수를 내부에 만들어서 private 스테틱 변수에 접근가능하게 맴버함수를 만들어줌
//	static void SetInterestRate(double dNewRate)
//	{
//		dInterestRate = dNewRate;
//	}
//	static double GetInterestRate()
//	{
//		return dInterestRate;
//	}
//private:
//	char* strName;
//	double dBalance;
//	static double dInterestRate;
//	static int nCount;
//};
//
//double Deposit::dInterestRate = 0.05;
//int Deposit::nCount = 0;
//
//void main()
//
//{
//	Deposit custom1;  // 두사람이 고객1,2
//	Deposit custom2;
//	Deposit custom3;
//	Deposit custom4;
//	custom1.BankBalance();
//
//	//custom1.dInterestRate = 0.03;
//	//ㄴ잘못된 표현이다. static변수는 접근할때 클래스이름::스태틱변수이름 = 변경할값; 
//	//이런식으로 적용해야 한다.
//	//cout << "변경된 이자율 :" << Deposit::GetInterestRate() << endl;
//	//Deposit::SetInterestRate(0.03);
//	//cout << "변경된 이자율 :" << Deposit::GetInterestRate() << endl;
//}

#include <iostream>
using namespace std;
void main()
{
	int* pBuffer;
	int nLength;
	cout << "힙 영역에 할당할 메모리 수:";
	cin >> nLength;

	pBuffer = new int[nLength];

	for (int i = 0; i < nLength; i++)
		pBuffer[i] = i + 1;
	for (int i = 0; i < nLength; i++)
		cout << pBuffer[i] << "";
	cout << endl;
	delete[] pBuffer;

}