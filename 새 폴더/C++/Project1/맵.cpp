#include<iostream>
#include<map>
#include<string>


using namespace std;

struct Phone
{
	string name;
	long phone;
}arPerson[] = {
	{"������",1111},
	{"�輺��",2222},
	{"������",3333},
	{"�ּ���",4444}
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
		cout << "�̸��Է� : ";
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "�׷� ��� �����ϴ�." << endl;
		}
		else
		{
			cout << name << "��ȭ��ȣ�� " << it->second << "�Դϴ�" << endl;
		}
	}
}