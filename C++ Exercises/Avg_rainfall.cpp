	#include<iostream>
	using namespace std;
	int main()
	{
		int year, rainfall, trainfall = 0;
		double  tavgrainfall = 0;
		cout << "Enter the number of years for calculating avg rainfall: ";
		cin >> year;
		while (year < 1)
		{
			cout << "Enter the correct no.of year: ";
			cin >> year;
		}
		for (int i = 1; i <= year; i++)
		{
			cout << "Enter the values for " << i << " year(s)" << endl;
			for (int j = 1; j <= 12; j++)
			{
				cout << "Enter the rain fall for " << j << " month: ";
				cin >> rainfall;
				while (rainfall < 0)
				{
					cout << "Do not enter negative number for rain fall: ";
					cin >> rainfall;
				}
				trainfall += rainfall;
			}
			cout << endl;
		}
		tavgrainfall = tavgrainfall /(year * 12);
		cout << "The number of months caculated is: " << year * 12 << endl;
		cout << "The total rain fall occured for " << year << " year(s) " << trainfall << endl;
		cout << "The total avg rain fall for " << year << " year(s) " << tavgrainfall << endl;
		return 0;
	}