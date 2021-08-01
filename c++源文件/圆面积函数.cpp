#include<iostream>
using namespace std;
double s(double r)
{
	double mianji;
	mianji=pow(r,2)*3.1415926;
	return mianji;
}
int main()
{
	double r;
	cin>>r;
    cout<<s(r);
	system("pause");
	return 0;
}
