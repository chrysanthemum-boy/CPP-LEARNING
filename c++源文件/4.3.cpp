#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sushu(int x)
{
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			cout << "不为素数" << endl;
			return;
		}
	}
	cout << "为素数" << endl;
}
int main()
{
	int x;
	cout << "请输入整数" << endl;
	cin >> x;
	sushu(x);
	system("pause");
	return 0;
}
