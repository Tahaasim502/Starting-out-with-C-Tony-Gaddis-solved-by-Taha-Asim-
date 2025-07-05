#include<iostream>
#include<string>
using namespace std;
struct customerdata
{
    string name, address, city, state, date;
    int ZIP, telephone_numb;
    double account_balance;
};

void searchAccount(string name, customerdata customerinfo[], int size)
{
    for(int i = 0; i < 10; i++)
    {
        if(name == customerinfo[i].name)
        {
            cout << "The account has been found" << endl;
            break;
        }
        else
        {
            cout << "There is no such existing account in the array " << endl;
        }
    }
}

int main()
{
    customerdata customerinfo[10];
    string searchname;
    for(int i = 0; i < 10; i++)
    {
        cout << "Details of customer " << i + 1 << " : " << endl;
        cout << "Enter the name of the cutomer: ";
        cin.ignore();
        getline(cin, customerinfo[i].name);
        cout << "Enter the address of the customer: ";
        cin.ignore();
        getline(cin, customerinfo[i].address);
        cout << "Enter the city in which the customer lives in: ";
        cin.ignore();
        getline(cin, customerinfo[i].city);
        cout << "Enter the state in which the customer lives in: ";
        cin.ignore();
        getline(cin, customerinfo[i].state);
        cout << "Enter your zip code: ";
        cin >> customerinfo[i].ZIP;
        cout << "Enter your telephone number: ";
        cin >> customerinfo[i].telephone_numb;
        cout << "Enter your account balance: ";
        cin >> customerinfo[i].account_balance;
        while(customerinfo[i].account_balance < 0)
        {
            cout << "please make sure no negative number is enetered: ";
            cin >> customerinfo[i].account_balance;
        }
        cout << "Enter your last date of payment: ";
        cin.ignore();
        getline(cin, customerinfo[i].date);
        cout << endl;
    }
    cout << "----DETAILS OF THE CUSTOMER----" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << customerinfo[i].name << " || " << customerinfo[i].city << " || " << customerinfo[i].state << " || " << customerinfo[i].address << " || " << customerinfo[i].telephone_numb << " || " << customerinfo[i].ZIP << " || " << customerinfo[i].account_balance << " || " << customerinfo[i].date << endl;
    }
    cout << endl;
    cout << "Enter the customer account you want to search: ";
    cin.ignore();
    getline(cin, searchname);
    searchAccount(searchname, customerinfo, 10);
    return 0;
}