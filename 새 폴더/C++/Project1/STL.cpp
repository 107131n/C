//#include<iostream>
//#include <vector>
//using namespace std;
//
//void main()
//{
//	int i, num;
//	vector <int> vec1(5);
//	//그 이상을 사용할 수도 있다. 
//	//알아서 늘어난다. 내부적으로 자동화 되어있음.
//	cout << "배열의 크기 입력 : ";
//	cin >> num;
//	vector<int> arr;
//
//	//sizeof(arr)//sizeof(int)
//	for (int i = 0; i < num; i++)
//	{
//		//arr[i] = i + 1; //구조 확인을 위해 단순히 배열의 형태로 넣어줌 
//		arr.push_back(i + 1);
//	}
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << "arr[" << i << "]=" << arr[i] << endl;
//	}
//}

//// deque 예제
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
//리스트 예제
//#include<iostream>
//#include <list>
//using namespace std;
//
//void main()
//{
//	list<int>lst;
//	//리스트라는 자료구조 선언 템플릿구조로 되어있음
//	
//	for (int i = 0; i < 5; i++)
//		lst.push_back(i+1);
//	int i = 0;
//	list<int>::iterator it;
//	//리스트
//	for (it = lst.begin(); it != lst.end(); it++, i++)
//		cout << i+1 << "번째= " << *it << endl;
//}

//set 예제

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
	person["구현준"] = 21;
	person["김성혁"] = 20;
	person["김형균"] = 24;
	person["최성현"] = 22;

}
