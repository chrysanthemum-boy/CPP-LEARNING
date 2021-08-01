#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,n,x1,x2,x3,x4,x5;
	cout << "请输入不多于5位的正整数" << '\n';
	cin >> a;
	if (a / 10000 != 0)
	{
		n = 5;
		x1 = a / 10000;
		x2 = a % 10000 / 1000;
		x3 = a % 1000 / 100;
		x4 = a % 100 / 10;
		x5 = a % 10;
		cout << "为" << n << "位数" << '\n';
		cout << x1 << x2 << x3 << x4 << x5 << '\n';
		cout << x5 << x4 << x3 << x2 << x1 << '\n';
	}
	else if (a / 1000 != 0)
	{
		n = 4;
		x2 = a / 1000;
		x3 = a % 1000 / 100;
		x4 = a % 100 / 10;
		x5 = a % 10;
		cout << "为" << n << "位数" << '\n';
		cout << x2 << x3 << x4 << x5 << '\n';
		cout << x5 << x4 << x3 << x2 << '\n';
	}
	else if (a / 100 != 0)
	{
		n = 3;
		x3 = a  / 100;
		x4 = a % 100 / 10;
		x5 = a % 10;
		cout << "为" << n << "位数" << '\n';
		cout << x3 << x4 << x5 << '\n';
		cout << x5 << x4 << x3 << '\n';
	}
	else if (a / 10 != 0)
	{
		n = 2;
		x4 = a/ 10;
		x5 = a % 10;
		cout << "为" << n << "位数" << '\n';
		cout  << x4 << x5 << '\n';
		cout << x5 << x4 << '\n';
	}
	else
	{
		n = 1;
		x5 = a % 10;
		cout << "为" << n << "位数" << '\n';
		cout <<x5 << '\n';
		cout << x5<< '\n';
	}

	
	system("pause");
	return 0;
}
