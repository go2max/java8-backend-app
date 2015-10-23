#include "Field.h"
#include <iostream>

using namespace std;

Field::Field(bool isRedFirst)
{
   clear(isRedFirst);
}

void Field::clear(bool isRedFirst)
{
   isRedTurn = isRedFirst;
   winner = EMPTY;
   for (int i=0; i<FIELD_WIDTH; i++)
      for (int j=0; j<FIELD_HEIGHT; j++)
         cells[i][j] = EMPTY;
}

bool Field::makeTurn(int column)
{
   // ���� ���-�� ��� �������, ��� ����������
   if (winner != EMPTY)
      return false;
   // �������� ������ ������� �� ������������
   if (column < 1 || column > FIELD_WIDTH)
      return false;
   int i=column-1;
   for (int j=0; j<FIELD_HEIGHT; j++)
      // ���� ������ ��������� ������
      if (cells[i][j]==EMPTY)
      {
         cells[i][j] = isRedTurn ? RED : YELLOW;
         // ���������, �� ������� �� ���
         checkWinner();
         isRedTurn = !isRedTurn;
         return true;
      }
   return false;
}

const int DIR_NUMBER = 4;

const int di[] = { 1, 0, 1, 1 };

const int dj[] = { 0, 1, -1, 1 };

const int WIN_LENGTH = 4;

void Field::checkWinner()
{
   // ������� ���� �����, ������ �������� ����������
   for (int i=0; i<FIELD_WIDTH; i++)
      for (int j=0; j<FIELD_HEIGHT; j++)
      {
         Cell start = cells[i][j];
         // �������� �� ����� ����������
         // �� ������ ������
         if (start==EMPTY)
            continue;
         for (int dir=0; dir<DIR_NUMBER; dir++)
         {
            // ������� ����� �����
            int length=0;
            // ������� ������ �����
            int iline = i, jline = j;  
            while (++length < WIN_LENGTH)
            {
               iline += di[dir];
               jline += dj[dir];
               // ����� �� �������
               if (iline < 0 || iline >= FIELD_WIDTH ||
                   jline < 0 || jline >= FIELD_HEIGHT)
                  break;
               // ������ ����
               if (cells[iline][jline]!=start)
                  break;
            }
            if (length==WIN_LENGTH)
            {
               winner = start;
               return;
            }
         }
      }
}

bool Field::isWon(bool red) const
{
   return red ? (winner==RED) : (winner==YELLOW);
}

bool Field::isOver() const
{
   if (winner != EMPTY)
      return true;
   for (int i=0; i<FIELD_WIDTH; i++)
      for (int j=0; j<FIELD_HEIGHT; j++)
         // ���� ���� ���� ������ ��������,
         // ���� �� ��������
         if (cells[i][j]==EMPTY)
            return false;
   // ��� ������ ������
   return true;
}

Cell Field::getCell(int i, int j) const
{
   if (i<=0 || i>FIELD_WIDTH ||
       j<=0 || j>FIELD_HEIGHT)
       return EMPTY;
   return cells[i-1][j-1];
}

bool Field::isRedTurnNow() const
{
   return isRedTurn;
}

char sym[] = { '.', 'R', 'Y' };

void Field::print() const
{
   cout<<"1-2-3-4-5-6-7-"<<endl;
   for (int j=FIELD_HEIGHT-1; j>=0; j--)
   {
      for (int i=0; i<FIELD_WIDTH; i++)
      {
         cout<<sym[cells[i][j]]<<" ";
      }
      cout<<endl;
   }
   cout<<"1-2-3-4-5-6-7-"<<endl;
}

void Field::printResult() const
{
   if (isWon(true))
   {
      cout<<"������� ������� �����"<<endl;
   }
   else if (isWon(false))
   {
      cout<<"������� ������ �����"<<endl;
   }
   else if (isOver())
   {
      cout<<"�����"<<endl;
   }
   else
   {
      cout<<"������ �� ���������"<<endl;
   }
}
