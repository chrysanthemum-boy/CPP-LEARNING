//��5.3 ��д���������ݷ���10��������(����С����˳��)��
#include <iostream>
using namespace std;
int main( )
{
  const int n=4;
  string a[n+1��;// asd asfgsfg ertetr 1  fghfgh 
  int i,j,t;
  cout<<"input n strings ��"<<endl;
  for (i=1;i<=n;i++)                       //����a��1��~a��10��
    cin>>a��i��;
  cout<<endl;
  for (j=1;j<=n-1;j++)                      //������9�˱Ƚ�
    for(i=1;i<=n-j;i++)                  //��ÿ����Ҫ����(10-j)�������Ƚ�
       if (a��i��>a��i+1��)                   //���ǰ��������ں������
   {t=a��i��;a��i��=a��i+1��;a��i+1��=t;}   //������������λ�ã�ʹС���ϸ�
  cout<<"the sorted numbers ��"<<endl;
  for(i=1;i<n+1;i++)                      //���10����
    cout<<a��i��<<"   ";
  cout<<endl;
  system("pause");
  return 0;
}
  
  