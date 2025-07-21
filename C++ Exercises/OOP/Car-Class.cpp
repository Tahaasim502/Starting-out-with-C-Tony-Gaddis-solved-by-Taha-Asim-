#include<iostream>
using namespace std;

class Car
{
    private:
        int yearmodel, speed;
        string make;
    public:
        Car(string m, int year)
        {
            make = m;
            yearmodel = year;
            speed = 0;
        }
        string getmake()
        {
            return make;
        }
        int getspeed()
        {
            return speed;
        }
        int getyear()
        {
            return yearmodel;
        }
        int accelerator()
        {
            return (speed += 5);
        }
        int brake()
        {
            return (speed -= 5);
        }
        void display()
        {
            string r1 = getmake();
            int r2 = getspeed(), r3 = getyear();
            cout << r1 << " " << r3 << " " << r2 << endl;
        }
};

int main()
{
    Car car_1("GT", 2025);
   
    car_1.accelerator();
    car_1.accelerator();
    car_1.accelerator();
    car_1.accelerator();
    car_1.accelerator();
    car_1.display();
    
    car_1.brake();
    car_1.brake();
    car_1.brake();
    car_1.brake();
    car_1.brake();
    car_1.display();
    return 0;
}