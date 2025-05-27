#include<iostream>
using namespace std;
int main()
{
	int num, max, min;
	cout << "Enter a series of number: ";
	cin >> num;
	max = num;
	min = num;
	while (num != -99)
	{
		cout << num << " ";
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num; 
		}
		cin >> num; 
	}
 	cout << endl;
	cout << "The largest number in the series is " << max << endl; 
	cout << "The smallest number in the series is " << min << endl; 
	return 0;
}