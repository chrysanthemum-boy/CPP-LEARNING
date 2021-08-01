#include<iostream>
using namespace std;
int main()
{
    char a[5] = { '*','*','*','*','*' };
    int i, j, k;
    char space = ' ';
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
            cout << space;
        for (k = 0; k < 5; k++)
            cout << a[k];
        cout << endl;
    }
    return 0;

}