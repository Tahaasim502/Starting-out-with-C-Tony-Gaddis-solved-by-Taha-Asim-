#include<iostream>
using namespace std;
int charges = 10;
int sOrder()
{
	int spoolsOrd;
	cout << "Enter the number  of spools that are ordered: ";
	cin >> spoolsOrd;
	while (spoolsOrd < 1)
	{
		cout << "Make sure the number of spools ordered are more than 1: ";
		cin >> spoolsOrd;
	}
	return spoolsOrd;
}
int sInstock()
{
	int stock;
	cout << "Enter the number of spools that are in stock: ";
	cin >> stock;
	while (stock < 0)
	{
		cout << "Error, Make sure the correct number of stock is entered: ";
		cin >> stock;
	}
	return stock;
}
int specialCharge()
{
	int numSpec;
	cout << "Are there any special charges or shipping that needs to be done: ";
	cin >> numSpec;
	while (numSpec < 0)
	{
		cout << "Makre sure the number is greater than 0: ";
		cin >> numSpec;
	}
	return numSpec; 
}
void readyShip(int spoolOrder)
{
	cout << "The number of spools that are ready to ship: " << spoolOrder << endl;
}
void backOrder(int stock, int ordered)
{
	int newOrder;
	if (ordered > stock)
	{
		newOrder = ordered - stock;
		cout << "The stock has been finished and a re-stock has been ordered: " << newOrder << endl;
	}
}
void subBill(int sorder)
{
	cout << "The number of portion ready to ship $" << sorder * 100 << endl;
}
void shippingCharges(int charge)
{
	cout << "The number of shipping charges $" << charge * charges << endl;
}
void totalbill(int s, int c)
{
	cout << "The total bill with chipping charges $" << (s * 100) + (c * charges) << endl;
}
int main()
{
	int spoolordered, totalstock, scharge;
	spoolordered = sOrder();
	totalstock = sInstock();
	scharge = specialCharge();
	readyShip(totalstock);
	backOrder(totalstock, spoolordered);
	subBill(spoolordered);
	shippingCharges(scharge);
	totalbill(spoolordered, scharge);
	return 0;
}