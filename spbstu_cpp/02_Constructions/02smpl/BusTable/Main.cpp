#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(void)
{
	const int minInHour = 60; // ����� � ����
	const int startTime = 7*minInHour; // ����� ������
	const int endTime = 19*minInHour; // ����� ���������
	int inWayTime, restTime; // ����� � ����, ����� ������
	setlocale(LC_ALL, "Russian");
	cout<<"���������� ���������� �������� ���������"<<endl;
	cout<<"������� ����� � ���� �� A �� B � �������: ";
	cin>>inWayTime;
	cout<<"������� ����� ������ �� ���������� � �������: ";
	cin>>restTime;
	cout<<endl<<"���������� ��������"<<endl;
	cout<<"����� A        ����� B"<<setfill('0')<<endl<<endl;
	int currTime = startTime;
	while (currTime + 2*inWayTime + restTime < endTime)
	{
		cout<<setw(2)<<currTime/minInHour<<":";
		cout<<setw(2)<<currTime%minInHour<<"->";
		currTime += inWayTime;
		cout<<setw(2)<<currTime/minInHour<<":";
		cout<<setw(2)<<currTime%minInHour<<"   ";
		currTime += restTime;
		cout<<setw(2)<<currTime/minInHour<<":";
		cout<<setw(2)<<currTime%minInHour<<"->";
		currTime += inWayTime;
		cout<<setw(2)<<currTime/minInHour<<":";
		cout<<setw(2)<<currTime%minInHour<<endl;
		currTime += restTime;
	}
	return 0;
}
	