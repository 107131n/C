//#include<iostream>
//#include <vector>
//using namespace std;
//
//void main()
//{
//	int i, num;
//	vector <int> vec1(5);
//	//�� �̻��� ����� ���� �ִ�. 
//	//�˾Ƽ� �þ��. ���������� �ڵ�ȭ �Ǿ�����.
//	cout << "�迭�� ũ�� �Է� : ";
//	cin >> num;
//	vector<int> arr;
//
//	//sizeof(arr)//sizeof(int)
//	for (int i = 0; i < num; i++)
//	{
//		//arr[i] = i + 1; //���� Ȯ���� ���� �ܼ��� �迭�� ���·� �־��� 
//		arr.push_back(i + 1);
//	}
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << "arr[" << i << "]=" << arr[i] << endl;
//	}
//}

//// deque ����
//#include<iostream>
//#include<deque>
//using namespace std;
//
//void main()
//{
//	deque<int>num;
//	num.push_back(5);
//	num.push_back(6);
//	num.push_front(2);
//	num.push_front(1);
//
//	for (int i = 0; i < num.size(); i++)
//	{
//		cout << num[i] << "";
//	}
//	cout << endl;
//}
//����Ʈ ����
//#include<iostream>
//#include <list>
//using namespace std;
//
//void main()
//{
//	list<int>lst;
//	//����Ʈ��� �ڷᱸ�� ���� ���ø������� �Ǿ�����
//	
//	for (int i = 0; i < 5; i++)
//		lst.push_back(i+1);
//	int i = 0;
//	list<int>::iterator it;
//	//����Ʈ
//	for (it = lst.begin(); it != lst.end(); it++, i++)
//		cout << i+1 << "��°= " << *it << endl;
//}

//set ����

#include<iostream>
#include<set>
#include<map>
using namespace std;
void main() {
	//int arr[] = { 1,2,3,2,5,6,3 };
	//set<int> scon;
	//set<int>::iterator it;

	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	//{
	//	scon.insert(arr[i]);
	//}
	//for (it = scon.begin(); it != scon.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
	//#2
	/*const char* strtemp = "abcdeffghij";
	set<char> scon(&strtemp[0], &strtemp[10]);
	set<char>::iterator it;

	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;*/
//map
	map<string, int> person;
	person["������"] = 21;
	person["�輺��"] = 20;
	person["������"] = 24;
	person["�ּ���"] = 22;

}
