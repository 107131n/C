//Employee : 이름, 주소

#include <iostream>
using namespace std;

class Employee
{
public:
	Employee();
	~Employee();
	Employee(const char* pName, const char* pAddr);
	void Display();
	double PayCheck() const {
		return 0.0;
	}
protected:
	char* strName;
	char* strAddr;
};


Employee::Employee()
{
	strName = NULL;
	strAddr = NULL;
	cout << "Employee 디폴트 생성자" << endl;
}

Employee::Employee(const char* pName, const char* pAddr)
{
	strName = new char[strlen(pName) + 1];//넘겨받은 메모리를 strName에 동적메모리로 할당 널값도 포함
	strAddr = new char[strlen(pAddr) + 1];
	strcpy_s(strName, strlen(pName) + 1, pName);//문자열 카피//안정적으로 사용하라고 중간에 길이까지 넣었다
	strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
	//상수화 된 포인터를 새로운 변수에 메모리를 넘겨받고 문자열을 카피하여 출력
	cout << " Employee 전달인자가 2개인 생성자" << endl;
}

Employee::~Employee()
{
	delete[] strName;
	delete[] strAddr;

	cout << "Employee 소멸자" << endl;
}

void Employee::Display()
{
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
}
//
class Regular : public Employee
{
public:
	Regular() {};
	Regular(const char* pName, const char* pAddr, double dSalary);
	~Regular() { cout << "Regular 소멸자 호출" << endl; };
	double PayCheck() const;//리턴만 해주는 함수  const붙여주면 된다.
private:
	double salary;//급여의 차이니까 급여의 멤버만 가지고 있으면 된다.
};

Regular::Regular(const char* pName, const char* pAddr, double dSalary)
{
	cout << "Regular 생성자" << endl;
	strName = new char[strlen(pName) + 1];
	strAddr = new char[strlen(pAddr) + 1];
	strcpy_s(strName, strlen(pName) + 1, pName);
	strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
	salary = dSalary;
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
	//cout << "급여 : " << salary << endl;
}

double Regular::PayCheck() const
{
	return salary;
}
//
class Temporary : public Employee
{
public:
	Temporary() {};
	Temporary(const char* pName, const char* pAddr, double dDdailyPayCheck, int nDays);
	~Temporary() { cout << "Temporary 소멸자 호출" << endl; };
	double PayCheck() const;
private:
	double dailyPayCheck;
	int days;
};

Temporary::Temporary(const char* pName, const char* pAddr, double dDdailyPayCheck, int nDays)
{
	cout << "Temporary 생성자" << endl;
	/*strName = new char[strlen(pName) + 1];
	strAddr = new char[strlen(pAddr) + 1];
	strcpy_s(strName, strlen(pName) + 1, pName);
	strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
	dailyPayCheck = dDdailyPayCheck;
	days = nDays;*/
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
	//cout << "급여 : " << dailyPayCheck * days << endl;
}

double Temporary::PayCheck() const
{
	return dailyPayCheck * days;
}

class SalesMan :public Regular
{
public:
	SalesMan();
	~SalesMan();
	SalesMan(char* pNname, char* pAddr, double dSalary, double dallowance);
	double PayCheck() const;

private:
	double allowance;
};
SalesMan::SalesMan()
{
	cout << "SalesMan 디폴트 생성자" << endl;
}
SalesMan::~SalesMan()
{
	cout << "SalesMan 소멸자" << endl;
}
SalesMan::SalesMan(char* pName, char* pAddr, double dSalary, double dallowance) :Regular(pName, pAddr, dSalary)

{
	allowance = dallowance;
	cout << "SalesMan 전달인자 4개인 생성자 " << endl;
}
double SalesMan::PayCheck() const
{
	return Regular::PayCheck() + allowance;
}


class Department {

public:
	Department() {
		count = 0;
	}
	~Department() {
	}
	void AddEmployee(Employee& emp)
	{
		employee[count] = &emp;
		count++;
	}
	void Display() const
	{
		for (int i = 0; i < count; i++)
		{
			cout << employee[i]->PayCheck() << endl;
		}
	}

private:
	int count;
	Employee* employee[10];

};


void main()
{
	Employee emp("김범준", "양천구");
	emp.Display();

	Regular rgl("이주성", "분당구 수내동", 300);
	cout << "급여 : " << rgl.PayCheck() << endl;

	Temporary tmp("조경화", "장안구 조원동", 10, 20);
	cout << "급여 : " << tmp.PayCheck() << endl;

	SalesMan slm("홍길동", "영통구", 100, 50);
	cout << "급여:" << slm.PayCheck() << endl;

	Employee* employee = (Employee*)&slm;
	cout << employee->PayCheck() << endl;
}

