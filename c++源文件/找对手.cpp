#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	bool flag;
	flag = true;
	char a,b,c;
	for (char i = 'x'; i <= 'z'; i++)
	{
		if (i != 'x' && i != 'z')
			c = i;
		else if (i != 'x' && i != c)
			a = i;
		else b = i;
	}
	cout << "a��" << a << "�Դ�" << endl;
	cout << "b��" << b << "�Դ�" << endl;
	cout << "c��"<<c<<"�Դ�"<<endl;



	system("pause");
	return 0;
}
