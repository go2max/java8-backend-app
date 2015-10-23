#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
using namespace std;

// ���������� ��������� - ����. ����� ������
const int STR_LENGTH = 80;

// ������� ������ ��������� ������ �� �����
// in - ������ �� �����, ��������������� �����
// buffer - ������, ���� ������� �������� ���������
// ��������� - ������, ���� ������ ��������� �������
bool readLine(ifstream& in, char* buffer)
{
	buffer[0] = 0;
	in.getline(buffer, STR_LENGTH+1, '\n');
	if (in.fail())
	{
		if (buffer[0]>0)
			cout<<"������� ������� ������ �� ������� �����"<<endl;
		return false;
	}
	return true;
}

// ������� ������������� ������
// buffer - ������ �� �������, ������� ����������
void centerLine(char* buffer)
{
	// ����� ������
	int len=strlen(buffer);
	// �� ������� ��������
	int shift = (STR_LENGTH-len)/2;
	if (shift==0)
		return;
	// �������� len �������� + ����-������
	// ������� � ����������! (������?)
	for (int i=len; i>=0; i--)
		buffer[i+shift]=buffer[i];
	for (int i=0; i<shift; i++)
		buffer[i]=' ';
	return;
}

int main(void)
{
	setlocale(LC_ALL,"Russian");
	ifstream in("in.txt");
	if (!in.is_open())
	{
		cout<<"���� in.txt �� ����������"<<endl;
		return -1;
	}
	ofstream out("out.txt");
	if (!out.is_open())
	{
		cout<<"���������� ������� �������� ���� out.txt"<<endl;
		return -2;
	}
	char buffer[STR_LENGTH+1];
	while(readLine(in, buffer))
	{
		centerLine(buffer);
		out<<buffer<<endl;
	}
	cout<<"��������� ������� ���������!"<<endl;
	return 0;
}
				
	

