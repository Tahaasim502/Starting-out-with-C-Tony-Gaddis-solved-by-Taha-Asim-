#include<iostream>
using namespace std;
void sizePopulation()
{
	double startingsize, yearsdisplay, n = 0;
	double  brate, drate;
	cout << "Enter the starting size of the population: ";
	cin >> startingsize;
	while (startingsize < 2)
	{
		cout << "Do not enter a number less than 2!, please re-enter: ";
		cin >> startingsize;
	}
	cout << "Enter the birth rate of the population: ";
	cin >> brate;
	while (brate < 0)
	{
		cout << "Error, make sure no negative number is entered: ";
		cin >> brate;
	}
	cout << "Enter the death rate of the population: ";
	cin >> drate;
	while (drate < 0)
	{
		cout << "Error, make sure no negative number is entered: ";
		cin >> drate;
	}
	cout << "Enter the number of years you want to display the population for: ";
	cin >> yearsdisplay;
	while (yearsdisplay < 1)
	{
		cout << "Error, make sure a number less than 1 is not entered re-enter: ";
		cin >> yearsdisplay;

	}
	n = startingsize;
	for (int i = 1; i <= yearsdisplay; i++)
	{
		n = n + ((brate / 100.0) * startingsize) - ((drate / 100.0) * startingsize);
		cout << "The population size for " << i << " year " << n;
		cout << endl;
	}
}
int main()
{
	sizePopulation();
	return 0;
}
