#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double s, n;
	cout << "������������һ�����Ӹ���" << endl;
	cin >> s;
	cout << "��������ӳ�������" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
		s = (s + 1) * 2;
	cout << "���ӵ�һ��ժ������"<<endl <<s<< endl;
	system("pause");
	return 0;
}
