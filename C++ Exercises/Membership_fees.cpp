#include<iostream>
using namespace std;
int main()
{
	int fees = 2500;
	for (int i = 1; i <= 6; i++)
	{
		double new_fees = (fees * i * 0.04) + fees;
		cout << "The fees after an increase of " << i * 0.04 << " for " << i << " year is " << new_fees << endl;
	}
}