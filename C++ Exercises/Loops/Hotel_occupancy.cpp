#include<iostream>
using namespace std;
int main()
{
	int floor, rooms, occupied, unoccupied, trooms = 0, toccupied = 0, tunocuppied = 0;
	double percentage;
	cout << "How many floors does the hotel has: ";
	cin >> floor;
	while (floor <= 1)
	{
		cout << "Please re-enter the correct number of floors: ";
		cin >> floor;
	}
	cout << endl;
	for (int i = 1; i <= floor; i++)
	{
		if (i != 13)
		{
			cout << "Enter the number of rooms for " << i << " floor: ";
			cin >> rooms;
			while (rooms <= 10)
			{
				cout << "Please re-enter the correct number of rooms for " << i << " floor: ";
				cin >> rooms;
			}
			trooms += rooms; 
			cout << "Enter the number of rooms occupied for " << i << " floor: ";
			cin >> occupied;
			cout << endl;
			toccupied += occupied;
		}
		else
		{
			continue;
		}
	}
	tunocuppied = trooms - toccupied; 
	percentage = (static_cast<double>(toccupied) / trooms) * 100; 
	cout << endl; 
	cout << "The total number of rooms in the hotel are " << trooms << endl;
	cout << "The number of occupied rooms are " << toccupied << endl;
	cout << "The number of unoccupied rooms are " << tunocuppied << endl;
	cout << "The percentage of the rooms occupied are " << percentage << endl; 
}