#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double niu(double a,double  b, double c,double d)
{
	double x = 1,x1;
	do
	{
		x1 = x;
		x = x1 - (a * pow(x1, 3) + b * x1 * x1 + c * x1 + d) / (3 * a * x1 * x1 + 2 * b * x1 + c);	
	} 
	while (abs(x - x1) > 1e-8);
	return x;
}
int main()
{
	double a, b, c, d,x;
	cin >> a >> b >> c >> d;
	x = niu(a, b, c, d);
	cout << x;
	system("pause");
	return 0;
}
