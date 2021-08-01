#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 bool sushu(int n)	//素数判断
    {
        int i;
        int k = (int)sqrt(n);
        for (i = 2; i <= k; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i > k)
            return true;
        else
            return false;
    }
int main()
{
    int str[100001]{};
        int k = 0;
        for (int i = 0; i < 100001; i++)		//对100001内的所有素数打表
        {
            if (sushu(i))
            {
                str[k] = i;
                k++;
            }
        }
        int N, count = 0;
        cin >> N;
        for (int i = 1;; i++)
        {
            if (str[i] > N)				//超出范围N直接跳出循环
                break;
            if (str[i] - str[i - 1] == 2)	//相邻素数相差为2的可能性
                count++;
        }
        cout << count;					//输出最后结果
        return 0;
}
/*int main()
{
	int x;
	cin >> x;
	int t = 0, i, j=3, num[10000]{};
	for (i = 3; i <= x; i += 2)
	{
		bool f = true;
		for (j = 3; j <= i - 1; j++)
		{
			if (i % j == 0)
				f = false;
		}
		if (f == true)
			num[t] = i;
		t++;
	}
	int k,temp=0;
	for (k = 0; k <= t; k++)
	{
		if (num[k + 1] - num[k] == 2)
		{
			temp++;
		}
	}

	cout << temp;
	return 0;
}
*/