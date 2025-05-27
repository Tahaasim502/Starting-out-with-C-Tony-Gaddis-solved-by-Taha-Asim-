#include<iostream>
using namespace std;
void paintJob()
{
	int room, sq_feet, total_sqfeet = 0, paint_required, hours, paint_cost;
	double paint_price, labour_charges, total_cost;
	cout << "How many rooms are there that needs to be painted: ";
	cin >> room;
	while (room < 1)
	{
		cout << "Error, Please make sure a number greater than 1 is entered: ";
		cin >> room;
	}
	cout << "What is the price of the paint?: ";
	cin >> paint_price;
	while (paint_price < 10.00)
	{
		cout << "Error, please make sure the price mentioned is greater than $10.00" << endl;
		cout << "Please re-enter: ";
		cin >> paint_price;
	}
	for (int i = 1; i <= room; i++)
	{
		cout << "Enter the square feet wall of room " << i << " : ";
		cin >> sq_feet;
		total_sqfeet += sq_feet;
	}
	paint_required = (total_sqfeet / 110);
	hours = paint_required * 8;
	paint_cost = paint_required * paint_price;
	labour_charges = hours * 25.00;
	total_cost = labour_charges + paint_cost;
	cout << "The number of gallons of paint reuired are: " << paint_required << endl;
	cout << "The hours of labour required are: " << hours << endl; 
	cout << "The cost of the paint $" << paint_cost << endl;
	cout << "The labour charges $" << labour_charges << endl;
	cout << "The total cost of the paint job $" << total_cost << endl;
}
int main()
{
	paintJob();
	return 0;
}