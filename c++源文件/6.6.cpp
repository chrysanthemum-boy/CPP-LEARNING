#include<iostream>
#include<string>
using namespace std;
int length(char s[])
{
	char* p;
	int a,t=0;
	p = s;
	while (*p != '\0')
		p++;
	a = p - s;
	return a;
}
int main()
{
	char s[99];
	cin >> s;
	cout << length(s) << endl;
	return 0;
}