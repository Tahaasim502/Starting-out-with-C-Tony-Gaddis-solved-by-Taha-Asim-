#include<iostream>
using namespace std;
struct moviedata
{
	string title, director;
	int year_released, running_time;
	double price_unit = 0, production_cost = 0, copies_sold = 0;
};

int main()
{
	moviedata m1, m2; 
	cout << "Enter the title of the first movie: ";
	cin >> m1.title;
	cout << "Enter the director of the first movie: ";
	cin >> m1.director;
	cout << "Enter the production cost of the first movie: ";
	cin >> m1.production_cost;
	cout << "Enter the year the first movie was realesed: ";
	cin >> m1.year_released;
	cout << "Enter the price of the first movie per unit: ";
	cin >> m1.price_unit;
	cout << "Enter the copies sold for the first movie: ";
	cin >> m1.copies_sold;
	cout << "Enter the time of first movie in minutes: ";
	cin >> m1.running_time;
	cout << endl;
	cout << "Enter the title of the second movie: ";
	cin >> m2.title; 
	cout << "Enter the director of the seocnd movie: ";
	cin >> m2.director; 
	cout << "Enter the production cost of the second movie: ";
	cin >> m2.production_cost;
	cout << "Enter the year the second movie was realesed: ";
	cin >> m2.year_released;
	cout << "Enter the price of the second movie per unit: ";
	cin >> m2.price_unit;
	cout << "Enter the copies sold for the second movie: ";
	cin >> m2.copies_sold;
	cout << "Enter the time of second movie in minutes: ";
	cin >> m2.running_time;
	double rev1 = m1.copies_sold * m1.price_unit;
	double rev2 = m2.copies_sold * m2.price_unit;
	cout << endl;
	cout << "------DEATAILS OF THE MOVIE-------" << endl;
	cout << "The tile of movie: " << m1.title << " | " << m2.title << endl;
	cout << "The director of the movie: " << m1.director << " | " << m2.director << endl;
	cout << "The year the movie was released: " << m1.year_released << " | " << m2.year_released << endl;
	cout << "The total running time of the movie in min: " << m1.running_time << " | " << m2.running_time << endl;
	if (rev1 > m1.production_cost)
	{
		cout << m1.title << " has a generated a profit" << endl;
	}
	else
	{
		cout << m1.title << " has a generated a loss" << endl;
	}
	if (rev2 > m2.production_cost)
	{
		cout << m2.title << " has a generated a profit " << endl;
	}
	else
	{
		cout << m2.title << " has a generated a loss" << endl;
	}
	return 0;
}