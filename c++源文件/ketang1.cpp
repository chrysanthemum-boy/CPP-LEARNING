#include <iostream>           		//Ԥ��������
using namespace std;          		 //ʹ�������ռ�std
int main( )                             		 //�������ײ�
{                                          		 //�����忪ʼ
     
	 float score;
	 char grade;
	 cout<<"������ѧ���ĳɼ�"<<endl;
	 cin>>score;
	 while(score<0||score>100)
	 {
		 cout<<"��������"<<endl;
	     cout<<"���������룡"<<endl;	 
		 cin.clear();
         cin.sync();
		 cin>>score;

	 
     }
	 
	if(score>=90) grade='A';
	 else if(score>=80) grade='B';
	 else if(score>=70) grade='C';
	 else if(score>=90) grade='D';
	 else grade='E';
	 cout<<"�ȼ���"<<grade<<endl;
	 system("pause");
	 return 0;
}