#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size], num, max, min, maxindex = 0, minindex = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a number to store in the array: ";
		cin >> num;
		array[i] = num;
	}
	max = array[0];
	min = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			maxindex = i;
		}
		if (array[i] < min)
		{
			min = array[i];
			minindex = i;
		}
	}
	cout << "The largest value in the array is: " << max << endl;
	cout << "The smallest value in the array is: " << min  << endl;
	return 0;
}