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
		cout << "�Ǿ�ȥ�ƣ�" << endl;
	else
		cout << "Ŷ�����ӱ����ģ�" << endl;
	return 0;
}