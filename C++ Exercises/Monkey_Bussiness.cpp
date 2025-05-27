#include<iostream>
using namespace std;
int main()
{
	const int row = 3, column = 5;
	int array[row][column], food, total = 0, avg, maxvalue, minvalue, rindex = 0, rmindex = 0, cindex = 0, cmindex = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Enter the food eaten by " << i + 1 << " monkey: ";
			cin >> food;
			while (food < 0)
			{
				cout << "Enter the food in positive number: ";
				cin >> food;
			}
			array[i][j] = food;
		}
	}
	maxvalue = array[0][0];
	minvalue = array[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (array[i][j] > maxvalue)
			{
				maxvalue = array[i][j];
				rindex = i;
				cindex = j;
			}
			if (array[i][j] < minvalue)
			{
				minvalue = array[i][j];
				rmindex = i;
				cmindex = j;
			}
			total += array[i][j];
		}
	}
	cout << endl;
	cout << "The average amount of food eaten per day by the whole family of of monkeys: " << total / 3 << endl;
	cout << "The least amount of food eaten during the week by any one monkey: " << array[rmindex][cmindex] << endl;
	cout << "The greatest amount of food eaten during the week by any one monkey: " << array[rindex][cindex] << endl;
}