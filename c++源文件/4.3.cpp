#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sushu(int x)
{
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			cout << "��Ϊ����" << endl;
			return;
		}
	}
	cout << "Ϊ����" << endl;
}
int main()
{
	int x;
	cout << "����������" << endl;
	cin >> x;
	sushu(x);
	system("pause");
	return 0;
}
