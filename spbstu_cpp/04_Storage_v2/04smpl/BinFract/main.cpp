#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"�������������� � �������� �������"<<endl;
   double x;
   do
   {
      cout<<"������� ���. ����� 0<x<1: ";
      cin>>x;
   } while (x<=0 || x>=1);
   cout<<"�������� �����: 0.";
   for (int i=0; i<24; i++)
   {
      x *= 2;
      // ������� � �������� ����� �����
      cout<<(int)x;
      x -= (int)x;
      // ���� ����� ������� ���������, ��������� ����� =0
      if (x <= 1e-8)
         break;
   }
   cout<<endl;
   return 0;
}
