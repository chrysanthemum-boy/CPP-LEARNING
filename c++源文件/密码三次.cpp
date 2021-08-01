#include<iostream>
using namespace std;
int main()
{ 
	int mm=123,n;
	cout<<"ÇëÊäÈëÃÜÂë"<<endl;

	for(int i=1;i<4;)
	{
		cin>>n;
		if (n==mm)
		{
		   cout<<"»¶Ó­"<<endl;
		   system("pause");
		   return 0;
		}
		else
		{
			i=i+1;
			cout<<"´íÎóÇëÖØÐÂÊäÈë£¡"<<endl;
			cout<<"»¹Ê£"<<4-i<<"´Î"<<endl;
		}
	}
system("pause");
return 0;
}