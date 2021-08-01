#include<iostream>
using namespace std;
void hanoi(char a, char b, char c, int n) 
{
    if (n == 1) cout << "第"<<n<<"个盘子从"<<a << " -> " << c << endl;  //直接移动到C柱，输出 
    else {
        hanoi(a, c, b, n - 1);  //把上面n-1个移到B柱
        cout << "第" <<n << "个盘子从"<< a << " -> " << c << endl;  //输出
        hanoi(b, a, c, n - 1);  //把剩下n-1个从B柱移到C柱
    }

}
int main() 
{
    int n;
    cin >> n;
    hanoi('A', 'B', 'C', n);
    system("pause");
    return 0;
}