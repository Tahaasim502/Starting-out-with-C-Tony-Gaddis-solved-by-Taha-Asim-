#include<iostream>
using namespace std;
int totalCharges(int days, int dailycharge, int hospitalcharges, int hospitalservices)
{
	int totalcharges = (dailycharge * days) + hospitalcharges + hospitalservices;
	return totalcharges;
}
int totalCharges(int hservices, int hmedicalcharges)
{
	int total_charges = hmedicalcharges + hservices;
	return total_charges;
}
int main()
{
	string type_patient;
	int total;
	cout << "Was the patient addmited as in-patient or out-patient: ";
	cin >> type_patient;
	if (type_patient == "in-patient")
	{
		int days, dailycharge, hospitalcharges, hospitalservices;
		cout << "Enter the days you have spent in the hospital: ";
		cin >> days;
		while (days < 0)
		{
			cout << "Error, Make sure no negative number is entered: ";
			cin >> days;
		}
		cout << "What were the daily charges per day: ";
		cin >> dailycharge;
		while (dailycharge < 0)
		{
			cout << "Error, Make sure no negative number is entered: ";
			cin >> dailycharge;
		}
		cout << "How much were the total medication charges: ";
		cin >> hospitalcharges;
		while (hospitalcharges < 0)
		{
			cout << "Error, Make sure no negative number is entered: ";
			cin >> hospitalcharges;
		}
		cout << "How much were total charges for the service: ";
		cin >> hospitalservices;
		while (hospitalservices < 0)
		{
			cout << "Error, Make sure no negative number is entered: ";
			cin >> hospitalservices;
		}
		total = totalCharges(days, dailycharge, hospitalcharges, hospitalservices); 
	}
	else
	{
		int hservices, hmedicalcharges; 
		cout << "Enter the total charges for hospital services: ";
		cin >> hservices; 
		while (hservices < 0) 
		{
			cout << "Error, make sure no negative number is entered: ";
			cin >> hservices; 
		}
		cout << "Enter the total medication charges: ";
		cin >> hmedicalcharges; 
		while (hmedicalcharges < 0) 
		{
			cout << "Error, make sure no negative number is entered: ";
			cin >> hmedicalcharges;
		}
		total = totalCharges(hservices, hmedicalcharges); 
	}
	cout << "The total charges for the patient are $" << total;
	return 0;
}