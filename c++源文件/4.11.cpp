#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int fac(int i)
{
	int f=0;
	if (i == 1)
		f = 1;
	else
	f = f +i*i+ fac(i - 1);

	return f;
}
int main()
{
	int i;
	cin >> i;
	cout << fac(i);
	system("pause");
	return 0;
}
