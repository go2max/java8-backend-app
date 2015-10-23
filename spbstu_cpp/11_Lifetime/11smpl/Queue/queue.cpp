#include "queue.h"

const int MAX_SIZE=100;

// ���������� �������
static int content[MAX_SIZE];
// ������ �������
static int size = 0;
// ������� ��� ������ � ������ �����
static int readIndex = 0, writeIndex = 0;

bool putInteger(int number)
{
   if (size==MAX_SIZE)
      return false;
   size++;
   content[writeIndex++]=number;
   if (writeIndex==MAX_SIZE)
      writeIndex=0;
   return true;
}

bool getInteger(int* pNumber)
{
   if (size==0)
      return false;
   size--;
   *pNumber = content[readIndex++];
   if (readIndex==MAX_SIZE)
      readIndex=0;
   return true;
}