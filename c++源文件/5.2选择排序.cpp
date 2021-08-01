#include<iostream>
using namespace std;
int main()
{
	int a[10],max=0,t;
	for (int i = 0; i <= 9; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i <= 9; i++)
	{
		max = i;
		for (int j = i + 1; j <= 9; j++)
		{
			if (a[max] <= a[j]) 
				max = j;
		}
		t = a[i];
		a[i] = a[max];
		a[max] = t;
	}
	cout << "½µÐòÎª£º" << endl;
	for (int i = 0; i <= 9; i++)
		cout << a[i] << endl;
	cout << "ÉýÐòÎª£º" << endl;
	for (int i = 9; i >= 0; i--)
		cout << a[i] << endl;
	return 0;
}