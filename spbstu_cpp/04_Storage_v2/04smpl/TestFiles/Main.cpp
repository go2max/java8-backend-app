#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   // �������� �������� ����� in.txt
   ifstream in("in.txt");
   if (!in.is_open()) // ������� �� ��������
   {
      cout<<"������: ���� in.txt �� ����������"<<endl;
      return -1;
   }
   int a, b, c;
   // ���� ���� ����� ����� �� �����
   in>>a>>b>>c;
   if (in.fail()) // �� ��������� �� ������
   {
      cout<<"������: ����� �� ���������"<<endl;
      return -2;
   }
   cout<<"��������� �����: "<<a<<", "<<b<<", "<<c<<endl;
   // �������� ��������� ����� out.txt
   ofstream out("out.txt");
   if (!out.is_open())
   {
      cout<<"������: �� ������� �������� ���� out.txt"<<endl;
      return -3;
   }
   // ����� a+b+c=sum
   out<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<endl;
   cout<<"��������� ������� ���������!"<<endl;
   return 0;
}
   
