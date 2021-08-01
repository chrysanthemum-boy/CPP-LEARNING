#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for (int i = 0; i <= 2; i++)
		sum += a[i][i];
	for (int i = 0; i <= 2; i++)
		sum += a[2-i][i];
	cout << "两条对角线的和为："<<sum << endl;
	return 0;
}