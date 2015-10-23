#ifndef _GEOMETRY_H
#define _GEOMETRY_H

#include <iostream>
using namespace std;

struct Point
{
   double x, y;
};

struct Triangle
{
   Point vertexes[3];
   double area;
};

void clearPoint(Point& p);

void clearTriangle(Triangle& tr);

// ���������� ����� ����� ������� �� �� �����������
double calcDistance(const Point& pa, const Point& pb);

// ������� ������������ �� ����������� �����
double calcTriangleArea(Triangle& tr);

// ���� �����
istream& operator >>(istream& in, Point& p);

// ����� �����
ostream& operator <<(ostream& out, const Point& p);

// ����� ������������
ostream& operator <<(ostream& out, const Triangle& tr);

// ��������� �������������
bool operator <=(const Triangle& tr1, const Triangle& tr2);

#endif