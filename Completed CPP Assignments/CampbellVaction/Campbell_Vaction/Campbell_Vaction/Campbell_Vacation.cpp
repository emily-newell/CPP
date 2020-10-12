/* Emily Campbell
* 10/10/2020
* Assignment 5
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int vacationInt = 0;
	string vacationString;
	string vacationDepartureMonth;
	int vacationDepartureDay, vacationDepartureYear;
	string frankFirstName = "", frankLastName = "", wifeFirstName = "", wifeLastName = "", sonFirstName = "", sonLastName = "", daughterFirstName = "", daughterLastName = "";
	int frankAge = 0, wifeAge = 0, sonAge = 0, daughterAge = 0;

	do {
		cout << "Enter a number between 1 and 6: ";
		cin >> vacationInt;

	} while (vacationInt < 1 || vacationInt > 6);



	switch (vacationInt)
	{
	case 1:
		vacationString = "Hawaii - 7 days / 6 nights";
		break;

	case 2:
		vacationString = "New York - 3 days / 2 nights";
		break;

	case 3:
		vacationString = "London - 7 days / 6 nights";
		break;

	case 4:
		vacationString = "Bahamas - 7 days / 6 nights";
		break;

	case 5:
		vacationString = "Miami - 3 days / 2 nights";
		break;

	case 6:
		vacationString = "Los Angeles - 3 days / 2 nights";
		break;

	default:
		vacationString = "Stay Home - 7 days / 6 nights";


	}

	cout << "You chose the vacation: " << vacationString << endl;

	for (int familyNum = 1; familyNum < 5; familyNum++)
	{
		if (familyNum == 1)
		{
			cout << "Enter your first name: ";
			cin >> frankFirstName;
			cout << "Enter your last name: ";
			cin >> frankLastName;
			cout << "Enter your age: ";
			cin >> frankAge;

		}
		else if (familyNum == 2)
		{
			cout << "Enter your wife's first name: ";
			cin >> wifeFirstName;
			cout << "Enter your wife's last name: ";
			cin >> wifeLastName;
			cout << "Enter your wife's age: ";
			cin >> wifeAge;
		}
		else if (familyNum == 3)
		{
			cout << "Enter your son's first name: ";
			cin >> sonFirstName;
			cout << "Enter your son's last name: ";
			cin >> sonLastName;
			cout << "Enter your son's age: ";
			cin >> sonAge;
		}
		else
		{
			cout << "Enter your daughter's first name: ";
			cin >> daughterFirstName;
			cout << "Enter your daughter's last name: ";
			cin >> daughterLastName;
			cout << "Enter your daughter's age: ";
			cin >> daughterAge;
		}
	}


	cout << "Enter your departure month of your vacation: ";
	cin >> vacationDepartureMonth;
	cout << "Enter your departure day of your vacation: ";
	cin >> vacationDepartureDay;
	cout << "Enter your departure year of your vacation: ";
	cin >> vacationDepartureYear;


	cout << "Congratulations! You and your family are going to " << vacationString << ".\n" <<
		frankFirstName << "\t" << frankLastName << "\t" << frankAge << "\n" <<
		wifeFirstName << "\t" << wifeLastName << "\t" << wifeAge << "\n" <<
		sonFirstName << "\t" << sonLastName << "\t" << sonAge << "\n" <<
		daughterFirstName << "\t" << daughterLastName << "\t" << daughterAge << "\n" <<
		"Your departure date is: " << vacationDepartureMonth << " " << vacationDepartureDay << ", " << vacationDepartureYear << ".\n";

	system("pause");
	return 0;
}