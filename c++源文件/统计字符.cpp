#include <iostream>
using namespace std;
int main()
{
    int zm = 0, sz = 0, qt = 0,kg=0;
    char a;
    cout << "�����������ַ�" << endl;
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
    cout << "��ĸ��" << zm << endl;
    cout << "������" << sz << endl;
    cout << "�ո���" << kg << endl;
    cout << "�����ַ���" << qt << endl;
    system("pause");
    return 0;
}