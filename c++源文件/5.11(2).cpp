#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
int main()
{
	int n;
	cin>>n;
	int* p=new int[n];
	for (int i=0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	cout<<*(p+1);
	delete[]p;
	system("pause");
	return 0;	
}
*/

int main()
{
	string s="*****",blank;
	for(int i=0;i<=4;i++)
	{
		cout<<blank<<s<<endl;
		blank+=" ";
	}
	system("pause");
	return 0;
}
/*
int main()
{
	int a[10]={38,34,45,5,43,345,45,2,45,3};
	sort(a,a+10);
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<endl;
	}
    system("pause");
	return 0;
}
*/
