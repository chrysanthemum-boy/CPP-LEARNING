#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	int i;
	char a[n] = {}, t;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n / 2; i++)
	{
		t = a[i]; 
		a[i] = a[n - i - 1]; 
		a[n - i - 1] = t;
	}
	for (i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
	return 0;
}
