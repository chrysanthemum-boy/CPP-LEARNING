#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,b;
	 cout<<"�����뻪���¶�"<<'\n';
        cin>>a;
	  b=5.0/9*(a-32);
	  cout << "�������¶�=" << setiosflags(ios::fixed) << setprecision(2);
	  cout<<b<<"��"<<'\n'<<endl;
		system("pause");
		return 0;
}