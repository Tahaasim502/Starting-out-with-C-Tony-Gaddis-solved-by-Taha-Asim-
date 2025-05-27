#include<iostream>
using namespace std;
int main()
{
	for (int i = 5; i <= 30; i += 5)
	{
		double burned_min = i * 3.6;
		cout << "Calories burned after " << i << " minutes " << burned_min << endl;
	}
	return 0;
}