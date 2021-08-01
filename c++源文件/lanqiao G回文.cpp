#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
string nixu(string y)
{
	int len;
	char t;
	len = y.length();
	for (int i = 0; i <=int((len-1)/2); i++)
	{
		t = y[i];
		y[i] = y[len - i - 1];
		y[len - i - 1] = t;
	}
	return y ;
}
void huiwen(string str)
{
	string  year, month, day;
	int y, m, d;
	year = str.substr(0, 4);
	month = str.substr(4, 2);
	day = str.substr(6, 2);
	y = stoi(year);
	m = stoi(month);
	d = stoi(day);
	if (!((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
	{
		for (int i = y+1;i<=9999; i++)
		{
			for (int j = 1; j <= 12; j++)
			{
				if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
				{
					for (int k = 1; k <= 31; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (nixu(to_string(i)) == "0" + to_string(j) + "0" + to_string(k))
							{
								cout << to_string(i) << "0" + to_string(j) + "0" + to_string(k)<< endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) <<to_string(j) << to_string(k) << endl;
								return;
							}
						}
					}
				}
				else if (j == 4 || j == 6 || j == 9 || j == 11)
				{
					for (int k = 1; k <= 30; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (to_string(i) == nixu("0" + to_string(j) + "0" + to_string(k)))
							{
								cout << to_string(i) <<"0" + to_string(j) + "0" + to_string(k) << endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) <<to_string(j) << to_string(k) << endl;
								return;
							}
						}
					}
				}
				else
				{
					for (int k = 1; k <= 28; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (to_string(i) == nixu("0" + to_string(j) + "0" + to_string(k)))
							{
								cout << to_string(i) << "0" <<to_string(j) << "0" << to_string(k) << endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) << to_string(j) << to_string(k) << endl;
								return;
							}
						}
					}
				}
			}

		}
	}
	else
	{
		for (int i = y+1; ; i++)
		{
			for (int j = 1; j <= 12; j++)
			{
				if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
				{
					for (int k = 1; k <= 31; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (to_string(i) == nixu("0" + to_string(j) + "0" + to_string(k)))
							{
								cout << to_string(i) << "0" + to_string(j) << "0" + to_string(k)<< endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) << to_string(j) + to_string(k)<< endl;
								return;
							}
						}
					}
				}
				else if (j == 4 || j == 6 || j == 9 || j == 11)
				{
					for (int k = 1; k <= 30; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (to_string(i) == nixu("0" + to_string(j) + "0" + to_string(k)))
							{
								cout << to_string(i) << "0" + to_string(j) + "0" + to_string(k) << endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) << to_string(j) + to_string(k) << endl;
								return;
							}
						}
					}
				}
				else
				{
					for (int k = 1; k <= 29; k++)
					{
						if (j <= 9 && k <= 9)
						{
							if (to_string(i) == nixu("0" + to_string(j) + "0" + to_string(k)))
							{
								cout << to_string(i) <<"0" + to_string(j) + "0" + to_string(k)<< endl;
								return;
							}
						}
						else
						{
							if (to_string(i) == nixu(to_string(j) + to_string(k)))
							{
								cout << to_string(i) << to_string(j) + to_string(k) << endl;
								return;
							}
						}
					}
				}
			}

		}
	}
}
bool huiwen2(string str)
{
	string  year,niy;
	int y;
	year = str.substr(0, 4);
	y = stoi(year);
	niy = nixu(year);
	return false;

}
int main()
{
	string x;
	cin >> x;
	huiwen(x);
	system("pause");
	return 0;
}

/*const int MAXN = 25;
string s;
int a[MAXN], ans, p1, p2, p3;

void Print(int *a, int ans, int p1, int p2, int p3)
{
	int tmp = p1;
	if (p3 <= p2) {
		tmp++;
	}
	cout << tmp;
	while (tmp) {
		cout << tmp % 10;
		tmp /= 10;
	}
	cout << endl;
	//拆前两个数字
	//20
	int x = p1 / 100;
	if (x / 10 == x % 10)
		++x;
	int sum1 = p1 * 10000 + p2;
	//20200202
	//20200000 + 200 + 2 = 20200202
	int sum2 = x * 1000000 + x * 10000 + (x % 10 * 10 + x / 10) * 100 + (x % 10 * 10 + x / 10);
	if (sum1 >= sum2) {
		++x;
		if (x / 10 == x % 10)
			++x;
		sum2 = x * 1000000 + x * 10000 + (x % 10 * 10 + x / 10) * 100 + (x % 10 * 10 + x / 10);
	}
	cout << sum2 << endl;
}

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		a[ans++] = s[i] - '0';
	}
	//p1 前四位
	//p2 后四位
	//p3 前四位的逆序
	p1 = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
	p2 = 1000 * a[4] + 100 * a[5] + 10 * a[6] + a[7];
	p3 = 1000 * a[3] + 100 * a[2] + 10 * a[1] + a[0];
	Print(a, ans, p1, p2, p3);
	return 0;
}*/

/*
int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool check(int date)
{
	int year = date / 10000;
	int mouth = (date / 100) % 100;
	int day = date % 100;

	if (mouth < 0 || mouth > 12) return false;
	if (day == 0 || mouth != 2 && day > days[mouth]) return false;

	if (mouth == 2)
	{
		int leap = year % 100 && year % 4 == 0 || year % 400 == 0;
		if (day > days[mouth] + leap)   return false;
	}

	return true;
}

int main()
{
	int date1, date2;
	cin >> date1 >> date2;

	int res = 0;
	for (int i = 1000; i < 10000; i++)
	{
		int date = i, x = i;
		for (int j = 0; j < 4; j++)    date = date * 10 + x % 10, x /= 10;

		if (date1 <= date && date <= date2 && check(date))   res++;
	}

	cout << res << endl;

	return 0;
}*/

/*int Month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

void getCalendar(int Num, int& year, int& month, int& day)
{
	int temp = Num / 10000;
	year = temp;
	int temp1 = ((Num - temp * 10000) / 100);
	month = temp1;
	int temp2 = (Num - temp * 10000) % 100;
	day = temp2;
}

bool isYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}

bool isHuiWen(string str)
{
	int len = str.length();
	int begin = 0;
	for (int i = 0; i <= len / 2 - 1; i++)
	{
		if (str.at(i) == str.at(len - 1 - i))
		{
			begin++;
		}
	}

	if (begin == len / 2)
		return true;
	else
		return false;
}

int main()
{
	int N, goals = 39991230;
	cin >> N;
	int beginYear, beginMonth, beginDay;
	getCalendar(N, beginYear, beginMonth, beginDay);
	int endYear, endMonth, endDay;
	getCalendar(goals, endYear, endMonth, endDay);

	for (int i0 = beginYear, i1 = beginMonth, i2 = beginDay; i0 <= endYear && i1 <= endMonth && i2 <= endDay; )
	{
		beginDay++;
		if (isYear(beginYear))
		{
			Month[1] = 29;
		}
		else
		{
			Month[1] = 28;
		}

		if (beginDay > Month[beginMonth - 1])
		{
			beginDay = beginDay - Month[beginMonth - 1];
			beginMonth++;
		}
		if (beginMonth > 12)
		{
			beginYear++;
			beginMonth = beginMonth - 12;
		}
		string strYear = to_string(beginYear);
		string strMonth;
		string strDay;
		string strResult;
		if (beginMonth < 10)
		{
			strMonth = '0' + to_string(beginMonth);
		}
		else
		{
			strMonth = to_string(beginMonth);
		}
		if (beginDay < 10)
		{
			strDay = '0' + to_string(beginDay);
		}
		else
		{
			strDay = to_string(beginDay);
		}
		strResult = strYear + strMonth + strDay;
		bool able = false;
		if (strResult.at(0) == strResult.at(2) &&
			strResult.at(1) == strResult.at(3) &&
			strResult.at(4) == strResult.at(6) &&
			strResult.at(5) == strResult.at(7)
			)
		{
			able = true;
		}

		bool isTrue = false;
		if (able)
		{
			isTrue = isHuiWen(strResult);
			if (isTrue)
			{
				cout << strResult << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}*/

/*
int x, q, w, b[5];
int a[14] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
bool isok(int x)//判断闰年 
{
	if (x % 400 == 0)	return true;
	if (x % 100 == 0)	return false;
	if (x % 4 == 0)	return true;
	return false;
}
int main()
{
	cin >> x;
	int lday = x % 100, lmonth = x % 10000-lday;//天,月份 
	x /= 10000;//年份 
	for (int i = x;; i++)
	{
		if (isok(i))	
			a[2] = 29;//判断闰年 
		else	
			a[2] = 28;
		int temp = i;
		for (int j = 1; j <= 4; j++)//分解年份的数字
			b[j] = temp % 10, temp /= 10;
		int month = b[1] * 10 + b[2];//月份
		int day = b[3] * 10 + b[4];
		if (i == x && lmonth > month)	
			continue;//特判第一年 
		if (i == x && lmonth == month && lday >= day)	
			continue;//特判第一年 
		if (month >= 1 && month <= 12 && day >= 1 && day <= a[month])//存在这一天 
		{
			if (q == 0)	
				q = i * 10000 + month * 100 + day;//最近的回文串
			if (b[1] == b[3] && b[2] == b[4])	
				w = i * 10000 + month * 100 + day;//最近的AB型回文 
		}
		if (q && w)//都找到了 
		{
			cout << q << "\n" << w;
			return 0;
		}
	}
}*/