#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,t;
	cout << "请输入一个整数" << '\n';
	cin >> a;
	t = a % 2;
	if (t ==1)
		cout << "该数为奇数" << '\n';
	else
		cout << "该数为偶数" << '\n';


	system("pause");
	return 0;
}
