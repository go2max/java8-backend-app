#include "Field.h"
#include <iostream>
#include <locale.h>

using namespace std;

// ��������� ������� ����
// ������ ������� ������� ���������� ���� ������
// 0 � ������ ������� - ��������� �������
// ���� �� 1 �� 7
// ������� ������������� ������������� ������,
// ������������ ����
// -1 ������ �� ���������
// -2 ������ ��������
// -3 ������ �������
// -4 �����
int turns[] = 
{
   4, 4, 4, -1,
   4, 3, 5, 2, 6, 1, 7, -2,
   4, 3, 4, 3, 4, 3, 5, 3, -3,
   1, 2, 2, 3, 4, 3, 3, 4, 5, 4, 4, -2,
   1, 2, 1, 2, 1, 2, 3, 4, 3, 4, 3, 4, 5, 6, 5, 6, 5, 6,
   2, 1, 2, 1, 2, 1, 4, 3, 4, 3, 4, 3, 6, 5, 6, 5, 6, 5, 
   7, 7, 7, 7, 7, 7, -4,
   0
};

bool test(void)
{
   int i=0;
   // ���� �� �������
   int game=1;
   int turn=1;
   Field field(true);
   while (turns[i] != 0)
   {
      while (turns[i] > 0)
      {
         if (!field.makeTurn(turns[i]))
         {
            cout<<"������ �����: ��� ����������"<<endl;
            cout<<"������ "<<game<<" ��� "<<turn<<endl;
            return false;
         }
         i++;
         turn++;
      }
      cout<<"�������� ������ "<<game<<" �������"<<endl;
      field.printResult();
      switch (turns[i])
      {
      case -1:
         if (field.isOver())
         {
            cout<<"������ �����: ������� ������������� ������"<<endl;
            field.print();
            return false;
         }
         break;
      case -2:
         if (!field.isWon(true))
         {
            cout<<"������ �����: ������� ������ ��������"<<endl;
            field.print();
            return false;
         }
         break;
      case -3:
         if (!field.isWon(false))
         {
            cout<<"������ �����: ������� ������ �������"<<endl;
            field.print();
            return false;
         }
         break;
      case -4:
         if (field.isWon(true) || field.isWon(false) || !field.isOver())
         {
            cout<<"������ �����: ������� �����"<<endl;
            field.print();
            return false;
         }
         break;
      }
      i++;
      game++;
      turn = 1;
      field.clear(true);
   }
   cout<<"����� ������� "<<game-1<<" �������� ������"<<endl;
   return true;
}


int main(void)
{
   setlocale(LC_ALL, "Russian");
   if (!test())
      return -1;
   Field field(true);
   while (!field.isOver())
   {
      field.print();
      cout<<"����� "<<
         (field.isRedTurnNow() ? "�������" : "������")<<
         " �����, ������� ��� (1-7)"<<endl;
      int column;
      cin>>column;
      field.makeTurn(column);
   }
   field.printResult();
   return 0;
}