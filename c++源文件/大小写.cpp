#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	char x;
	cout << "������һ����ĸ" << '\n';
	cin >> x;
	if (x >= 65 && x <= 96)
		x = x + 32;
	cout <<"��Ҫ�Ľ��"<<'\n'<< x<<'\n';
	system("pause");
	return 0;
}
