#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"����������� �������� �����"<<endl<<"������� �����: ";
   int i, n; // ����������� ����� � ������� �����
   cin>>n;
   if (n<1)
   {
      cout<<"����� "<<n<<" �� �������� �����������"<<endl;
      return 0;
   }
   if (n==1)
   {
      cout<<"1 �� �������� �� ������� ������, �� ���������"<<endl;
      return 0;
   }

   for (i=2; i<n; i++)
   {
      if (n%i==0)
         break;
   }
   // ���� ���� ���������� ��� ������ break, i ����� ����� n
   // � ��������� ������ i ����� ������
   if (i<n)
      cout<<"����� "<<n<<" ���������"<<endl;
   else
      cout<<"����� "<<n<<" �������"<<endl;
   return 0;
}
