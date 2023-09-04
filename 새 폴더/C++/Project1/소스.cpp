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
    virtual double PayCheck() const = 0;//존재는 하지만 실제로 구동하지 않게 virtual예약어를 붙여서 가상함수로 만들어준다. 
    // = 0;을 붙여주면 정의하지 않는다고 컴파일러가 판단 이를 순수 가상함수라고 한다. 
protected:
    char* strName;
    char* strAddr;
};


Employee::Employee()
{
    strName = NULL;
    strAddr = NULL;
    //cout << "Employee 디폴트 생성자" << endl;
}

Employee::Employee(const char* pName, const char* pAddr)
{
    strName = new char[strlen(pName) + 1];//넘겨받은 메모리를 strName에 동적메모리로 할당 널값도 포함
    strAddr = new char[strlen(pAddr) + 1];
    strcpy_s(strName, strlen(pName) + 1, pName);//문자열 카피//안정적으로 사용하라고 중간에 길이까지 넣었다
    strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    //상수화 된 포인터를 새로운 변수에 메모리를 넘겨받고 문자열을 카피하여 출력
    //cout << "전달인자가 2개인 생성자" << endl;
}

Employee::~Employee()
{
    delete[] strName;
    delete[] strAddr;

    //cout << "Employee 소멸자" << endl;
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

Regular::Regular(const char* pName, const char* pAddr, double dSalary) :Employee(pName, pAddr)
{
    //cout << "Regular 생성자" << endl;
    //strName = new char[strlen(pName) + 1];
    //strAddr = new char[strlen(pAddr) + 1];
    //strcpy_s(strName, strlen(pName) + 1, pName);
    //strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    salary = dSalary;
    //cout << "이름 : " << strName << endl;
    //cout << "주소 : " << strAddr << endl;
    //cout << "급여 : " << salary << endl;
}

double Regular::PayCheck() const
{
    return salary;//부모 클래스 Employee의 PayCheck()를 재정의 하겠다 즉 오버라이딩 하겠다
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

Temporary::Temporary(const char* pName, const char* pAddr, double dDdailyPayCheck, int nDays) :Employee(pName, pAddr)
{
    //cout << "Temporary 생성자" << endl;
    //strName = new char[strlen(pName) + 1];
    //strAddr = new char[strlen(pAddr) + 1];
    //strcpy_s(strName, strlen(pName) + 1, pName);
    //strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    dailyPayCheck = dDdailyPayCheck;
    days = nDays;
    //cout << "이름 : " << strName << endl;
    //cout << "주소 : " << strAddr << endl;
    //cout << "급여 : " << dailyPayCheck * days << endl;
}

double Temporary::PayCheck() const
{
    return dailyPayCheck * days;//여기도 오버라이딩 해줬다.
}
//
class SalesMan : public Regular
{
public:
    SalesMan();
    ~SalesMan();
    SalesMan(const char* pName, const char* pAddr, double dSalary, double dallowance);
    double PayCheck() const;
private:
    double allowance;
};

SalesMan::SalesMan()
{
    //cout << "SalesMan 디폴트 생성자" << endl;
}
SalesMan::~SalesMan()
{
    //cout << "SalesMan 소멸자" << endl;
}
SalesMan::SalesMan(const char* pName, const char* pAddr, double dSalary, double dallowance) :Regular(pName, pAddr, dSalary)
{
    allowance = dallowance;
    //cout << "SalesMan 전달인자 4개인 생성자" << endl;
}
double SalesMan::PayCheck() const
{
    return Regular::PayCheck() + allowance;
}

class Department
{
public:
    Department() { count = 0; }
    ~Department() {}
    void AddEmployee(Employee& emp)
    {
        employee[count] = &emp;
        count++;
    }
    void DepartDisplay() const
    {
        for (int i = 0; i < count; i++)
        {
            employee[i]->Display();
            cout << "급여 :" << employee[i]->PayCheck() << endl;
        }
    }

private:
    int count;
    Employee* employee[10];
};

void main()
{
    //Employee emp("박경준","동안구");
    //emp.Display();

    Regular rgl("이주성", "분당구", 300);
    //cout << "급여 : " << rgl.PayCheck() << endl;

    Temporary tmp("조경화", "장안구", 10, 20);
    //cout << "급여 : " << tmp.PayCheck() << endl;

    SalesMan slm("홍길동", "영통구", 100, 50);
    //cout << "급여 : " << slm.PayCheck() << endl;

    //int a = (int)3.14;//강제로 타입캐스팅을 하는 문법
    //Employee* employee = (Employee*)&slm; // 부모자식간에는 자식의 객체 즉 주소값을 부모의 포인터로 넘겨줄 수 있다. 타입캐스팅을 해줘야된다.
    //cout << employee->PayCheck() << endl;//Regular의 주소값을 넘겨줬는데도 Employee의 PayCheck를 불러옴 
    //기본적인 클래스의 원리에서 클래스는 해당 타입을 기준으로 해서 호출을 한다. 그래서 Regular의 PayCheck를 불러오기 위해선 가상함수를 사용해야 한다. 

    Department dept;
    dept.AddEmployee(rgl);
    dept.AddEmployee(tmp);
    dept.AddEmployee(slm);
    dept.DepartDisplay();
}