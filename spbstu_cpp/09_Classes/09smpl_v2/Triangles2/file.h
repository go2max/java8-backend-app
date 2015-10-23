#ifndef _FILE_H
#define _FILE_H

#include "point.h"
#include "triangle.h"

// ������� ����� ����� �� ������� �����
int countPoints(const char* fileName);

// ������ ����� �� �������� �����
bool readPoints(const char* fileName, Point* pointArray, int maxPointNum);

// ����� ������������� � �������� ����
bool writeTriangles(const char* fileName, const Triangle* trArray, int trNum);

#endif