#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s1[99], s2[99];
    int i = 0, j = 0;
    cout << "����s1";
    cin >> s1;
    cout << "����s2:";
    cin >> s2;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        s1[i++] = s2[j++];
    s1[i] = '\0';
    cout << "�µ��ַ���:" << s1 << endl;
    return 0;
}