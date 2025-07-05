#include<iostream>
using namespace std;
struct divison
{
	string division_name;
	double first_sales, second_sales, third_sales, fourth_sales, total_sales, avg_sales;
};
int main()
{
	divison d1, d2, d3, d4;
	cout << "Enter your division name D1 (East, South, West, North): ";
	cin >> d1.division_name;
	cout << "Enter your First Quarter Sales: ";
	cin >> d1.first_sales;
	while (d1.first_sales < 0)
	{
		cout << "please, re-eneter first quarter sales(no negative number): ";
		cin >> d1.first_sales;
	}
	cout << "Enter your Second Quarter Sales: ";
	cin >> d1.second_sales;
	while (d1.second_sales < 0)
	{
		cout << "please, re-eneter second quarter sales(no negative number): ";
		cin >> d1.second_sales;
	}
	cout << "Enter your Third Quarter Sales: ";
	cin >> d1.third_sales;
	while (d1.third_sales < 0)
	{
		cout << "please, re-eneter third quarter sales(no negative number): ";
		cin >> d1.third_sales;
	}
	cout << "Enter your Fourth Quarter Sales: ";
	cin >> d1.fourth_sales;
	while (d1.fourth_sales < 0)
	{
		cout << "please, re-eneter fourth quarter sales(no negative number): ";
		cin >> d1.fourth_sales;
	}
	d1.total_sales = d1.first_sales + d1.second_sales + d1.third_sales + d1.fourth_sales;
	d1.avg_sales = d1.total_sales / 4;
	cout << endl;

	cout << "Enter your division name D2 (East, South, West, North): ";
	cin >> d2.division_name;
	cout << "Enter your First Quarter Sales: ";
	cin >> d2.first_sales;
	while (d2.first_sales < 0)
	{
		cout << "please, re-eneter first quarter sales(no negative number): ";
		cin >> d2.first_sales;
	}
	cout << "Enter your Second Quarter Sales: ";
	cin >> d2.second_sales;
	while (d2.second_sales < 0)
	{
		cout << "please, re-eneter second quarter sales(no negative number): ";
		cin >> d2.second_sales;
	}
	cout << "Enter your Third Quarter Sales: ";
	cin >> d2.third_sales;
	while (d2.third_sales < 0)
	{
		cout << "please, re-eneter third quarter sales(no negative number): ";
		cin >> d2.third_sales;
	}
	cout << "Enter your Fourth Quarter Sales: ";
	cin >> d2.fourth_sales;
	while (d2.fourth_sales < 0)
	{
		cout << "please, re-eneter fourth quarter sales(no negative number): ";
		cin >> d2.fourth_sales;
	}
	d2.total_sales = d2.first_sales + d2.second_sales + d2.third_sales + d2.fourth_sales;
	d2.avg_sales = d2.total_sales / 4;
	cout << endl;

	cout << "Enter your division name D1 (East, South, West, North): ";
	cin >> d3.division_name;
	cout << "Enter your First Quarter Sales: ";
	cin >> d3.first_sales;
	while (d3.first_sales < 0)
	{
		cout << "please, re-eneter first quarter sales(no negative number): ";
		cin >> d3.first_sales;
	}
	cout << "Enter your Second Quarter Sales: ";
	cin >> d3.second_sales;
	while (d3.second_sales < 0)
	{
		cout << "please, re-eneter second quarter sales(no negative number): ";
		cin >> d3.second_sales;
	}
	cout << "Enter your Third Quarter Sales: ";
	cin >> d3.third_sales;
	while (d3.third_sales < 0)
	{
		cout << "please, re-eneter third quarter sales(no negative number): ";
		cin >> d3.third_sales;
	}
	cout << "Enter your Fourth Quarter Sales: ";
	cin >> d3.fourth_sales;
	while (d3.fourth_sales < 0)
	{
		cout << "please, re-eneter fourth quarter sales(no negative number): ";
		cin >> d3.fourth_sales;
	}
	d3.total_sales = d3.first_sales + d3.second_sales + d3.third_sales + d3.fourth_sales;
	d3.avg_sales = d3.total_sales / 4;
	cout << endl;

	cout << "Enter your division name D4 (East, South, West, North): ";
	cin >> d4.division_name;
	cout << "Enter your First Quarter Sales: ";
	cin >> d4.first_sales;
	while (d4.first_sales < 0)
	{
		cout << "please, re-eneter first quarter sales(no negative number): ";
		cin >> d4.first_sales;
	}
	cout << "Enter your Second Quarter Sales: ";
	cin >> d4.second_sales;
	while (d4.second_sales < 0)
	{
		cout << "please, re-eneter second quarter sales(no negative number): ";
		cin >> d4.second_sales;
	}
	cout << "Enter your Third Quarter Sales: ";
	cin >> d4.third_sales;
	while (d4.third_sales < 0)
	{
		cout << "please, re-eneter third quarter sales(no negative number): ";
		cin >> d4.third_sales;
	}
	cout << "Enter your Fourth Quarter Sales: ";
	cin >> d4.fourth_sales;
	while (d4.fourth_sales < 0)
	{
		cout << "please, re-eneter fourth quarter sales(no negative number): ";
		cin >> d4.fourth_sales;
	}
	d4.total_sales = d4.first_sales + d4.second_sales + d4.third_sales + d4.fourth_sales;
	d4.avg_sales = d4.total_sales / 4;
	cout << endl;
	cout << "-----DETAILS OF SALE OF EACH DIVISON----- " << endl;
	cout << "D1 SALES " << d1.avg_sales << endl;
	cout << "D2 SALES " << d2.avg_sales << endl;
	cout << "D3 SALES " << d3.avg_sales << endl;
	cout << "D4 SALES " << d4.avg_sales << endl;
	return 0;
}