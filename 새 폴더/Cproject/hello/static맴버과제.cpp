#include <iostream>
using namespace std;

class Deposit
{
	Deposit() {
		nCount++;
		cout << "��ü ���� ���� :" << nCount << endl;
	}
	~Deposit() {
		nCount--;
		cout << "��ü �Ҹ� ���� :" << nCount << endl;
	}
};