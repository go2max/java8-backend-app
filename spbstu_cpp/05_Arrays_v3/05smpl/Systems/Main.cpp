#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"������� ����� ����� �� p-����� ������� � 10-���"<<endl;
   int p; 
   do
   {
      cout<<"������� ��������� ������� p (2...36): ";
      cin>>p;
   } while (p<2 || p>36);
   const int MAX_LEN = 30; // ������������ ����� �����
   cout<<"������� ����� (�� ����� "<<MAX_LEN<<" ������): ";
   char x[MAX_LEN+1];
   // ������ ��� ��� �������� ��� ���������� �������� ������
   cin.getline(x, 1, '\n');
   // ������ ��� ���������� ����
   cin.getline(x, MAX_LEN+1, '\n');
   int n=0; // ����� � 10-��� �������
   for (int i=0; x[i]!=0; i++) // ������� ������ ����� �� ����-�������
   {
      n *= p;
      int d=-1; // �����
      if (x[i]>='0' && x[i]<='9')         
         d=x[i]-'0'; // '0'...'9' => 0...9
      else if (x[i]>='a' && x[i]<='z')         
         d=10+x[i]-'a'; // 'a'...'z' => 10...35
      else if (x[i]>='A' && x[i]<='Z')         
         d=10+x[i]-'A'; // 'A'...'Z' => 10...35       
      if (d<0 || d>=p) // �������� ������������
      {
         cout<<"����� "<<x[i]<<" �����������"<<endl;
         return 0;
      }
      n += d;
   }
   cout<<"����� � ���������� �������: "<<n<<endl;
   return 0;
}
