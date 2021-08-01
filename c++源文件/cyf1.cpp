#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float F=0.618;
	float a,b;
	 cout<<"请输入身高"<<'\n';
	 cin>>a;
	  b=a*(1-F);
	  cout<<"理想体重"<<'\n';
	  cout<<b<<'\n';
		system("pause");
		return 0;
}