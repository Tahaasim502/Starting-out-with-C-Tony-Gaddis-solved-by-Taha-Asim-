#include<iostream>
using namespace std;
int main()
{
	int height;
	cout << "Enter the height of the pattern: ";
	cin >> height;
	//Ascending order
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= height - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//descending order:
	for (int a = height - 1; a >= 1; a--)
	{
		for (int c = 1; c <= height - a; c++)
		{
			cout << " ";
		}
		for (int b = 1; b <= (2 * a - 1) ; b++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}