#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	int i = 0, mid, high = 10 - 1, low = 0, search, count = 0;
	bool flag = false;
	cout << "Enter a number to search: ";
	cin >> search;
	while (!flag && low <= high)
	{
		count += 1; 
		mid = (high + low) / 2;
		if (array[mid] == search)
		{
			i = mid;
			flag = true;
			break;
		}
		else if (array[mid] > search)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	if (flag)
	{
		cout << "Present at index: " << i << endl;
		cout << "it took attempts " << count;
	}
	else
	{
		cout << "Not present";
	}
	return 0;
}