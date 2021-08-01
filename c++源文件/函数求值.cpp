#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int x, y;
	cout << "请输入x的值" << '\n';
	cin >> x;
	if (x < 1)
		y = x;
	if (x >= 1 && x < 10)
		y = 2 * x - 1;
	if (x >= 10)
		y = 3 * x - 11;
	cout << "对应的y值为" << y << '\n';


	system("pause");
	return 0;
}
