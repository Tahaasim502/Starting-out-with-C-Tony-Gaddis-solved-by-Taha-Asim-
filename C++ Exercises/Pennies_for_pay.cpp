#include<iostream>
using namespace std;
int main()
{
	int pennies, days, final_amount = 0;
	double dollars = 0;
	cout << "Enter the number of days you work: ";
	cin >> days;
	cout << "Enter the pennies you earn: ";
	cin >> pennies;
	while (pennies < 1)
	{
		cout << "Enter the correct amount of pennies: ";
		cin >> pennies;
	}
	for (int i = 1; i <= days; i++)
	{
		cout << "The salary on " << i << " day is " << pennies << endl;
		final_amount = pennies + final_amount;
		pennies = pennies * 2;
	}
	dollars = final_amount / 100.0;
	cout << "The total salary earned for " << days << " day(s) is " << dollars;
}