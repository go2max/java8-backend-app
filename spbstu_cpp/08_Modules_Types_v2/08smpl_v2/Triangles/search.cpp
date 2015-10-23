#include "search.h"
#include "geometry.h"

// ������ arr[] ���������� �� �������� � ����� ����� length
// ����, ���� � ���� �������� �������� value
// ��������� �� 0 �� length
int findPosition(double* arr, int length, double value)
{
   int pos;
   for (pos=length-1; pos>=0; pos--)
   {
      if (value <= arr[pos])
         break;
   }
   return pos+1;
}

// ������ arr[] ����� ����� length
// �������� � ���� ������� value �� ������� pos,
// ������� ��������� �������� ������
// (� ��������� ���������)
void insertElement(double* arr, int length, double value, int pos)
{
   for (int m=length-2; m>=pos; m--)
      arr[m+1]=arr[m];
   arr[pos]=value;
}

// ������ arr[][3] ����� ����� length
// �������� � ���� ������� value �� ������� arr[pos][npoint],
// ������� ��������� �������� ������
// (� ��������� ���������)
void insertElement(double arr[][3], int length, double value, int pos, int npoint)
{
   for (int m=length-2; m>=pos; m--)
      arr[m+1][npoint]=arr[m][npoint];
   arr[pos][npoint]=value;
}

void searchLargestTriangles(const double* px, const double* py, int pointNum, 
							double tx[][3], double ty[][3], int maxTrNum)
{
	if (maxTrNum <= 0)
		return;
	double* maxTrArea = new double[maxTrNum];
	for (int i=0; i<maxTrNum; i++)
	{
		maxTrArea[i] = 0.0;
		for (int j=0; j<3; j++)
		{
			tx[i][j] = 0.0;
			ty[i][j] = 0.0;
		}
	}
	// ������� ����� �����
	for (int i=0; i<pointNum; i++)
	{
		for (int j=i+1; j<pointNum; j++)
		{
			for (int k=j+1; k<pointNum; k++)
			{
				double currArea = calcAreaByPoints(px[i], py[i], px[j], py[j], px[k], py[k]);
            // ���������� �������
				int numInMax = findPosition(maxTrArea, maxTrNum, currArea);
				if (numInMax==maxTrNum)
					continue;
            // � ��������� �������
            insertElement(maxTrArea, maxTrNum, currArea, numInMax);
            insertElement(tx, maxTrNum, px[i], numInMax, 0);
            insertElement(tx, maxTrNum, px[j], numInMax, 1);
            insertElement(tx, maxTrNum, px[k], numInMax, 2);
            insertElement(ty, maxTrNum, py[i], numInMax, 0);
            insertElement(ty, maxTrNum, py[j], numInMax, 1);
            insertElement(ty, maxTrNum, py[k], numInMax, 2);
			}
		}
	}
	delete[] maxTrArea;
}