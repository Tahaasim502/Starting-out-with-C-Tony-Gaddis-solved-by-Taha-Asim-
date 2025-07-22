#include<iostream>
using namespace std;

class Population
{
    private:
        int population;
        double birthRate, deathRate;
    public:
        Population()
        {
            population = 100000; //default population;
            birthRate = 8000; //default birth rate;
            deathRate = 6000; // default death rate;
        }
        Population(int p, double brate, double drate)
        {
            population = p;
            birthRate = brate;
            deathRate = drate;
        }
        void setPopulation(int p)
        {
            population = p;
        }
        void setBirthRate(double brate)
        {
            birthRate = brate;
        }
        void setDeathRate(double drate)
        {
            deathRate = drate;
        }
        int getPopulation()
        {
            return population;
        }
        double getBirthRate()
        {
            return birthRate / population;
        }
        double getDeathRate()
        {
            return deathRate / population;
        }
        void display()
        {
            int r1 = getPopulation();
            double r2 = getBirthRate(), r3 = getDeathRate();
            cout << "Population: " << r1 << endl;
            cout << "Birth Rate: " << r2 << endl;
            cout << "Death Rate: " << r3 << endl;
        }
};

int main()
{
    Population P1;
    int p;
    double b, d;
    
    cout << "Enter the population: ";
    cin >> p;
    while(p < 1)
    {
        cout << "Invalid, population should not be less than 1: ";
        cin >> p;
    }
    
    cout << "Enter the number of births: ";
    cin >> b;
    while(b < 0)
    {
        cout << "Invalid, birth rate cannot be less than 0: ";
        cin >> b;
    }
    
    cout << "Enter the number of deaths: ";
    cin >> d;
    while(d < 0)
    {
        cout << "Invalid, death rate cannot be less than 0: ";
        cin >> d;
    }

    P1.setPopulation(p), P1.setBirthRate(b), P1.setDeathRate(d);
    cout << endl;
    P1.display();
    return 0;
}