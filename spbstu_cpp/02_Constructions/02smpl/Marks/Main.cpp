#include <iostream>
#include <locale.h>
using namespace std;
// ������������ �������� ������
// �� �� ���������� ��������:
// 5 - �������, 4 - ������,
// 3 - �����������������,
// 2 - �������������������
int main(void)
{
   setlocale(LC_ALL, "Russian");
   int mark; // ������
   cout<<"������� ������: ";
   cin>>mark;
   switch(mark)
   {
      case 5: 
         cout<<"������ �������"<<endl;
         break;
      case 4:
         cout<<"������ ������"<<endl;
         break;
      case 3:
         cout<<"������ �����������������"<<endl;
         break;
      case 2:
         cout<<"������ �������������������"<<endl;
         break;
      default:
         cout<<"������ "<<mark<<" �� ������"<<endl;
   }
   return 0;
}
