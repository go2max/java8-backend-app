#include <locale.h>
#include <iostream>

using namespace std;

int main(void)
{
	cout<<"����������, ���!"<<endl;
	setlocale(LC_ALL, "Russian");
	cout<<"����������, ���!"<<endl;
	return 0;		
}