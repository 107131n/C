#include<iostream>
using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	void SetXY(int nX, int nY);
	MousePoint(); // 디폴트 생성자
	MousePoint(int nX, int nY);
	~MousePoint();
	int GetX() { return x; }
	int GetY() { return y; }
};
void MousePoint::SetXY(int nX, int nY)
{
	x = nX;
	y = nY;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
}
MousePoint::MousePoint()// 디폴트생성자
{
	x = 10;
	y = 20;
	cout << "생성자 호출~!!" << endl;
}
MousePoint::~MousePoint()//소멸자
{
	cout << "소멸자 호출~!!" << endl;
}
MousePoint::MousePoint(int nX, int nY)
{
	x = nX;
	y = nY;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
}
//
//void main()
//{
//   MousePoint point;
//   point.SetXY(10, 20);
//}
//
//#include <iostream>
//using namespace std;


//class MousePoint
//{
//   int x;
//   int y;
//};
//void main()
//{
//   MousePoint pt[3] = { MousePoint(10,20),MousePoint(30,40),MousePoint(50,60) };
//   //pt[0].x =10, pt[0].y = 20, pt[1].x =30, pt...
//
//   for (int i = 0; i < 3; i++)
//   {
//      cout << pt[i].GetX() << endl;
//      cout << pt[i].GetY() << endl << endl;
//   }
//}

void main()
{
	//MousePoint* pt1, *pt2, *pt3;
	MousePoint* pt[3];
	
	pt[0] = new MousePoint(10, 20);
	pt[1] = new MousePoint(100, 200);
	pt[2]= new MousePoint(1000, 2000);

	MousePoint* mp = new MousePoint[3];
	

	for (int i = 0; i < 3; i++)
	{
		cout << "X좌표: " << pt[i]->GetX() << endl;
		cout << "y좌표: " << pt[i]->GetY() << endl;
		
	}
	for (int i = 0; i < 3; i++)
	{
		delete pt[i];
	}
	delete[] mp;
}


