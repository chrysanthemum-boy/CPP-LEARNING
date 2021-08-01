#include<iostream>
using namespace std;
int main()
{
	int a[4], t;
	int i, j;
	cout<< "请输入4个整数" << endl;
	for (i = 0; i <= 3; i++)
		cin >> a[i];
	for (i = 1; i < 3; i++)
		for (j = 0; j <= 3 - i; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	                                   //t = a[j]; a[j] = a[j + 1];a[j + 1] = t;
	cout << "排序后的结果是：";
	for (i = 0; i <= 3; i++)
		cout << a[i] << '\0';
	cout << endl;
	system("pause");
	return 0;
}
