#include<iostream>

using namespace std;

class String
{
public:
	String(char ch, int nSize);
	~String();
private:
	int nLength;
	char* pBuffer;
};

String::String(char ch, int nSize)
{
	nLength = nSize;
	pBuffer = new char[nLength + 1];
	memset(pBuffer, ch, nLength);
	pBuffer[nLength] = '\0';
	cout << "pBuffer : " << pBuffer << endl;
	cout << "nLength : " << nLength << endl;
}
String::~String()
{
	delete[] pBuffer;
}
void main()
{
	String str1('A', 3);
	String str2('B', 5);
	
	str2 = str1;
}