#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int fac(int x)
{
	int i,s=1;
	for (i = 1; i <= x; i++)
		s = s * i;
	return s;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << fac(a) + fac(b) + fac(c) << endl;
system("pause");
	return 0;
}
