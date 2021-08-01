#include<iostream>
#include<cmath>
using namespace std;
const double pi = 3.14;
class Shape
{
public:
	virtual void getArea() const{};
	virtual void getLen() const{};
};

class Rectangle:public Shape
{
public:
	Rectangle(double l, double w) { length = l; width = w; }
	void set() { 
		cout << "���볤��" << endl;
		cin >> length >> width;
	};
	virtual void getArea() ;
	virtual void getLen() ;
private:
	Shape s;
	double length;
	double width;
};
void Rectangle::getArea()
{
	cout << "���:" << length * width << endl; 
}
void Rectangle::getLen()
{
	cout << "�ܳ�:" << (length + width)*2 << endl;
}

class Circle :public Shape
{
public:
	Circle(double r) { R = r; }
	void set() {
		cout << "����뾶��" << endl;
		cin >> R;
	};
	virtual void getArea();
	virtual void getLen();
private:
	Shape s;
	double R;
};
void Circle::getArea()
{
	cout << "���:" << pi * R * R << endl;
}
void Circle::getLen()
{
	cout << "�ܳ�:" << R * pi * 2 << endl;
}

int main()
{
	Rectangle r(0,0);
	Circle c(0);
	r.set();
	r.getArea();
	r.getLen();
	c.set();
	c.getArea();
	c.getLen();
	return 0;
}