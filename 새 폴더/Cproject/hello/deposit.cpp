//#include<iostream>
//using namespace std;
//
//class Deposit
//{
//public:
//	Deposit() {
//		nCount++;
//		cout << "��ü ���� �ܿ� ���� : " << nCount << endl;
//	}
//	~Deposit() {
//		nCount--;
//		cout << "��ü �Ҹ� �ܿ� ���� : " << nCount << endl;
//	}
//	Deposit(char* name, double balance) {
//		strName = name;
//		dBalance = balance;
//	}
//	void BankBalance() {
//		dBalance = dBalance + (dBalance * dInterestRate);//�ɹ��Լ� ���� �ܾ׿��ٰ� ���ڸ� ���� �ݾ�
//	}
//	//set�Լ��� ���ο� ���� private ����ƽ ������ ���ٰ����ϰ� �ɹ��Լ��� �������
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
//	Deposit custom1;  // �λ���� ��1,2
//	Deposit custom2;
//	Deposit custom3;
//	Deposit custom4;
//	custom1.BankBalance();
//
//	//custom1.dInterestRate = 0.03;
//	//���߸��� ǥ���̴�. static������ �����Ҷ� Ŭ�����̸�::����ƽ�����̸� = �����Ұ�; 
//	//�̷������� �����ؾ� �Ѵ�.
//	//cout << "����� ������ :" << Deposit::GetInterestRate() << endl;
//	//Deposit::SetInterestRate(0.03);
//	//cout << "����� ������ :" << Deposit::GetInterestRate() << endl;
//}

#include <iostream>
using namespace std;
void main()
{
	int* pBuffer;
	int nLength;
	cout << "�� ������ �Ҵ��� �޸� ��:";
	cin >> nLength;

	pBuffer = new int[nLength];

	for (int i = 0; i < nLength; i++)
		pBuffer[i] = i + 1;
	for (int i = 0; i < nLength; i++)
		cout << pBuffer[i] << "";
	cout << endl;
	delete[] pBuffer;

}