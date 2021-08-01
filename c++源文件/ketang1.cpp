#include <iostream>           		//预处理命令
using namespace std;          		 //使用命名空间std
int main( )                             		 //主函数首部
{                                          		 //函数体开始
     
	 float score;
	 char grade;
	 cout<<"请输入学生的成绩"<<endl;
	 cin>>score;
	 while(score<0||score>100)
	 {
		 cout<<"输入有误！"<<endl;
	     cout<<"请重新输入！"<<endl;	 
		 cin.clear();
         cin.sync();
		 cin>>score;

	 
     }
	 
	if(score>=90) grade='A';
	 else if(score>=80) grade='B';
	 else if(score>=70) grade='C';
	 else if(score>=90) grade='D';
	 else grade='E';
	 cout<<"等级是"<<grade<<endl;
	 system("pause");
	 return 0;
}