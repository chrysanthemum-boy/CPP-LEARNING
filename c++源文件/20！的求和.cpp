#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int i, n,a=1,s,d=0;
	cout << "����������n" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (s = 1; s <= i; s++)
		{
			a = s * a;
		}
		d = d + a;
		a = 1;
	}
	cout << "�õ��Ľ׳˺�Ϊ" << d << endl;
    system("pause");
	return 0;
}
