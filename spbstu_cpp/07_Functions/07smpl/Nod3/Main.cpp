#include <iostream>
#include <locale.h>
using namespace std;

int getNOD(int a, int b)
{
   while(a!=b)
   {
      if (a<b)
         b=b-a;
      else
         a=a-b;
   }
   return a;
}

int main(void)
{
   setlocale(LC_ALL, "Russian");
   cout<<"����� ��� 3 �����"<<endl;
   int a=0,b=0,c=0;
   do
   {
      cout<<"������� ����������� A, B, C:";
      cin>>a>>b>>c;
   } while (a<=0 || b<=0 || c<=0);
   int result=getNOD(getNOD(a,b),c);
   cout<<"���("<<a<<","<<b<<","<<c<<")="<<result<<endl;
   return 0;
}