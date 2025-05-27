#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int array[size];
	int temp;
	cout << "Enter a number: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}