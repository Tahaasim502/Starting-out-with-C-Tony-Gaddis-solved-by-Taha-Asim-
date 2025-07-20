#include<iostream>
using namespace std;

class date
{
    private:
        int month, day, year;
        string month_name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    public:
        void displayFormat1(int m, int d, int y)
        {
            cout << m << "/" << d << "/" << y << endl;
        }

        void displayFormat2(int m, int d, int y)
        {
            cout << month_name[m - 1] << " " << d << ", " << y << endl;
        }

        void displayFormat3(int m, int d, int y)
        {
            cout << d << " " << month_name[m - 1] << y << endl;
        }
};




int main()
{
    date myDate;
    int month, day, year;
    cout << "Enter the month(1-12): ";
    cin >> month;
    while(month < 1 || month > 12)
        {
            cout << "Invalid please enter between 1 to 12" << endl;
            cout << "RE-Enter: ";
            cin >> month;
        }
            
    cout << "Enter the day(1-31): ";
    cin >> day;
    while(day < 1 || day > 31)
        {
            cout << "Invalid please enter between 1 to 31" << endl;
            cout << "RE-Enter: ";
            cin >> day;
        }

    cout << "Enter the year: ";
    cin >> year;
    myDate.displayFormat1(month, day, year);
    myDate.displayFormat2(month, day, year);
    myDate.displayFormat3(month, day, year);
    return 0;
}