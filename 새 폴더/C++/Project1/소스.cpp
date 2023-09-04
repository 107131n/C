//Employee : �̸�, �ּ�

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee();
    ~Employee();
    Employee(const char* pName, const char* pAddr);
    void Display();
    virtual double PayCheck() const = 0;//����� ������ ������ �������� �ʰ� virtual���� �ٿ��� �����Լ��� ������ش�. 
    // = 0;�� �ٿ��ָ� �������� �ʴ´ٰ� �����Ϸ��� �Ǵ� �̸� ���� �����Լ���� �Ѵ�. 
protected:
    char* strName;
    char* strAddr;
};


Employee::Employee()
{
    strName = NULL;
    strAddr = NULL;
    //cout << "Employee ����Ʈ ������" << endl;
}

Employee::Employee(const char* pName, const char* pAddr)
{
    strName = new char[strlen(pName) + 1];//�Ѱܹ��� �޸𸮸� strName�� �����޸𸮷� �Ҵ� �ΰ��� ����
    strAddr = new char[strlen(pAddr) + 1];
    strcpy_s(strName, strlen(pName) + 1, pName);//���ڿ� ī��//���������� ����϶�� �߰��� ���̱��� �־���
    strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    //���ȭ �� �����͸� ���ο� ������ �޸𸮸� �Ѱܹް� ���ڿ��� ī���Ͽ� ���
    //cout << "�������ڰ� 2���� ������" << endl;
}

Employee::~Employee()
{
    delete[] strName;
    delete[] strAddr;

    //cout << "Employee �Ҹ���" << endl;
}

void Employee::Display()
{
    cout << "�̸� : " << strName << endl;
    cout << "�ּ� : " << strAddr << endl;
}
//
class Regular : public Employee
{
public:
    Regular() {};
    Regular(const char* pName, const char* pAddr, double dSalary);
    ~Regular() { cout << "Regular �Ҹ��� ȣ��" << endl; };
    double PayCheck() const;//���ϸ� ���ִ� �Լ�  const�ٿ��ָ� �ȴ�.
private:
    double salary;//�޿��� ���̴ϱ� �޿��� ����� ������ ������ �ȴ�.
};

Regular::Regular(const char* pName, const char* pAddr, double dSalary) :Employee(pName, pAddr)
{
    //cout << "Regular ������" << endl;
    //strName = new char[strlen(pName) + 1];
    //strAddr = new char[strlen(pAddr) + 1];
    //strcpy_s(strName, strlen(pName) + 1, pName);
    //strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    salary = dSalary;
    //cout << "�̸� : " << strName << endl;
    //cout << "�ּ� : " << strAddr << endl;
    //cout << "�޿� : " << salary << endl;
}

double Regular::PayCheck() const
{
    return salary;//�θ� Ŭ���� Employee�� PayCheck()�� ������ �ϰڴ� �� �������̵� �ϰڴ�
}
//
class Temporary : public Employee
{
public:
    Temporary() {};
    Temporary(const char* pName, const char* pAddr, double dDdailyPayCheck, int nDays);
    ~Temporary() { cout << "Temporary �Ҹ��� ȣ��" << endl; };
    double PayCheck() const;
private:
    double dailyPayCheck;
    int days;
};

Temporary::Temporary(const char* pName, const char* pAddr, double dDdailyPayCheck, int nDays) :Employee(pName, pAddr)
{
    //cout << "Temporary ������" << endl;
    //strName = new char[strlen(pName) + 1];
    //strAddr = new char[strlen(pAddr) + 1];
    //strcpy_s(strName, strlen(pName) + 1, pName);
    //strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
    dailyPayCheck = dDdailyPayCheck;
    days = nDays;
    //cout << "�̸� : " << strName << endl;
    //cout << "�ּ� : " << strAddr << endl;
    //cout << "�޿� : " << dailyPayCheck * days << endl;
}

double Temporary::PayCheck() const
{
    return dailyPayCheck * days;//���⵵ �������̵� �����.
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
    //cout << "SalesMan ����Ʈ ������" << endl;
}
SalesMan::~SalesMan()
{
    //cout << "SalesMan �Ҹ���" << endl;
}
SalesMan::SalesMan(const char* pName, const char* pAddr, double dSalary, double dallowance) :Regular(pName, pAddr, dSalary)
{
    allowance = dallowance;
    //cout << "SalesMan �������� 4���� ������" << endl;
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
            cout << "�޿� :" << employee[i]->PayCheck() << endl;
        }
    }

private:
    int count;
    Employee* employee[10];
};

void main()
{
    //Employee emp("�ڰ���","���ȱ�");
    //emp.Display();

    Regular rgl("���ּ�", "�д籸", 300);
    //cout << "�޿� : " << rgl.PayCheck() << endl;

    Temporary tmp("����ȭ", "��ȱ�", 10, 20);
    //cout << "�޿� : " << tmp.PayCheck() << endl;

    SalesMan slm("ȫ�浿", "���뱸", 100, 50);
    //cout << "�޿� : " << slm.PayCheck() << endl;

    //int a = (int)3.14;//������ Ÿ��ĳ������ �ϴ� ����
    //Employee* employee = (Employee*)&slm; // �θ��ڽİ����� �ڽ��� ��ü �� �ּҰ��� �θ��� �����ͷ� �Ѱ��� �� �ִ�. Ÿ��ĳ������ ����ߵȴ�.
    //cout << employee->PayCheck() << endl;//Regular�� �ּҰ��� �Ѱ���µ��� Employee�� PayCheck�� �ҷ��� 
    //�⺻���� Ŭ������ �������� Ŭ������ �ش� Ÿ���� �������� �ؼ� ȣ���� �Ѵ�. �׷��� Regular�� PayCheck�� �ҷ����� ���ؼ� �����Լ��� ����ؾ� �Ѵ�. 

    Department dept;
    dept.AddEmployee(rgl);
    dept.AddEmployee(tmp);
    dept.AddEmployee(slm);
    dept.DepartDisplay();
}