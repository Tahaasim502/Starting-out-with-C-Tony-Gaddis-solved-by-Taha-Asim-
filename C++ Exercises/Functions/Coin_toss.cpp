#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void coinToss(int runtime)
{
	srand(time(0));
	for (int i = 1; i <= runtime; i++)
	{
		int randomnumb = (rand() % 2) + 1; 
		if (randomnumb == 1)
		{
			cout << "Heads"; 
		}
		else
		{
			cout << "Tails";
		}
		cout << endl;
	}
}
int main()
{
	int r;
	cout << "Enter how many times the coin should run: ";
	cin >> r;
	coinToss(r);
}