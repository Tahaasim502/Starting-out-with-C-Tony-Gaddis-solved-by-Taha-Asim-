#include<iostream>
using namespace std;
int main()
{
	int again, emp_numb, gross_pay, state_tax, federal_tax, FICA, net_pay;
	while (true)
	{
	error:
		cout << "Enter your employee number: ";
		cin >> emp_numb;
		if (emp_numb == 0)
		{
			return 0;
		}
		while (emp_numb < 0)
		{
			cout << "Do not enter a negative employee number: ";
			cin >> emp_numb;
		}
		cout << "Enter your gross pay: ";
		cin >> gross_pay;
		while (gross_pay < 0)
		{
			cout << "Do not enter a negative gross pay: ";
			cin >> gross_pay;
		}
		cout << "Enter your state tax: ";
		cin >> state_tax;
		while (state_tax < 0 || state_tax > gross_pay)
		{
			cout << "Please re-enter your state tax(no negative and less than gross pay): ";
			cin >> state_tax;
		}
		cout << "Enter your federal tax: ";
		cin >> federal_tax;
		while (federal_tax < 0 || federal_tax > gross_pay)
		{
			cout << "Please re-enter your federal tax(no negative and less than gross pay): ";
			cin >> federal_tax;
		}
		cout << "Enter your FICA withholdings: ";
		cin >> FICA;
		while (FICA < 0 || FICA > gross_pay)
		{
			cout << "Please re-enter your FICA wiht holdings(no negative and less than gross pay): ";
			cin >> FICA;
		}
		while (FICA + federal_tax + state_tax > gross_pay)
		{
			cout << "Renter your data again" << endl;
			goto error;
		}
		net_pay = gross_pay - (FICA + federal_tax + state_tax);
		cout << endl;
		cout << "Employee Number: " << emp_numb << endl;
		cout << "Gross Pay of the employee: " << emp_numb << " is " << gross_pay << endl;
		cout << "State tax of the employee: " << emp_numb << " is " << state_tax << endl;
		cout << "Federal tax of the employee: " << emp_numb << " is " << federal_tax << endl;
		cout << "FICA of the employee: " << emp_numb << " is " << FICA << endl;
		cout << "Net Pay of the employee: " << emp_numb << " is " << net_pay << endl;
		cout << endl;
	}
	return 0;
}