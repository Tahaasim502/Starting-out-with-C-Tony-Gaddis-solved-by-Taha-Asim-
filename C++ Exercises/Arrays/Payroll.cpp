#include<iostream>
using namespace std;
int main()
{
	int empid[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	int hours[7];
	double payrate[7], wages[7];
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter the hours worked for employee number " << empid[i] << " : ";
		cin >> hours[i];
		while (hours[i] < 0)
		{
			cout << "Enter positive number for hours worked: ";
			cin >> hours[i];
		}
		cout << "Enter the pay rate for employee number " << empid[i] << " : ";
		cin >> payrate[i];
		while (payrate[i] < 15)
		{
			cout << "Enter the pay rate greater than 15: ";
			cin >> payrate[i];
		}
	}
	cout << endl; 
	for (int i = 0; i < 7; i++)
	{
		wages[i] = hours[i] * payrate[i];
		cout << "The total wage for employee number " << empid[i] << " is " << wages[i] << endl;
	}
}