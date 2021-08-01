#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double ex(double a)
{
	int k = 1, i;
	double e=0, s = 0,n=1;
	for (i = 1; i <= 20; i++)
	{
		n = n * i;
		e = e + 1 / n;
	}
	s = pow(e, a);
	return s;
}
double sinh(double a)
{
	double s;
	s=(ex(a) - ex(-a)) / 2;
	return s;
}
int main()
{
	double x;
	cin >> x;
	cout<<sinh(x)<<endl;
	system("pause");
	return 0;
}
