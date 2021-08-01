#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x1, x2, y1, y2, s1, s2,s4,x,y;
    float s3;
	 cout<<"请输入坐标"<<'\n';
	 cin >> x1;cin>>y1;cin>>x2;cin>>y2;
	 cout << "点"<<"(" << x1<< "," << y1<< ")";
	 cout << "(" <<x2 << "," << y2<< ")";
	 s1=pow((abs(x1-x2)),2);
	 s2=pow((abs(y1-y2)),2);
	 s3=pow((s1+s2),0.5);
	 cout<<"之间的距离="<<s3<<'\n'<<endl;
	 system("pause");
     return 0;
}
int main2()
{
	float x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << hypot(x1 - x2, y1 - y2);
	return 0;
}