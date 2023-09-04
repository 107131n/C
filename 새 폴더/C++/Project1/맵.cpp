#include<iostream>
#include<map>
#include<string>


using namespace std;

struct Phone
{
	string name;
	long phone;
}arPerson[] = {
	{"구현준",1111},
	{"김성혁",2222},
	{"김형균",3333},
	{"최성현",4444}
};
void main()
{
	map<string, int>person;
	map<string, int>::iterator it;

	string name;
	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].phone;
	}
	for (;;)
	{
		cout << "이름입력 : ";
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "그런 사람 없습니다." << endl;
		}
		else
		{
			cout << name << "전화번호는 " << it->second << "입니다" << endl;
		}
	}
}