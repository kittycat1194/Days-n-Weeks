#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	int totalDays;
	cout << "Please enter your days: \n";
	cin >> totalDays;
	int weeks = totalDays / 7;
	int days = totalDays % 7;
	cout << "It makes " << weeks << " week(s) and " << days << " day(s).\n";
	_getch();
}