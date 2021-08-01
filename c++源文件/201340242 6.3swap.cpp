#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void Swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a,b,*p1,*p2;
	cin>>a>>b;
	p1=&a;
	p2=&b;
	if(a<b)
	Swap(p1,p2);
	cout<<"max = "<<a<<"  min = "<<b<<endl;
	cout<<"ÄãºÃ"<<endl;
    system("pause");
	return 0;
}