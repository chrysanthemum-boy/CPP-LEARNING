#include <iostream>
#include <string>
using namespace std;
const int n = 10;
string name[n];
char num[n];
int score[n];
void input_data()
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "����������ѧ�š��ɼ� " << i + 1 << ":";
        cin >> name[i] >> num[i] >> score[i];
    }
}
int main()
{
    int i;
    input_data();
    cout << endl << "���" << endl;
    for (i = 0; i < n; i++)
        if (score[i] < 60)
            cout << name[i] << " " << num[i] << "  " << score[i] << endl;
    return 0;
}

