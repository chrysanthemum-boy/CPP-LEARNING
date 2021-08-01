#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float t=3.1415926;
	float r,c,s;
	 cout<<"请输入半径"<<"cm"<<'\n';
      cin>>r; 
	  c=2*t*r;
	   s=t*r*r;
	  cout<<"半径是"<<r<<"的圆周长是"<<c<<"cm"<<"，面积是"<<s<<"cm^2"<<'\n'<<endl;
	    system("pause");
		return 0;
}