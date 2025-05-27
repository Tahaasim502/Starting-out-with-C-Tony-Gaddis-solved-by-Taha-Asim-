#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int searchnum;
	int index = -1;
	cout << "Enter a number to search: ";
	cin >> searchnum;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] == searchnum)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "Not present";
	}
	else
	{
		cout << "Present at index: " << index;
	}
	return 0;
}