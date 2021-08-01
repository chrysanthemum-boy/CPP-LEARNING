#include<iostream>
#include<string>
using namespace std;
void in(int a[10])
{
	for (int i = 0; i <= 9; i++)
	{
		cin >> a[i];
	}
	return;
}
void out(int a[10])
{
	for (int i = 0; i <= 9; i++)
	{
		cout << a[i] << endl;
	}
	return;
}
void deal(int a[10])
{
	int p1,p2,max,min;
	//找最大数的下标
	p1 = 1;
	for (int i = 0; i < 9; i++)
	{
		
		if (a[p1] < a[i])
			p1 = i;
	}
	max = a[p1];
	//找最小数的下标
	p2 = 1;
	for (int i = 0; i < 9; i++)
	{
		
		if (a[p2] > a[i])
			p2 = i;
	}
	min = a[p2];
	//交换位置
	int t;
	t = a[9]; a[9] = max; a[p1] = t;
	t = a[0]; a[0] = min; a[p2] = t;
}
int main()
{
	int a[10] = {};
	in(a);
	deal(a);
	out(a);
	return 0;
}