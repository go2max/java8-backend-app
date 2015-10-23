#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;
int main(void)
{
   setlocale(LC_ALL, "Russian");
   int m, n;
   ifstream in("in.txt");
   if (!in.is_open())
   {
      cout<<"���� in.txt �� ����������"<<endl;
      return -1;
   }
   in>>m>>n;
   if (in.fail() || m<1 || n<1)
   {
      cout<<"������������ �����������"<<endl;
      return -2;
   }
   double** matrix = new double*[m];
   for (int i=0; i<m; i++)
      matrix[i] = new double[n];
   for (int i=0; i<m; i++)
      for (int j=0; j<n; j++)
         in>>matrix[i][j];
   if (in.fail())
   {
      cout<<"�� ������� ��������� �������"<<endl;
      return -3;
   }
   ofstream out("out.txt");
   if (!out.is_open())
   {
      cout<<"�� ������� ������� ���� out.txt"<<endl;
      return -4;
   }
   for (int j=0; j<n; j++)
   {
      for (int i=0; i<m; i++)
         out<<matrix[i][j]<<" ";
      out<<endl;
   }
   // ����������� � �������� �������
   for (int i=0; i<m; i++)
      delete[] matrix[i];
   delete[] matrix;
   cout<<"��������� ��������� �������"<<endl;
   return 0;
}

