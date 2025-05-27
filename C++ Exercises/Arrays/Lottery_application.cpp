#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int lottery_array[5], user_array[5], count = 0;
	srand(time(0));
	cout << "Enter the values from 0-9 to store in the array: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> user_array[i];
	}
	cout << endl;
	cout << "Lottery array" << endl;
	for (int i = 0; i < 5; i++)
	{
		lottery_array[i] = (rand() % 10);
		cout << lottery_array[i] << " ";
	}
	cout << endl;
	cout << "User array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << user_array[i] << " ";
	}
	cout << endl;
	cout << "Digits matched from both array" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (user_array[i] == lottery_array[i])
		{
			cout << user_array[i] << " ";
			count += 1;
		}
	}
	cout << endl;
	if (count >= 4)
	{ 
		cout << "You have won a grand prize" << endl; 
	}
	return 0;
}