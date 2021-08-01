#include<iostream>
using namespace std;
int main()
{
	int n,t,k=0,key,max=0,temp;
	cin >> n;
	cout << "请输入排序好的数组" << endl;
	int* a = new int[n];

	for (int i = 0;i<=n-1; i++)
	{
		cin >> *(a + i);
		k++;
	}

	if (*(a) >= *(a + 1)) key = 1;
	else                  key = 0;                              //panduan

	cout << "请输入需插入的数" << endl;
	cin >> t;
	if (key)
	{
		if (t <= a[k-1])    a[k] = t;
		else
		{
			for (int j = 0; j <= k - 1; j++)
			{
				if (t >= a[j])
				{
					for (int i = k - 1; i >= j; i--)
					{
						a[i + 1] = a[i];
					}
					a[j] = t;
					break;
				}
			}
		}
		for (int i = 0; i <= k; i++)
			cout << *(a + i) << " ";
		delete[]a;
	}
	else
	{
		if (t >= a[k - 1])    a[k] = t;
		else
		{
			for (int j = 0; j <= k - 1; j++)
			{
				if (t <= a[j])
				{
					for (int i = k - 1; i >= j; i--)
					{
						a[i + 1] = a[i];
					}
					a[j] = t;
					break;
				}
			}
		}
		for (int i = 0; i <= k; i++)
			cout << *(a + i) << " ";
		delete[]a;
	}
	return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
	int a[11] = { 1,4,5,6,9,10,22,34,67,79 };
	int num, i, j;
	cin >> num;
	if (num > a[9])
		a[10] = num;
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (a[i] > num)
			{
				for (j = 9; j >= i; j--)
					a[j + 1] = a[j];//依次往后挪一个
				a[i] = num;
				break;
			}
		}
	}
	for (i = 0; i < 11; i++)
		cout << a[i] << " ";
	return 0;
}*/