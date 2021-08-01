#include<iostream>
using namespace std;
int main()
{ 

	double pi=0;
	
	for(double i=1;;i++)
	{
		int k=1;
		if(1.0/(i*2-1)<=0.0000001)
			break;
		else
		{ 
			
			pi=pi+k*(1.0/i);
			i=i*2.0-1;
            k=-k;
		}
	}
	cout<<pi;
system("pause");
return 0;
}