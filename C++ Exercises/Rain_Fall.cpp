#include<iostream>
using namespace std;
int main()
{
	const int size = 12;
	double array[size], average, total = 0, rainfall, max, min;
	int maxindex = 0, mindex = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the amount of rainfall for " << i + 1 << " month: ";
		cin >> rainfall;
		while (rainfall < 0)
		{
			cout << "Enter the amount of rainfall for in positvie values only " << i << " month: ";
			cin >> rainfall;
		}
		array[i] = rainfall;
		total = total + array[i];
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
			mindex = i;
		}
	}
	average = total / 12;
	cout << endl; 
	cout << "REPORT OF RAINFALL IN 12 MONTHS" << endl;
	cout << "The Highest rainfall was on " << maxindex << " month(s) with rainfall about  " << array[maxindex] << " mm " << endl; 
	cout << "The Lowest  rainfall was on " << mindex << " month(s) with rainfall about  " << array[mindex] << " mm " << endl; 
	cout << "The total rainfall for 12 months " << total << "mm" << endl; 
	cout << "The average rainfall was " << average << " mm " << endl; 
	return 0;
}