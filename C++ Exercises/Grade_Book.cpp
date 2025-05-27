#include<iostream>
using namespace std;
int main()
{
	string studentname[5], range[5];
	char grade[5];
	double avgscore[5], total[5];
	int testscore[5][4];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the name of the student: ";
		cin >> studentname[i];
		total[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			cout << "Enter the test score of " << studentname[i] << " : ";
			cin >> testscore[i][j];
			while (testscore[i][j] < 0 || testscore[i][j] > 100)
			{
				cout << "Enter the test score again for " << studentname[i] << " : ";
				cin >> testscore[i][j];
			}
			total[i] += testscore[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		avgscore[i] = total[i] / 4;
	}
	for (int i = 0; i < 5; i++)
	{
		if (avgscore[i] >= 90 && avgscore[i] <= 100)
		{
			grade[i] = 'A';
			range[i] = "90 - 100";
		}
		else if (avgscore[i] >= 80 && avgscore[i] <= 89)
		{
			grade[i] = 'B';
			range[i] = "80 - 89";
		}
		else if (avgscore[i] >= 70 && avgscore[i] <= 79)
		{
			grade[i] = 'C';
			range[i] = "70 - 79";
		}
		else if (avgscore[i] >= 60 && avgscore[i] <= 69)
		{
			grade[i] = 'D';
			range[i] = "60 - 69";
		}
		else
		{
			grade[i] = 'F';
			range[i] = "0 - 59";
		}
	}
	cout << "Test Sccore Letter Grade" << endl;
	cout << "------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << range[i] << " " << grade[i] << endl;
	}
	return 0;
}