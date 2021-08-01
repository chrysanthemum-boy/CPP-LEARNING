#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void str(int n)
{
	char t;
	if (n/10!=0)
	str(n/10);
	t = n % 10+'0';
	cout << t;
	
}
int main()
{

	int n;
	cin >> n;
	str(n);
	system("pause");
	return 0;
}
