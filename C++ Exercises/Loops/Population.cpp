#include<iostream>
using namespace std;
int main()
{
	int pop, days;
	double percentageincrease, newpop, perpop; 
	cout << "Enter the population of organisms: ";
	cin >> pop;
	while (pop < 2)
	{
		cout << "Enter the starting size greater than 2: ";
		cin >> pop;
	}
	cout << endl;
	cout << "Enter the number of days you want to notice the increase: ";
	cin >> days;
	while (days < 1)
	{
		cout << "Enter the number of days greater than 1: ";
		cin >> days;
	}
	cout << endl;
	cout << "Enter the population increase: ";
	cin >> percentageincrease;
	while (percentageincrease < 0)
	{
		cout << "Do not enter a negative number: ";
		cin >> percentageincrease;
	}
	cout << endl;
	perpop = percentageincrease / 100.0;
	newpop = pop; 
	for (int i = 1; i <= days; i++)
	{ 
		cout << "Day " << i << " population increase was " << newpop << endl;
		newpop += (pop * perpop);
	}
	return 0;
}