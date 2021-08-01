#include<iostream>
using namespace std;
int main()
{ 

	
	for(int i=1;i<=4;i++)
	{
		for(int s=1;s<=i*2-1;s++)
			cout<<"*";
		cout<<endl;

	}
	for(int i=1;i<=3;i++)
	{
		for(int s=1;s<=7-i*2;s++)
			cout<<"*";
		cout<<endl;

	}
system("pause");
return 0;
}