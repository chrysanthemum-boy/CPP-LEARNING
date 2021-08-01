#include<iostream>
#include<cmath>
#include<iomanip>
#define  s(a,b,c) s=0.5*(a+b+c)
#define  area(s,a,b,c) area=s*(s-a)*(s-b)*(s-c)
using namespace std;
int main()
{
	double a, b, c,y,s,area;
	cin >> a >> b >> c;
	y = area(s(a, b, c), a, b, c);
	cout << y;
	system("pause");
	return 0;
}
