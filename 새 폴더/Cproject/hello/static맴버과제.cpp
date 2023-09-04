#include <iostream>
using namespace std;

class Deposit
{
	Deposit() {
		nCount++;
		cout << "按眉 积己 俺荐 :" << nCount << endl;
	}
	~Deposit() {
		nCount--;
		cout << "按眉 家戈 俺荐 :" << nCount << endl;
	}
};