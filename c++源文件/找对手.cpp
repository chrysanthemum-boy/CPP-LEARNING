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
	cout << "a和" << a << "对打" << endl;
	cout << "b和" << b << "对打" << endl;
	cout << "c和"<<c<<"对打"<<endl;



	system("pause");
	return 0;
}
