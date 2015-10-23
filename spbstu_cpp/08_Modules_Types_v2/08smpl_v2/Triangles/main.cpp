#include "file.h"
#include "search.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	if (argc < 2)
	{
		cout<<"������ �������: Triangles.exe infile.txt outfile.txt"<<endl;
		return -1;
	}
	const char* inFileName = argv[1];  // ��� �������� �����
	const char* outFileName = argv[2]; // ��� ��������� �����
	int pointNum = countPoints(inFileName);
	if (pointNum < 4)
	{
		cout<<"������� ���� �� ���������� ��� � ��� ������� ���� �����"<<endl;
		return -2;
	}
	double* px = new double[pointNum];
	double* py = new double[pointNum];
	if (!readPoints(inFileName, px, py, pointNum))
	{
		cout<<"����������� ������ ��� ����� ����� �� �����"<<endl;
		return -3;
	}
	const int maxTrNum = 3;
	double trX[maxTrNum][3], trY[maxTrNum][3];
	searchLargestTriangles(px, py, pointNum, trX, trY, maxTrNum);
	if (!writeTriangles(outFileName, trX, trY, maxTrNum))
	{
		cout<<"�� ������� �������� ��������� � �������� ����"<<endl;
		return -4;
	}
	cout<<"��������� ������� ���������"<<endl;
	delete[] px;
	delete[] py;
	return 0;
}