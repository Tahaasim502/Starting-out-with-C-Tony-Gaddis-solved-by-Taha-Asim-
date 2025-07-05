#include<iostream>
using namespace std;
struct moviedata
{
	string title, director;
	int year_released, running_time;
};

int main()
{
	moviedata m1, m2;
	cout << "Enter the title of the movie: ";
	cin >> m1.title >> m2.title;
	cout << "Enter the director of the movie: ";
	cin >> m1.director >> m2.director;
	cout << "Enter the year the movie was realesed: ";
	cin >> m1.year_released >> m2.year_released;
	cout << "Enter the time of movie in minutes: ";
	cin >> m1.running_time >> m2.running_time;
	cout << end;
	cout << "The tile of movie: " << m1.title << " " << m2.title << endl;
	cout << "The director of the movie: " << m1.director << " " << m2.director << endl;
	cout << "The year the movie was released: " << m1.year_released << " " << m2.year_released << endl;
	cout << "The total running time of the movie in min: " << m1.running_time << " " << m2.running_time << endl;
	return 0;
}