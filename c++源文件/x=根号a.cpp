#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x1=1, x2=0,a;
	cin >> a;
	for (int i = 1;; i++)
	{
		if (fabs(x1 - x2) < 1e-5)
			break;
		else
		{
			x1 = 0.5 * (x1 + a / x1);
			x2 = 0.5 * (x1 + a / x1);
		}
	}
	cout << x1;

	system("pause");
	return 0;
}
