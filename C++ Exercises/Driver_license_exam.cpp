#include<iostream>
using namespace std;
int main()
{
	char correctanswer[20] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
							 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };
	char studentanswer[20];
	char answer;
	int count = 0, wronganswer = 0;
	for (int i = 0; i < 20; i++)
	{
			cout << "Enter the answer: ";
			cin >> answer;
			while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D')
			{
				cout << "Enter the answer with option A, B, C, D: ";
				cin >> answer;
			}
			studentanswer[i] = answer;
	}
	return 0;
	for (int i = 0; i < 20; i++)
	{
		if (correctanswer[i] == studentanswer[i])
		{
			count++;
		}
		else
		{
			wronganswer++;
		}
	}
	cout << "The total number of correct answers are: " << count << endl;
	cout << "The total number of inccorect answers are: " << wronganswer << endl;
	cout << "The correct answer for the wrong answers are the following: " << endl;
	for (int i = 0; i < wronganswer; i++)
	{
		cout << correctanswer[i];
	}
	return 0;
}