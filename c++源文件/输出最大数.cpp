#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cout << "����������ֵ"<<'\n';
	cin >> a >> b >> c;
	if (a > b&&a>c)
		cout << "���ֵΪ" << a;
	else if (b> c && b > a)
		cout << "���ֵΪ" << b;
	else if (c > b&&c>a)
		cout << "���ֵΪ" << c;
    system("pause");
	return 0;
}
