#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
	int m, n; // ����� � �����
	setlocale(LC_ALL, "Russian");
	cout<<"����� ����� � �����"<<endl;
	cout<<"������� ����� � ����� >0, ����� ������: ";
	cin>>m>>n;
	if (m<0 || m>9 || n<0)
	{
		cout<<"������������ ������"<<endl;
		return 0;
	}
	int found=0; // ������� ��� ������� ����
	do
	{
		int d=n%10; // ��������� �����
		if (d==m)
			found++;
		n/=10;
	} while (n>0);
	cout<<"����� ������� "<<found<<" ����"<<endl;
	return 0;
}
