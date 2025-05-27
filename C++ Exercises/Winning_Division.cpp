#include<iostream>
using namespace std;
double getSales(string divisionname)
{
	double sales;
	cout << "Enter the sales of" << divisionname << " division: ";
	cin >> sales;
	while (sales < 0)
	{
		cout << "Enter a number greater than 0 for the sales: ";
		cin >> sales;
	}
	return sales;
}
void findHighest(double n1, double n2, double n3, double n4)
{
	if (n1 > n2 && n1 > n3 && n1 > n4)
	{
		cout << "North East has the highest sales among all the divisons with a sale of " << n1;
	}
	else if (n2 > n1 && n2 > n3 && n2 > n4)
	{
		cout << "South East has the highest sales among all the divisons with a sale of " << n2; 
	}
	else if (n3 > n1 && n3 > n2 && n3 > n4)
	{
		cout << "North West has the highest sales among all the divisons with a sale of " << n3;
	}
	else
	{
		cout << "South West has the highest sales among all the divisons with a sale of " << n4; 
	}

}
int main()
{
	double Northeast, Southeast, Northwest, Southwest;
	Northeast = getSales("Northeast");
	Southeast = getSales("Southeast");
	Northwest = getSales("Northwest");
	Southwest = getSales("Southwest");
	findHighest(Northeast, Southeast, Northwest, Southwest);
}