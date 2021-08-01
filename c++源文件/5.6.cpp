#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int n = 10;
	int i, j, a[n][n];
	for (i = 0; i < n; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			cout <<setw(4)<< a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}