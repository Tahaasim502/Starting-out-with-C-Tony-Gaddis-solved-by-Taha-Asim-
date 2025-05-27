#include<iostream>
using namespace std;
int main()
{
    int size, n, num;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a number to store in the array: ";
        cin >> num;
        array[i] = num;
    }
    cout << endl;
    cout << "Enter a number n: ";
    cin >> n;
    for(int i = 0; i < size; i++)
    {
        if(array[i] > n)
        {
            cout << array[i] << " ";
        }
    }
    return 0;
}
