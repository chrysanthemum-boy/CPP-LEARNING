#include<iostream>
using namespace std;
int maxyue(int a, int b)
{
	int temp=0;
	if (a < b)
		temp = a; a = b; b = temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int minbei(int a, int b)
{
	int maxyue(int a, int b);
	int temp=0;
	temp = maxyue(a, b);
	return(a * b / temp);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << maxyue(a, b) << endl << minbei(a, b) << endl;
	return 0;
}
