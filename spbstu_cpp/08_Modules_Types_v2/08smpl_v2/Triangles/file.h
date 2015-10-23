#ifndef _FILE_H
#define _FILE_H

// ������� ����� ����� �� ������� �����
int countPoints(const char* fileName);

// ������ ����� �� �������� �����
bool readPoints(const char* fileName, double* px, double* py, int maxPointNum);

// ����� ������������� � �������� ����
bool writeTriangles(const char* fileName, const double tx[][3], const double ty[][3], int trNum);

#endif