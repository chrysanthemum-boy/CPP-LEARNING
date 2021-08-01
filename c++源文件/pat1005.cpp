#include<cmath>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool Covered(int* a, int pos, int len, int cmpnum)
{//函数入口传入保存输入数的数组，数组下标，数组长度，待比较数
	int n = a[pos];
	while (n != 1)
	{//如果n变化后等于关键字，说明n即a[pos]覆盖待比较数，返回真 
		if (n % 2 == 0)
		{
			n /= 2;
			if (n == cmpnum)
				return true;
		}
		else
		{
			n = (3 * n + 1) / 2;
			if (n == cmpnum)
				return true;
		}
	}
	return false;//如果循环结束，说明n即a[i]不覆盖待比较数，返回假 
}
bool Judge(int* a, int i, int len)
{
	for (int j = 0; j < len; j++)
		if (j != i)//对数组内其他数字操作并与a[i]比较 
		{
			if (Covered(a, j, len, a[i]))//如果a[i]被a[j]覆盖 
				return false;//说明a[i]不是关键数，返回假 
		}
	return true;//如果循环结束，说明a[i]是关键数，返回真
}

int main()
{
	int k, a[100], b[100];
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> a[i];
	int len = 0;
	for (int i = 0; i < k; i++)
		if (Judge(a, i, k))//如果当前数字是关键数 
			b[len++] = a[i];//存入新数组 
	sort(b, b + len, greater<int>());
	for (int i = 0; i < len; i++)//输出 
	{
		cout << b[i];
		if (i != len - 1)
			cout << ' ';
	}
	return 0;
}	