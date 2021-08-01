#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, c,*p1=NULL,*p2=NULL,min,max,sum;
	cin >> a >> b >> c;
	sum = a + b + c;
	if (a < b)
		p1 = &a;
	else
		p1 = &b;
	if (*p1 > c)
		p1 = &c;
	if (a > b)
		p2 = &a;
	else
		p2 = &b;
	if (*p2 < c)
		p2 = &c;
	min = *p1;
	max = *p2;
	cout << min << " " << sum - min - max << " " << max << endl;
	return 0;

}