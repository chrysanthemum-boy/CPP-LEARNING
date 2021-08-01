#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double f1=1,f2=1, n;
	double sum=0;
	cout << "ÇëÊäÈën" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + f2 / f1;
		f1 = f2 + f1;
		f2 = f1 + f2;
	}
	sum = sum+ 1;
	cout << sum << endl;
	system("pause");
	return 0;
}
