#include <assert.h>
#include <iostream>
#include <fstream>
using namespace std;     
// ��������� - ������������ ����� � �������
int findMax(const int* arr, int length)
{
   assert(length>0);
   int max=arr[0];
   for (int i=1; i<length; i++)
   {
      if (arr[i]>max)
         max=arr[i];
   }
   return max;
}
// ��������� - ����� ����������� ���������
// 0 - ������
int readArray(const char* fileName, int* arr, int maxLength)
{
   ifstream in(fileName);
   if (!in.is_open())
      return 0;
   int elem; // �������� �������
   for (int i=0; i<maxLength; i++)
   {
      in>>elem; // ������ ���������� ��������
      if (in.fail()) // �� ������� ���������
         return i;
      arr[i]=elem;
   }
   return maxLength;
}

int main(void)
{
   setlocale(LC_ALL, "Russian");
   int arr[50];
   int length=readArray("in.txt", arr, 50);
   if (length<=0)
   {
      cout<<"������ �� ��������, ��������� ��������!"<<endl;
      return -1;
   }
   cout<<"��������� "<<length<<" ���������"<<endl;
   int max=findMax(arr,length);
   cout<<"�������� ����� "<<max<<endl;
   return 0;
}
