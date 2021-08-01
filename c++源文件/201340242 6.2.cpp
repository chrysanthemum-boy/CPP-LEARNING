#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	int*p1,*p2,*p;
	cin>>a>>b;
	p1=&a;
	p2=&b;
	if(a<b)
	{p=p1;p1=p2;p2=p;}
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"max="<<*p1<<"min="<<*p2<<endl;
	system("pause");
	return 0;
}