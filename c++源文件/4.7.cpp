#include<iostream>
using namespace std;
bool prime(int x)
{
        int i;
        int k = (int)sqrt(x);
        for (i = 2; i <= k; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i > k)
            return true;
        else
            return false;
}
void gotobaha(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (prime(i) && prime(j) && (i + j == n))
            {
                cout << n << "=" << i << "+" << j << endl;
                return;
            }
        }
    }
}
int main()
{
    int n;cin >> n;gotobaha(n);system("pause");return 0;
}
