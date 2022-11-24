//Lab_03_4.cpp
//<Стецко Вікторія>
//Лабораторна робота №3.4
//Розгалуження задане плоскою фігурою.
//Варіант 5

#include <iostream>
using namespace std;

int main()
{
	double x;//вхідний аргумент
	double y;//вхідний аргумент

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	//розгалуження в повній формі
	if ((x*x+y*y >= R*R && x>=1 && y>=1) || 
		(x*x+y*y >= R*R && x<=-1 && y<=-1) || 
		(x<=-1 && x<0 && y>=1))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;

}