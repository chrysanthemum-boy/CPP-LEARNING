#include<iostream>
using namespace std;
int main()
{ 
	int mm=123,n;
	cout<<"����������"<<endl;

	for(int i=1;i<4;)
	{
		cin>>n;
		if (n==mm)
		{
		   cout<<"��ӭ"<<endl;
		   system("pause");
		   return 0;
		}
		else
		{
			i=i+1;
			cout<<"�������������룡"<<endl;
			cout<<"��ʣ"<<4-i<<"��"<<endl;
		}
	}
system("pause");
return 0;
}