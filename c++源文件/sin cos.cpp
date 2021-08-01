#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double  x,y;
	cout<<"请输入x的值"<<'\n';
	cin>>x;
	if(x!=0)
	    y=sin(x)+pow(pow(x,2)+1,1/2);
	else
		y=cos(x)-pow(x,3)+3*x;
	cout<<"您要的y值="<<y;
    system("pause");
	return 0;
}


