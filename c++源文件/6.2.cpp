#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, s3, * p1 = NULL, * p2 = NULL, min, max, mid, sum;
	cin >> s1 >> s2 >> s3;
//找最小值
	if (s1 < s2)
		p1 = &s1;
	else
		p1 = &s2;
	if (*p1 > s3)
		p1 = &s3;
//找最大值
	if (s1 > s2)
		p2 = &s1;
	else
		p2 = &s2;
	if (*p2 < s3)
		p2 = &s3;
	min = *p1;
	max = *p2;
//找中间值
	if (min == s1 && max == s2)
		mid = s3;
	if (min == s1 && max == s3)
		mid = s2;
    if (min == s2 && max == s3)
		mid = s1;
	if (min == s2 && max == s1)
		mid = s3;
	if (min == s3 && max == s1)
		mid = s2;
	if (min == s3 && max == s2)
		mid = s1;	
	cout << min << " " << mid << " " << max << endl;
	return 0;

}