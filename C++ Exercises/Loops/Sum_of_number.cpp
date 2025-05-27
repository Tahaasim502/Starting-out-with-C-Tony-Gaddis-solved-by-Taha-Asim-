#include<iostream>
using namespace std;
int main()
{
	int numb, sum = 0;
	cout << "Enter a number: ";
	cin >> numb;
	while (numb < 0)
	{
		cout << "Enter a positive number: ";
		cin >> numb;
	}
	for (int i = 1; i <= numb; i++)
	{
		sum += i; 
	}
	cout << "The sum of numbers is: " << sum;
}