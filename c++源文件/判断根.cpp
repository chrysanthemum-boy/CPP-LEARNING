#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,y,a,b,c,d,f,g1,g2;
	cout<<"�������Ӧ������a��b��c"<<'\n';
	cin>>a>>b>>c;
	cout<<"y="<<a<<"x^2+"<<b<<"x+"<<c<<'\n';
	d=b*b-4*a*c;
	f=-d;
	if(d>=0)
	{g1=(b+pow(d,0.5))/(2*a);
	 g2=(b-pow(d,0.5))/(2*a);
	 cout<<"x1="<<g1<<'\0'<<"x2="<<g2<<'\n';
	}
	else
	{cout<<"�����Ϊ"<<-b/(2*a)<<"i+"<<pow(f,0.5)/(2*a)<<'\n';
		cout<<-b/(2*a)<<"i-"<<pow(f,0.5)/(2*a)<<'\n';
	}
	system("pause");
	return 0;
}
