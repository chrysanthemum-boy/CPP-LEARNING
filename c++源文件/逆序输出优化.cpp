#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
    int a, t = 0, b, s;
    cout << "����������";
    cin >> s;
    b = s;
    while (b / 10 != 0)
    {
        t = t + 1;
        b = b / 10;
    }
    t = t + 1;
    cout << "��" << t << "λ��" << endl << "���������Ϊ";
    for (a = 1; a <= t; a++)
    {
        cout << s % 10;
        s = s / 10;
    }
    cout << endl;
    system("pause");
    return 0;
}
