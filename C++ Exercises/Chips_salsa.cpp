#include<iostream>
using namespace std;
int main()
{
	string salsa[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int jar[5], totalsales = 0, index = 0, maxvalue, minvalue, mindex = 0;
	cout << "Enter the number of jars sold for each salsa" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << salsa[i] << " : ";
		cin >> jar[i];
	}
	cout << endl;
	cout << "Sales report" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << salsa[i] << " number of jars sold are " << jar[i] << endl;
	}
	maxvalue = jar[0];
	minvalue = jar[0];
	for (int i = 0; i < 5; i++)
	{
		if (jar[i] > maxvalue)
		{
			maxvalue = jar[i];
			index = i;
		}
		if (jar[i] < minvalue)
		{
			minvalue = jar[i];
			mindex = i;
		}
		totalsales += jar[i];
	}
	cout << endl;
	cout << "The total number of jars sold are: " << totalsales << endl;
	cout << "The most flavour sold is " << salsa[index] << endl;
	cout << "The least flavour sold is " << salsa[mindex] << endl;
}