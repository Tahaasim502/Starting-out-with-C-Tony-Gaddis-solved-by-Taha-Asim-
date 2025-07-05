#include<iostream>
using namespace std;

struct rain_stat
{
	double total_rainfall, high_temp, low_temp, avg_temp;
};

int main()
{
	rain_stat rain_year[12];
	double total = 0, avg;
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the total rainfall for " << i + 1 << " month: ";
		cin >> rain_year[i].total_rainfall; 
		cout << "Enter the highest temperature for " << i + 1 << " month: ";
		cin >> rain_year[i].high_temp;
		while (rain_year[i].high_temp < -100 || rain_year[i].high_temp > 140)
		{
			cout << "please make sure its within the range -100 and +140: ";
			cin >> rain_year[i].high_temp;
		}
		cout << "Enter the lowest temperature for " << i + 1 << " month: ";
		cin >> rain_year[i].low_temp;
		while (rain_year[i].low_temp < -100 || rain_year[i].low_temp > 140)
		{
			cout << "please make sure its within the range -100 and +140: ";
			cin >> rain_year[i].low_temp;
		}
		rain_year[i].avg_temp = (rain_year[i].high_temp + rain_year[i].low_temp) / 2.0;
	}
	for (int i = 0; i < 12; i++)
	{
		total += rain_year[i].total_rainfall;
	}
	avg = total / 12;
	cout << endl;  
	cout << "----DETAILS OF THE MONTHLY & ANNUAL RAINFALL----" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << "The avg rainfall for " << i + 1 << " month " << rain_year[i].total_rainfall << endl;
		cout << "The highest temperature for " << i + 1 << " month " << rain_year[i].high_temp << endl;
		cout << "The lowest temperature for " << i + 1 << " month " << rain_year[i].low_temp << endl;
		cout << "The avg temperature for " << i + 1 << " month " << rain_year[i].avg_temp << endl;
	}
	cout << "The total rainfall of the year: " << total << endl;
	cout << "The avg rainfall of the year: " << avg << endl;
	return 0;
}
