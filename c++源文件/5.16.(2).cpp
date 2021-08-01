#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string a;
	int i, n;
	char t;
	cin >> a;
	n = a.length();
	for (i = 0; i < n / 2; i++)
	{
		t = a[i]; 
		a[i] = a[n - i - 1]; 
		a[n - i - 1] = t;
	}
	cout << a << endl;
	return 0;
}