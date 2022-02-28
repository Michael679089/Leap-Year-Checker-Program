/* TODO:
1. Assign true to the boolean variable leapYear if the integer variable year
is a leap year.
"(A leap year is a multiple of 4, and if it is a multiple of 100, it must also be a multiple of 400.)"
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	bool leapYear;
	int Year;

	cout << "Type any year: ";
	cin >> Year;

	/** If leapYear **/
	leapYear = Year % 4 % 100 % 400;
	if (leapYear == 0)
	{
		cout << "This is a leap year." << endl;
	}
	else
	{
		cout << "This is NOT a leap year." << endl;
	}
	cout << "Result from calculation (must be 0 for a leapyear): " << leapYear;
	return leapYear;
}
