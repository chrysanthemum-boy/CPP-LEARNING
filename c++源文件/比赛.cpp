#include<iostream>
using namespace std;
int main()
{
	char a,b,c;
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			if(a!=b)
			{
				for(c='x';c<='z';c++)
				{
					if(a!=c&&b!=c)
				    if(a!='x'&&c!='x'&&c!='z')
					cout<<"��a�����"<<a<<endl<<"��b�����"<<b<<endl<<"��c�����"<<c<<endl;
				}
			}
		}
	}
system("pause");
 return 0;
}