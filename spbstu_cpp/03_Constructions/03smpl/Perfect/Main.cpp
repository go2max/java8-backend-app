#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout<<"����� ����������� �����. ������� ��������: ";
	cin>>n;
	if (n<6)
	{
		cout<<"����������� ����� �� �������"<<endl;
		return 0;
	}
	for (int i=6; i<=n; i++) // �����
	{
		int sum=1; // ����� ���������
		int max=(int)sqrt((float)i);
		for (int j=2; j<=max; j++)
		{
			if (i%j==0)
			{
				sum += j;
				if (i/j != j)
					sum += (i/j);
				// ����� �� ������� ��� �����
				if (sum > i)
					break;
			}
		}
		if (sum!=i)
			continue;
		cout<<i<<"=1+";
		sum=1;
		for (int j=2; j<=i/2; j++)
		{
			if (i%j==0)
			{
				cout<<j;
				sum += j;
				if (sum==i) // ���� ��������� �������� ������
				{
					cout<<endl;
					break;
				}
				else // �������� �� ���������
					cout<<"+";
			}
		}
	}
	return 0;
}

