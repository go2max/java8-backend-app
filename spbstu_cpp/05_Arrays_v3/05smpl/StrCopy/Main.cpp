#include <iostream>
using namespace std;
int main(void)
{
   char src[] = "Some string";
   char dst[20];
   // ����������� ����� ����������
   int i;
   for (i=0; src[i]!=0; i++)
      dst[i]=src[i];
   dst[i]=0;
   cout<<dst<<endl;
   // ����������� ����� ��������� I
   const char* psrc=src; // ����������� ���������
   char* pdst=dst;
   while (*psrc)
      *pdst++ = *psrc++;
   *pdst = 0;
   cout<<dst<<endl;
   // ����������� ����� ��������� II
   psrc=src;
   pdst=dst;
   while (*pdst++ = *psrc++);
   cout<<dst<<endl;
   return 0;
}
