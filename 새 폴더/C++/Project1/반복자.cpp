#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<unordered_map>
using namespace std;
using namespace stdext;
//����Ÿ��
void main()
{
	//
	//	int arr[] = { 1,2,3,4,5 };
	//	int* pNum;
	//
	//	for (pNum = &arr[0]; pNum != &arr[5]; pNum++)
	//	{
	//		cout << *pNum << " ";
	//	}
	//	cout << endl;
	// 
	// 
	//���ڹ迭
	//char pArray[] = "programming";
	//char* pAddr = pArray;
	// 
	//while (*pAddr)
	//{
	//	cout << *pAddr << " ";
	//	pAddr++;
	//	
	//}
	//�ݺ��� ����Ͽ� ����
		/*int arr[] = { 1,2,3,4,5 };
		vector<int>vi(&arr[0], &arr[5]);
		vector<int>::iterator it;
		{
			for (it = vi.begin(); it != vi.end(); it++)
				cout << *it << " ";
		}
		cout << endl;*/

	//int num = 0;
	//cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	//cin >> num;

	//list<int> vArr;
	//list<int>::iterator it;

	//for (int i = 0; i < num; i++)
	//{
	//	//vArr[i] = i + 1;
	//	vArr.push_back(i + 1);
	//}

	//for (it = vArr.begin(); it != vArr.end(); it++)
	//{ 
	//	cout << *it << endl;
	//}
	
	/*
	int arr[] = { 10.,20,30,40,50 };
	vector<int> vec1(&arr[0], &arr[5]);
	vector<int>::iterator it;

	if (find(vec1.begin(), vec1.end(), 70) != vec1.end())
	{
		cout << "�˻�����" << endl;
	}
	else
	{
		cout << "�˻�����" << endl;
	}*/


	//int ari[] = { 49,26,19,77,34,52,84,34,92,69 };
	//vector<int> vi(&ari[0], &ari[10]);
	//vector<int>::iterator it;

	//for (it = vi.begin(); it != vi.end(); it++)
	//	cout << *it << " ";
	//cout << endl;

	//sort(vi.begin(), vi.end());
	//for (it = vi.begin(); it!= vi.end(); it++)
	//	cout << *it << " ";
	//cout << endl;
	
	vector<string> str;
	unordered_map<string, int>test1;
	unordered_map<string, vector<string>>test2;

	test1["������"] = 123;
	test1["�ּ���"] = 789;

	unordered_map<string, int>::iterator it;

	for (it = test1.begin(); it != test1.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	str.push_back("����� ������");
	str.push_back("������ �д籸");
	test2["�ּ�1"] = str;
	str.clear();
	str.push_back("������ ���뱸");
	str.push_back("������ �Ǽ���");
	test2["�ּ�2"] = str;
	unordered_map<string, vector<string>>::iterator it2;
	vector<string>::iterator vit;

	for (it2 = test2.begin(); it2 != test2.end(); it2++)
	{
		for (vit = it2->second.begin(); vit != it2->second.end(); vit++)
		{
			cout << it2->first << endl;
			cout << *vit << endl;
		}
	}

}
