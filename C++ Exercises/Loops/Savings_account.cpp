#include<iostream>
using namespace std;
int main()
{
	double balance, interest_rate, monthly_rate, annual_rate, withdraw;
	double twithdraw = 0, tdeposit = 0, tinterest_rate = 0, deposit, newbalance; 
	int months;
	cout << "Enter the starting balance in your account: ";
	cin >> balance;
	cout << "Enter the number of month since the account has been established: ";
	cin >> months;
	cout << "Enter the interest rate applied: ";
	cin >> interest_rate;
	cout << endl;
	newbalance = balance;
	for (int i = 1; i <= months; i++)
	{
		cout << "Enter the amount deposited into the account: ";
		cin >> deposit;
		while (deposit < 0)
		{
			cout << "Please make sure negative number is not enetred: ";
			cin >> deposit;
		}
		newbalance += deposit;
		tdeposit += deposit;
		cout << "Enter the amount withdrawn from the account during the month: ";
		cin >> withdraw;
		while (withdraw < 0)
		{
			cout << "Please make sure negative number is not enetred: ";
			cin >> withdraw; 
		}
		newbalance -= withdraw; 
		if (newbalance < 0)
		{
			cout << "The account is empty" << endl;
			return 0;
		}
		twithdraw += withdraw;
		monthly_rate = ((interest_rate / 12 /100.0) * newbalance); 
		newbalance += monthly_rate; 
		tinterest_rate += monthly_rate;  
	}
	cout << endl;
	cout << "The total remaining balance in the account is: " << newbalance << endl;
	cout << "The total amount of deposit that took place is: " << tdeposit << endl;
	cout << "The total amount of withdrawn that took place is: " << twithdraw << endl;
	cout << "The total interest rate earned is: " << tinterest_rate << endl;
	return 0;
}