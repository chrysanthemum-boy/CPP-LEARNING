#include<iostream>
using namespace std;
void hanoi(char a, char b, char c, int n) 
{
    if (n == 1) cout << "��"<<n<<"�����Ӵ�"<<a << " -> " << c << endl;  //ֱ���ƶ���C������� 
    else {
        hanoi(a, c, b, n - 1);  //������n-1���Ƶ�B��
        cout << "��" <<n << "�����Ӵ�"<< a << " -> " << c << endl;  //���
        hanoi(b, a, c, n - 1);  //��ʣ��n-1����B���Ƶ�C��
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