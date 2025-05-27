#include<iostream>
using namespace std;
void getJudgeData(double &score)
{
	cout << "Enter the score: ";
	cin >> score;
	while (score < 0 || score > 10)
	{
		cout << "Make sure its between 0 and 10: ";
		cin >> score;
	}
}
double findhighest(double s1, double s2, double s3, double s4, double s5)
{
	double max = s1;
	if (max < s2)
	{
		max = s2;
	}
	else if (max < s3)
	{
		max = s3;
	}
	else if (max < s4)
	{
		max = s4;
	}
	else
	{
		max = s5;
	}
	return max;
}

double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double lowest = s1;
	if (lowest > s2)
	{
		lowest = s2;
	}
	else if (lowest > s3)
	{
		lowest = s3;
	}
	else if (lowest > s4)
	{
		lowest = s4;
	}
	else
	{
		lowest = s5;
	}
	return lowest;
}

void calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double max, min, total, avg;
	max = findhighest(s1, s2, s3, s4, s5);
	min = findLowest(s1, s2, s3, s4, s5);
	total = s1 + s2 + s3 + s4 + s5;
	total = total - (max + min);
	avg = total / 3.0;
	cout << avg;

}
int main()
{
	double s1, s2, s3, s4, s5;
	getJudgeData(s1);
	getJudgeData(s2);
	getJudgeData(s3);
	getJudgeData(s4);
	getJudgeData(s5);
	calcScore(s1, s2, s3, s4, s5);
	return 0;
}