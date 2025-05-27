#include<iostream>
using namespace std;
int numbEmp()
{
    int num;
    cout << "Enter the number of employees in your company: ";
    cin >> num;
    while (num < 0)
    {
        cout << "Enter a positive integer value: ";
        cin >> num;
    }
    return num;
}
int daysAbsent(int empNum)
{
    int dayabs, total = 0;
    for (int i = 0; i < empNum; i++)
    {
        cout << "Enter the days you have been absent for the past year: ";
        cin >> dayabs;
        while (dayabs < 0)
        {
            cout << "Enter a positive integer: ";
            cin >> dayabs;
        }
        total += dayabs;
    }
    return total;
}
double avgAbs(int empN, int dayAb)
{
    double avgabsent = (dayAb / empN);
    return avgabsent;
}
int main()
{
    int numemp, Dayab;
    double avgAbsentees;
    numemp = numbEmp();
    Dayab = daysAbsent(numemp);
    avgAbsentees = avgAbs(numemp, Dayab);
    cout << "The number of employees in the company are: " << numemp << endl;
    cout << "The total number of employees that have missed a day in an year: " << Dayab << endl;
    cout << "The average number of absentees " << avgAbsentees;
    return 0;
}
