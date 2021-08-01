#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	cout << "请输入成绩" << '\n';
	cin >> x;
	if (x >= 90)
		cout << "成绩为A" << '\n';
	else if(x>=80)
		cout << "成绩为B" << '\n';
	else if (x >= 70)
		cout << "成绩为C" << '\n';
	else if (x >= 60)
		cout << "成绩为D" << '\n';
	else 
		cout << "成绩为E" << '\n';

	system("pause");
	return 0;
}
