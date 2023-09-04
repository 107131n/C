#include <iostream>
using namespace std;
class String
{
public:

	String(char ch, int nSize);
	~String();
	String(const String& s);

	void operator=(const String& s);
	void SetData();

private:

	int nLength;
	char* pBuffer;

};
String::String(char ch, int nSize) {
	nLength = nSize;
	pBuffer = new char[nLength + 1];
	memset(pBuffer, ch, nLength);
	pBuffer[nLength] = '\0';

}
String::~String() {

	delete pBuffer;

}

String::String(const String& s) 
{
	this->nLength = s.nLength;
	this->pBuffer = new char[this->nLength + 1];
	strcpy_s(this->pBuffer, nLength +1 , s.pBuffer);

}

void String::operator=(const String& s)
{
	if (&s == this)
		return;
	delete pBuffer;
	this ->nLength = s.nLength;
	this -> pBuffer = new char[nLength + 1];
	strcpy_s(this -> pBuffer, nLength + 1, s.pBuffer);
}
void String::SetData() {
	cout << "pBuffer:" << this->pBuffer << endl;
	cout << "nLength:" << this->nLength << endl;
}
void main()
{
	String str1('A', 3);
	String str2(str1);
	cout << "´ëÀÔ ÈÄ str2";
	str2.SetData();
}

