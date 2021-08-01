#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,i,n,s=0;
	cout << "请输入任意循环次数n" << endl;
	cin >> n;
	cout << "请输入任意数字a" << endl;
	cin >> a;
	for(i=1;i<=n;i++)
	{
		s = s + a;
		a = a * 10 + a;
	}
	cout << endl;
	cout <<"Sn=" <<s << endl;
    system("pause");
	return 0;
}
