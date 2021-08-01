#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string day[2],s1, s2, s3, s4,date[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
    int len1, len2, len3, len4, lenmin1, lenmin2, t = -1, temp = 0, i, j, min=0;
    cin >> s1 >> s2 >> s3 >> s4;
    len1 = s1.size();
    len2 = s2.size();
    len3 = s3.size();
    len4 = s4.size();
    if (len1 >= len2)
        lenmin1 = len2;
    else
        lenmin1 = len1;
    if (len3 >= len4)
        lenmin2 = len4;
    else
        lenmin2 = len3;
    for (i = 0; i <=lenmin1; i++)
    {
        while (t <= 1)
        {
           //x=s1.substr(i, 1);
           //y=s2.substr(i, 1); 
           if (s1[i] == s2[i])
           {
               t++; 
               day[t] = s1[i];
            }
        }
    }
    for (j = 1; j <= lenmin2; j++)
    {
        while (temp <= 1)
        {
            //x = s3.substr(i, 1);
            //y = s4.substr(i, 1);
            if (s3[j-1] == s4[j-1])
            {
                temp++;
                min = j;
            }
        }
    }
    cout << date[atoi(day[0].c_str())-65] << " ";
    if (day[1] <= "9" && day[1] >= "0")
        cout << atoi(day[1].c_str()) << ":"; 
    else
        cout << atoi(day[1].c_str()) - 55 << ":";
    if (min >= 0 && min <= 9)
        cout << "0" << min;
    else
        cout << min;
    return 0;
}


/*
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3, s4;

    cin >> s1 >> s2 >> s3 >> s4;

    int len1 = s1.length() < s2.length() ? s1.length() : s2.length();    //s1 s2 两者中的最小长度

    int mark = 1;     //判断是否已经找到'星期几'

    char weekday, hour;

    int minute;

    int len2 = s3.length() < s4.length() ? s3.length() : s4.length();    //s3 s4 两者中的最小长度

    for (int i = 0; i < len1; i++)
    {
        if (s1[i] == s2[i] && mark && s1[i] >= 'A' && s1[i] <= 'G')     //星期几
        {
            weekday = s1[i];
            mark = 0;
            switch (weekday)         //或者是if-else
            {
            case 'A':
                cout << "MON ";
                break;
            case 'B':
                cout << "TUE ";
                break;
            case 'C':
                cout << "WED ";
                break;
            case 'D':
                cout << "THU ";
                break;
            case 'E':
                cout << "FRI ";
                break;
            case 'F':
                cout << "SAT ";
                break;
            case 'G':
                cout << "SUN ";
                break;
            }
            continue;
        }
        if (s1[i] == s2[i] && mark == 0 && ((s1[i] >= 'A' && s1[i] <= 'N') || (s1[i] >= '0' && s1[i] <= '9')))  //注这里不能使用isupper()函数  因为范围是'A' ~ 'N'
        {
            hour = s1[i];
            break;
        }
    }

    for (int i = 0; i < len2; i++)
    {
        if (s3[i] == s4[i] && isalpha(s3[i]))     //必须是字母
        {
            minute = i;
            break;
        }
    }

    if (hour >= '0' && hour <= '9') {
        cout << '0' << hour << ':';
    }
    else {
        cout << hour - 'A' + 10 << ':';
    }

    printf("%02d", minute);

    return 0;
}
*/