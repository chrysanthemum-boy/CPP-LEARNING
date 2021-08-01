#include<iostream>
using namespace std;
int main()
{
	int a[15]{},x;
	for (int i = 0; i < 15; i++)
		cin >> a[i];
	cin >> x;
    int low = 0, middle, high = 14;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (x < a[middle])
            low = middle + 1;
        else if (x > a[middle])
            high = middle - 1;
        else
        {
            cout <<"ÔÚµÚ"<< middle + 1<<"¸ö"<<endl;
            break;
        }
    }
    return 0;

}