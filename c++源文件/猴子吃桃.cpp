#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double s, n;
	cout << "请输入猴子最后一天桃子个数" << endl;
	cin >> s;
	cout << "请输入猴子吃桃天数" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
		s = (s + 1) * 2;
	cout << "猴子第一天摘桃总数"<<endl <<s<< endl;
	system("pause");
	return 0;
}
