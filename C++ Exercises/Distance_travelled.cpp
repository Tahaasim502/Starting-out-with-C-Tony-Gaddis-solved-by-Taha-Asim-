#include<iostream>
using namespace std;
int main()
{
	int time, speed, distance;
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	cout << "How many hours traveled? ";
	cin >> time;
	while (time < 1)
	{
		cout << "How many hours traveled? ";
		cin >> time;
	}
	cout << "Hour Distance Traveled" << endl;
	cout << "-----------------------------" << endl;
	for (int i = 1; i <= time; i++)
	{
		distance = speed * i;
		cout << i << " " << distance << endl;
	}


}