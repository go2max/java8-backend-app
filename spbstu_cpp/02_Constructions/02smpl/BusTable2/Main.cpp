#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

const int minInHour = 60; // ����� � ����

void printTime(int time)
{
	cout<<setw(2)<<time/minInHour<<":";
	cout<<setw(2)<<time%minInHour;
}

int main(void)
{
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
		printTime(currTime);
		cout<<"->";
		currTime += inWayTime;
		printTime(currTime);
		cout<<"   ";
		currTime += restTime;
		printTime(currTime);
		cout<<"->";
		currTime += inWayTime;
		printTime(currTime);
		cout<<endl;
		currTime += restTime;
	}
	return 0;
}
	