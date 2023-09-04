//#include <iostream>
//using namespace std;
//
//class Phone
//{
//private:
//	int num;
//	int shape;
//	const char* msg;
//public:
//	Phone() {}
//	Phone(const char* msg)
//	{
//		this->msg = msg;
//	}
//
//	void Send(int a);
//	int Receive() const { return this->msg; }
//	void Call() {}
//	void  Send(const char* msg)
//		this->msg = msg;
//}
//Phone::Phone()
//{
//	cout << "디폴트 생성자 호출" << endl;
//}
//Phone::~Phone()
//{
//	cout << "디폴트 소멸자 호출" << endl;
//}
//void Phone::Send(int a)
//{
//	msg = a;
//}
//int Phone::Receive()
//{
//	return msg;
//}
//void Phone::Call()
//{
//}
//int main()
//{
//	Phone ph;
//	Phone* pObj;
//	pObj = &ph;
//	pObj->Send("분리수거를 잘하자");
//	
//	std::
//}

//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int nLength;
//	int* pBuffer;
//
//	cin >> nLength;
//	pBuffer = new int[nLength];
//
//	for (int i=0; i < nLength; i++)
//	{
//		pBuffer[i] = 1+i;
//	}
//
//	for (int i = 0; i < nLength; i++)
//	{
//		cout << pBuffer[i] << endl;
//	}
//	
//	delete[] pBuffer;
//}
//#include <iostream>
//using namespace std;
//class MousePoint {
//private:
//
//	int x, y;
//
//public:
//
//	MousePoint();
//	MousePoint(int nX, int nY);
//	int GetX() { return x; };
//	int GetY() { return y; };
//	void SetXY(int x, int y);
//
//};
//MousePoint::MousePoint(int nX, int nY) {
//	x = nX;
//	y = nY;
//}
//
//int main()
//{
//	MousePoint* ppt;
//	ppt = new MousePoint(100, 200);
//		cout << ppt->GetX() << endl;
//		cout << ppt->GetY() << endl;
//	
//}

#include<iostream>
using namespace std;
class Shape
{
public:
	Shape() {}
	~Shape() {}
	Shape(int nX, int nY);
	virtual void Draw() = 0;
	
protected:
	int x, y;
};
class Rectangle : public Shape
{
public:
	Rectangle() {}
	~Rectangle() {}
	Rectangle(int nX, int nY, int nWidth ,int nHeight);
	void Draw()
	{
		cout << x << "," << y << "," << width << "," << height << endl;
	}
private:
	int width, height;
};
Rectangle::Rectangle(int nX, int nY, int nWidth, int nHeight)
{
	x = nX;
	y = nY;
	width = nWidth;
	height = nHeight;
}
class Circle :public Shape
{
public:
	Circle() {}
	~Circle() {}
	Circle(int nX, int nY,int nR);
	void Draw()
	{
		cout << x << "," << y << "," << r << endl;
	}
private:
	int r;
};
Circle::Circle(int nX, int nY, int nR)
{
	x = nX;
	y = nY;
	r = nR;
}
class Square : public Rectangle
{
public:
	Square() {}
	~Square() {}
	Square(int nX, int nY, int nLength);
	void Draw()
	{
		cout << x << "," << y << "," << length << endl;
	}
private:
	int length;
};
Square::Square(int nX, int nY, int nLength)
{
	x = nX;
	y = nY;
	length = nLength;
	
}
Shape::Shape(int nX, int nY)
{
	this->x = nX;
	this->y = nY;
};

void main()

{
	Rectangle* pRect = new Rectangle(10, 20, 500, 600);
	//pRect->Draw();
	Circle* pCircle = new Circle(10, 20, 5);
	//pCircle->Draw();
	Square* pSquare = new Square(10, 20, 20);

	Shape* pSp = (Shape*)pRect;
	pSp->Draw();
	Shape* pSp2 = (Shape*)pCircle;
	pSp2->Draw();
	Shape* pSp3 = (Shape*)pSquare;
	pSp3->Draw();
	
}


