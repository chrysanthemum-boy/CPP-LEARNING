#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	char x;
	cout << "请输入一个字母" << '\n';
	cin >> x;
	if (x >= 65 && x <= 96)
		x = x + 32;
	cout <<"需要的结果"<<'\n'<< x<<'\n';
	system("pause");
	return 0;
}
