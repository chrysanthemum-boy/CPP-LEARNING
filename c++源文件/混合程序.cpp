#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,g,x;
	cout<<"请输入整数";
	cin>>m;
	if(m>=0)
		cout<<"为正数"<<'\n';
	else 
		cout<<"为负数"<<'\n';
	cout<<"请输入成绩"<<'\n';
	cin>>g;
	if(g>=60)
		cout<<"及格"<<'\n';
	else
		cout<<"不及格"<<'\n';
	cout<<"请输入x"<<'\n';
	cin>>x;
	if(x>=0)
		cout<<x<<'\n';
	else
		cout<<-x<<'\n';
	
	system("pause");
	return 0;
}