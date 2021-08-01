#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int X)  //参数为一个有n个元素的数组，在其中查找是否含有X
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
            return middle + 1;   //返回该数在数组中的位置
    }
    return -1;
}