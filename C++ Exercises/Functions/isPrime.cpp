#include<iostream>
using namespace std;
bool isPrime(int num)
{
	bool flag = true;
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = false;
		}
	}
	return flag;
}

int main()
{
	int num;
	bool isprime;
	cout << "Enter a number: ";
	cin >> num;
	isprime = isPrime(num);
	if (isprime)
	{
		cout << "It is a prime number";
	}
	else
	{
		cout << "It is not a prime number";
	}
	return 0;
}