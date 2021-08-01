#include<cmath>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool Covered(int* a, int pos, int len, int cmpnum)
{//������ڴ��뱣�������������飬�����±꣬���鳤�ȣ����Ƚ���
	int n = a[pos];
	while (n != 1)
	{//���n�仯����ڹؼ��֣�˵��n��a[pos]���Ǵ��Ƚ����������� 
		if (n % 2 == 0)
		{
			n /= 2;
			if (n == cmpnum)
				return true;
		}
		else
		{
			n = (3 * n + 1) / 2;
			if (n == cmpnum)
				return true;
		}
	}
	return false;//���ѭ��������˵��n��a[i]�����Ǵ��Ƚ��������ؼ� 
}
bool Judge(int* a, int i, int len)
{
	for (int j = 0; j < len; j++)
		if (j != i)//���������������ֲ�������a[i]�Ƚ� 
		{
			if (Covered(a, j, len, a[i]))//���a[i]��a[j]���� 
				return false;//˵��a[i]���ǹؼ��������ؼ� 
		}
	return true;//���ѭ��������˵��a[i]�ǹؼ�����������
}

int main()
{
	int k, a[100], b[100];
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> a[i];
	int len = 0;
	for (int i = 0; i < k; i++)
		if (Judge(a, i, k))//�����ǰ�����ǹؼ��� 
			b[len++] = a[i];//���������� 
	sort(b, b + len, greater<int>());
	for (int i = 0; i < len; i++)//��� 
	{
		cout << b[i];
		if (i != len - 1)
			cout << ' ';
	}
	return 0;
}	