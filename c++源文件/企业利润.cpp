#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double i, s;
	cout << "请输入当月利润（万元）" << '\n';
	cin >> i;
	if (i <= 10)
		s = i * 0.1;
	else if (i <= 20)
		s = 1 + (i - 10) * 0.075;
	else if (i <= 40)
		s = 1.75 + (i - 20) * 0.05;
	else if (i <= 60)
		s = 2.75 + (i - 40) * 0.03;
	else if (i <= 100)
		s = 3.35 + (i - 60) * 0.015;
	else
		s = 4.55 + (i - 100) * 0.01;
	cout << "奖金数（万元）" << s<<'\n';
	system("pause");
	return 0;
}
