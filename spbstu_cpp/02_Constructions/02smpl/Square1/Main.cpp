#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
// ��������� ����� ax2+bx+c=0
int main(void)
{
   double a, b, c;
   cout<<"Decision of ax^2+bx+c=0, enter a, b, c: ";
   cin>>a>>b>>c;
   double x1, x2, d;
   d=sqrt(b*b-4*a*c); // ������ �� ������������, ������� ������
   x1=(-b+d)/2*a; // ������� ������, ������� ������
   x2=(-b-d)/2*a; // ������� ������, ������� ������
   cout<<"x1="<<x1<<" x2="<<x2<<endl;
   cout<<"PI="<<M_PI<<endl;
   return 0;
}
