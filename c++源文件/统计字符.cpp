#include <iostream>
using namespace std;
int main()
{
    int zm = 0, sz = 0, qt = 0,kg=0;
    char a;
    cout << "请输入任意字符" << endl;
    while ((a = getchar()) != '\n')
    {
        if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
            zm = zm + 1;
        else if (a >= '0' && a <= '9')
            sz = sz + 1;
        else if (a == ' ')
            kg = kg + 1;
        else qt = qt + 1;
    }
    cout << "字母数" << zm << endl;
    cout << "数字数" << sz << endl;
    cout << "空格数" << kg << endl;
    cout << "其他字符数" << qt << endl;
    system("pause");
    return 0;
}