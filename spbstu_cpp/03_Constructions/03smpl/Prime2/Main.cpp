#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"����������� �������� �����"<<endl<<"������� �����: ";
   int n; // ����������� �����
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
   bool isPrime=true;
   // ���� � ������ ����� (!!!)
   for (int i=2; i<=n/2 && (isPrime=(n%i > 0)); i++);
   if (isPrime)
      cout<<"����� "<<n<<" �������"<<endl;
   else
      cout<<"����� "<<n<<" ���������"<<endl;
   return 0;
}
