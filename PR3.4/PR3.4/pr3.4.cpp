//Lab_03_4.cpp
//<������ ³�����>
//����������� ������ �3.4
//������������ ������ ������� �������.
//������ 5

#include <iostream>
using namespace std;

int main()
{
	double x;//������� ��������
	double y;//������� ��������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	//������������ � ����� ����
	if ((x*x+y*y >= R*R && x>=1 && y>=1) || 
		(x*x+y*y >= R*R && x<=-1 && y<=-1) || 
		(x<=-1 && x<0 && y>=1))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;

}