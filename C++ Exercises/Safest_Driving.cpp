#include<iostream>
using namespace std;
int getNumAccidents(string region)
{
	int accid;
	cout << "Enter the number of accidents for " << region << " region: ";
	cin >> accid;
	cout << endl;
	while (accid < 0)
	{
		cout << "Enter the number of accidents for " << region << " region make sure its positive integer: ";
		cin >> accid;
	}
	return accid;
}

void findLowest(int n1, int n2, int n3, int n4, int n5)
{
	if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
	{
		cout << "The region with the lowest accidents is North with a number of " << n1 << " accidents " << endl;
	}
	else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
	{
		cout << "The region with the lowest accidents is South with a number of " << n2 << " accidents " << endl;
	}
	else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
	{
		cout << "The region with the lowest accidents is East with a number of " << n3 << " accidents " << endl;
	}
	else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
	{
		cout << "The region with the lowest accidents is West with a number of " << n4 << " accidents " << endl;
	}
	else
	{
		cout << "The region with the least accident is Central with a number of " << n5 << " accidents " << endl;
	}
}
int main()
{
	int north, south, east, west, central;
	north = getNumAccidents("North");
	south = getNumAccidents("South");
	east = getNumAccidents("East");
	west = getNumAccidents("West");
	central = getNumAccidents("Central");
	findLowest(north, south, east, west, central);
	return 0;
}