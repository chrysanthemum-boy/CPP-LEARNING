#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	cout << "������ɼ�" << '\n';
	cin >> x;
	if (x >= 90)
		cout << "�ɼ�ΪA" << '\n';
	else if(x>=80)
		cout << "�ɼ�ΪB" << '\n';
	else if (x >= 70)
		cout << "�ɼ�ΪC" << '\n';
	else if (x >= 60)
		cout << "�ɼ�ΪD" << '\n';
	else 
		cout << "�ɼ�ΪE" << '\n';

	system("pause");
	return 0;
}
