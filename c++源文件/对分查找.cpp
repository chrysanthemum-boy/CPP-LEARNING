#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int X)  //����Ϊһ����n��Ԫ�ص����飬�����в����Ƿ���X
{
    int low = 0, middle, high = n - 1;
    while(low <= high)
    {
        middle = (low + high) / 2;
        if(X > a[middle])
            low = middle + 1;
        else if(X < a[middle])
            high = middle - 1;
        else
            return middle + 1;   //���ظ����������е�λ��
    }
    return -1;
}