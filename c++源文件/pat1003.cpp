/*#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void panduan(string x)
{
	int len, i, t1 = 0, t2 = 0;
	bool f = false;
	len = x.size();
	for (i = 1; i <= len; i++)
	{
		string s = x.substr(i, 1);
		if(s=="P")
		if (f = false)
		{
			if (s == "A")
			{
				t1++;
			}
			else if (s == "P")
			{
				f = true;
			}
			else
			{
				cout << "NO" << endl;
				return;
			}
		}
		else
		{
			if (s == "A")
				t2++;
			else if (s == "T")
				break;
			else
			{
				cout << "NO" << endl;
				return;
			}
		}
	}
	if (t1 * t2 != len - i)
	{
		cout << "NO" << endl;
		return;
	}
	int t3 = 0;
	for (int j = i + 1; j <= len; j++)
	{
		string s = x.substr(j, 1);
		if (s == "A")
		{
			t3++;
		}
		else
		{
			cout << "NO" << endl;
			return;
		}
	}
	if (t3 == t1 * t2)
		cout << "YES" << endl;
	else
	{
		cout << "NO" << endl;
		return;
	}

}
int main()
{
	string str;
	cin >>str;
	panduan(str);
	return 0;
}*/






















#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool judge(string s)
{
	int i;
	int count_p = 0, count_a = 0, count_t = 0;
	int position_p = 0, position_a = 0, position_t = 0;
	int num1 = 0, num2 = 0, num3 = 0;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T')     //如果某个字符不是P A T三个字符中的一个，直接判断为错误
			return false;
		if (s[i] == 'P')         //计算这三个字符的个数
			count_p++;
		else if (s[i] == 'A')
			count_a++;
		else if (s[i] == 'T')
			count_t++;
	}
	if (count_p != 1 || count_t != 1 || count_a < 1)
		return false;

	position_p = s.find('P');   //找到这三个字符的位置
	position_a = s.find('A');
	position_t = s.find('T');
	if (position_p >= position_t)
		return false;
	for (i = 0; i < s.length(); i++)
	{
		if (i < position_p && s[i] == 'A')
			num1++;
		else if (i > position_p && i < position_t && s[i] == 'A')
			num2++;
		else if (i > position_t && s[i] == 'A')
			num3++;
	}
	if (num3 == num1 * num2)      //是否满足那个条件
		return true;
	else
		return false;
}

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (judge(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}