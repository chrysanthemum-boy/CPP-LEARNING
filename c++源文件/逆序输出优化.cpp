#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
    int a, t = 0, b, s;
    cout << "请输入数字";
    cin >> s;
    b = s;
    while (b / 10 != 0)
    {
        t = t + 1;
        b = b / 10;
    }
    t = t + 1;
    cout << "是" << t << "位数" << endl << "其逆序输出为";
    for (a = 1; a <= t; a++)
    {
        cout << s % 10;
        s = s / 10;
    }
    cout << endl;
    system("pause");
    return 0;
}
