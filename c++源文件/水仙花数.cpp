#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,i;
	cout << "传说中的水仙花数为" << endl;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = i %100 / 10;
		c = i % 100 % 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
			cout << i << endl;
	}
	system("pause");
	return 0;
}
