#include <iostream>
using namespace std;
int main()
{
	char s1[99], s2[99];
	cout << "input string1:";
	cin >> s1;
	cout << "input string2:";
	cin >> s2;
	cout << "The new string is:" << strcat(s1, s2)<< endl;
	return 0;
}
