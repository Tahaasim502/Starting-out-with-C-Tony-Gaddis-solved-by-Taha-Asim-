#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Mortgagecalculator
{
    private:
        float loan, rate, years;
    public:
        Mortgagecalculator()
        {
            loan = 0;
            rate = 0;
            years = 0;
        }
        void mortgagecalculation(float l, float r, float y)
        {
            loan = l;
            rate = r;
            years = y;
        }
        float getLoan()
        {
            return loan;
        }
        float getRate()
        {
            return (rate/100) / 12;
        }
        float getAnnualRate()
        {
            return rate;
        }
        float getYears()
        {
            return years;
        }
        float getTotalPayment()
        {
            float monthlyRate = (rate / 100) / 12;
            int totalMonths = years * 12;
            return (loan * monthlyRate * pow(1 + monthlyRate, totalMonths)) /
                    (pow(1 + monthlyRate, totalMonths) - 1);
        }
        void display()
        {
            cout << "Payment(the monthly payment): $" << fixed << setprecision(2) << getTotalPayment() << endl;
            cout << "Loan(the dollar amount of the loan): $" << fixed << setprecision(2) << getLoan() << endl;
            cout << "Rate(the annual interest rate): " << fixed << setprecision(2) << getAnnualRate() << "%" << endl;
            cout << "Years(the number of years of the loan): " << static_cast<int>(years) << endl;
            //static cast is used for printing the whole number.
        }
};


float getValidValue(string const &prompt) //function for repeating so its easier.
{
    float value;
    while(true)
    {
        cout << prompt;
        cin >> value;
        if(cin.fail())
        {
            cout << "Invalid Input. Please enter a number" << endl;
            cin.clear();
            continue;
        }
        else if(value < 0)
        {
            cout << "No negative numbers allowed." << endl;
        }
        
        bool isvalid = value >= 0;
        
        if(isvalid)
        {
            return value;
        }

        cout << "Try again." << endl; 
    }
}

int main()
{
    Mortgagecalculator person1;
    float loan, rate, year;
    loan = getValidValue("Enter the amount for loan: $");
    rate = getValidValue("Enter the amount for interest rate: $");
    year = getValidValue("Enter the year: ");
    person1.mortgagecalculation(loan, rate, year);
    cout << endl;
    cout << "==== REPORT ====";
    cout << endl;
    person1.display();
    
    return 0;
}