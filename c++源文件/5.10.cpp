#include<iostream>
using namespace std;
int main()
{
	char c[3][80] = {};
	int max = 0, min = 0, num = 0, space = 0, cha = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 80; j++)
			cin >> c[i][j];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 80; j++)
		{
			if (c[i][j] > 'a' && c[i][j] < 'z')
				min++;
			else if (c[i][j] > 'A' && c[i][j] < 'Z')
				max++;
			else if (c[i][j] > '0' && c[i][j] < '9')
				num++;
			else if (c[i][j] = ' ')
				space++;
			else
				cha++;
		}
	}
	cout << "�д�д" << max << "��" << endl
		<< "��Сд" << min << "��" << endl
		<< "������" << num << "��" << endl
		<< "�пո�" << space << "��" << endl
		<< "�������ַ�" << cha << "��" << endl;
	return 0;
}