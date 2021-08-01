#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三个值"<<'\n';
	cin >> a >> b >> c;
	if (a > b&&a>c)
		cout << "最大值为" << a;
	else if (b> c && b > a)
		cout << "最大值为" << b;
	else if (c > b&&c>a)
		cout << "最大值为" << c;
    system("pause");
	return 0;
}
