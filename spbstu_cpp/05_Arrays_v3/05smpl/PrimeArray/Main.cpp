#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ofstream out("prime.txt"); // ���� ��� ������
	const int PRIME_NUM = 300000; // ����� ����� �����
	int primeFound = 0; // ��� �������
	int primeArray[PRIME_NUM]; // ������ ������� �����
	int current = 2; // ������� ����������� �����
	int limit = 1; // ��������� ����������� ��������
	while (primeFound < PRIME_NUM) // ���� �� ����� ��� �����
	{
		bool isPrime = true; // ������� ��������
		if ((limit+1)*(limit+1)<=current)
			limit++; 
		for (int i=0; i<primeFound && primeArray[i]<=limit; i++)
			if (current%primeArray[i]==0)
			{
				// ���� ����������� �� �� �������			
				isPrime = false;
				break;
			}
		if (isPrime)
		{
			out<<current<<endl; // �����
			primeArray[primeFound++]=current; // ��������� � ������. ������
		}
		current++;
	}
	return 0;
}