#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"�������������� � �������� �������"<<endl;
   int num;
   do
   {
      cout<<"������� ����� ����� >0: ";
      cin>>num;
   } while (num<=0);
   int binValue=0x40000000; // �������� ��������� �������
   cout<<"�������� �����: ";
   // ����� �� 2, ���� �� ������� ������� �����
   while (binValue > num)
      binValue >>= 1;
   while (binValue>0)
   {
      if (num >= binValue)
      {
         cout<<"1";
         num -= binValue;
      } 
      else
         cout<<"0";
      binValue >>= 1;
   }
   cout<<endl;
   return 0;
}