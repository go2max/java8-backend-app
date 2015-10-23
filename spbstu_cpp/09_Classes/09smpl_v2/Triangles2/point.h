#ifndef _POINT_H
#define _POINT_H

#include <iostream>
using namespace std;

struct Point
{
private:
   double x, y;
public:
   Point();
   // ���������� ����� ����� ������� �� �� �����������
   double calcDistance(const Point& p) const;
   // ���� �����
   friend istream& operator >>(istream& in, Point& p);
   // ����� �����
   friend ostream& operator <<(ostream& out, const Point& p);
};

#endif
