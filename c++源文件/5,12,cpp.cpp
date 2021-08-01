#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = 'Z' - str[i] + 'A' + 1;
		else
			str[i] = 'z' - str[i] + 'a' + 1;
	}
	for (int i = 0; i < str.length(); i++)
		cout << str[i];
	return 0;
}