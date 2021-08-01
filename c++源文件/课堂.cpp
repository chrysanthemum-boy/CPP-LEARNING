#include<iostream>
#include<string.h>
using namespace std;

int main()
{ 

	char a,f;
	int t,s,zm=0,sz=0,qt=0;
	
	
    while(f=getchar()!='\n')
		     {if((f>='a'&&f<='z')||(f>='A'&&f<='Z'))
			   zm=zm+1;
		     else if(f>='0'&&f<='9')
			   sz=sz+1;
		     else
			   qt=qt+1; 
             }

	cout<<zm<<endl;
	cout<<sz<<endl;
	cout<<qt<<endl;
  system("pause");
  return 0;
}