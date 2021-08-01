#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,b;
	 cout<<"请输入华氏温度"<<'\n';
        cin>>a;
	  b=5.0/9*(a-32);
	  cout << "其摄氏温度=" << setiosflags(ios::fixed) << setprecision(2);
	  cout<<b<<"℃"<<'\n'<<endl;
		system("pause");
		return 0;
}