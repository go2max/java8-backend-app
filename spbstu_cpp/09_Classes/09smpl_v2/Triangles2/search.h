#ifndef _SEARCH_H
#define _SEARCH_H

#include "point.h"
#include "triangle.h"

// ����� ������������� ������������ �������
void searchLargestTriangles(const Point* pointArray, int pointNum,
                            Triangle* trArray, int maxTrNum);

#endif