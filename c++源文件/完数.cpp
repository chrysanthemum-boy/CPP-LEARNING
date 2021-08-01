#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int i,s;
	cout << "神奇的完数为" << endl;
	for (i = 1; i <= 999; i++)
	{
		int n = 0;
		for (s = i - 1; s > 0; s--)
		{
			if (i % s == 0)
				n = n + s;
		}
		if (n == i)
			cout << i << endl;
	}
	system("pause");
	return 0;
}
