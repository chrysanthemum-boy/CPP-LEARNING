#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	int*p1,*p2;
	a=100,b=10;
	p1=&a;
	p2=&b;
	cout<<a<<" "<<b<<endl;
	cout<<*p1<<" "<<*p2<<endl;
	system("pause");
	return 0;
}