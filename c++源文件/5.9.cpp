#include<iostream>
using namespace std;
int main()
{
	int y, m, d, day = 0;
	cin >> y >> m >> d;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//为闰年
	{
		if (m == 1)
			day = d;
		if (m == 2)
			day = 31 + d;
		if (m == 3)
			day = 31 + 29 + d;
		if (m == 4)
			day = 1 * 31 + 30 + 29 + d; 
		if (m == 5)
			day = 2 * 31 + 30 + 29 + d; 
		if (m == 6)
			day = 2 * 31 + 2 * 30 + 29 + d;
		if (m == 7)
			day = 3 * 31 + 2 * 30 + 29 + d;
		if (m == 8)
			day = 4 * 31 + 2 * 30 + 29 + d;
		if (m == 9)
			day = 4 * 31 + 3 * 30 + 29 + d;
		if (m == 10)
			day = 5 * 31 + 3 * 30 + 29 + d;
		if (m == 11)
			day = 5 * 31 + 4 * 30 + 29 + d;
		if (m == 12)
			day = 6 * 31 + 4 * 30 + 29 + d;
	}
	else
	{
		if (m == 1)
			day = d;
		if (m == 2)
			day = 31 + d;
		if (m == 3)
			day = 1 * 31 + 28 + d;
		if (m == 4)
			day = 1 * 31 + 30 + 28 + d;
		if (m == 5)
			day = 2 * 31 + 30 + 28 + d;
		if (m == 6)
			day = 2 * 31 + 2 * 30 + 28 + d;
		if (m == 7)
			day = 3 * 31 + 2 * 30 + 28 + d;
		if (m == 8)
			day = 4 * 31 + 2 * 30 + 28 + d;
		if (m == 9)
			day = 4 * 31 + 3 * 30 + 28 + d;
		if (m == 10)
			day = 5 * 31 + 3 * 30 + 28 + d;
		if (m == 11)
			day = 5 * 31 + 4 * 30 + 28 + d;
		if (m == 12)
			day = 6 * 31 + 4 * 30 + 28 + d;
	}
	cout << "第" << day << "天" << endl;
	return 0;
}