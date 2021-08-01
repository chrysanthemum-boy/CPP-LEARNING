#include<iostream>

using namespace std;
int main()
{
	int m,c,e;
	cout<<"请输入成绩";
	cin>>m>>c>>e;
	if(m>=90)
		cout<<"数学成绩优秀"<<'\n';
	else 
		cout<<"数学不理想，继续努力！"<<'\n';
	if(c>=90)
		cout<<"语文成绩优秀"<<'\n';
	else 
		cout<<"语文不理想，继续努力！"<<'\n';
	if(e>=90)
		cout<<"英语成绩优秀"<<'\n';
	else 
		cout<<"英语不理想，继续努力！"<<'\n';
	system("pause");
	return 0;
}