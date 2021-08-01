#include<iostream>
#include<string>
using namespace std;
bool ganfan(string key)
{
	if (key == "woxiangganfan")
		return true;
	else
		return false;
}
int main()
{
	string key;
	cin >> key;
	if (ganfan(key))
		cout << "那就去淦！" << endl;
	else
		cout << "哦！肚子饱饱的！" << endl;
	return 0;
}