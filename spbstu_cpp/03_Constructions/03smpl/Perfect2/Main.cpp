#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

bool isPerfect(int n)
{
    int sum=1; // ����� ���������
    for (int j=2; j<=n/2; j++)
    {
        if (n%j == 0)
        {
            sum += j;
            // ����� �� ������� ��� �����
            if (sum > n)
                return false;
        }
    }
    return sum == n;
}

void printPerfect(int n)
{
    cout<<n<<"=1+"; int sum=1;
    for (int j=2; j<=n/2; j++)
        if (n%j == 0)
        {
            cout<<j;
            sum += j;
            if (sum == n) // ���� ��������� �������� ������
            {
                cout<<endl;
                return;
            }
            else cout<<"+"; // �������� �� ���������
        }
}


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
		if (isPerfect(i))
			printPerfect(i);
	}
	return 0;
}

