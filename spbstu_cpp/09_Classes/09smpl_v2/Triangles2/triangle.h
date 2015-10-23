#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include "point.h"
#include <iostream>
using namespace std;

struct Triangle
{
   Point vertexes[3];
   double area;
   // �������
   Triangle();
   // ������ �������
   double calcArea();
   // ��������� ��������
   bool operator <=(const Triangle& tr) const;
   // ����� ������������
   friend ostream& operator <<(ostream& out, const Triangle& tr);
};

#endif