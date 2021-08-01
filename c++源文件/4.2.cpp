#include<iostream>
#include<cmath>
using namespace std;
void x(double a, double b, double c)
{
	double x1, x2;
	x1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << x1 << '\0' << x2 << endl;
	return ;
}
void y(double a, double b, double c)
{
	double f = -(b * b - 4 * a * c);
	cout << "¹²éî¸´¸ùÎª" <<endl<< pow(f, 0.5) / (2 * a) << -b / (2 * a) << "*i" << '\n';
	cout  <<- pow(f, 0.5) / (2 * a) << -b / (2 * a) << "*i"<< '\n';
	return ;
}
void z(double a, double b, double c)
{
	double x1, x2;
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << x1 << endl;
	return ;
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c == 0)
		z(a, b, c);
	else if (b * b - 4 * a * c > 0)
		x(a, b, c);
	else
		y(a, b, c);
	return 0;
}
