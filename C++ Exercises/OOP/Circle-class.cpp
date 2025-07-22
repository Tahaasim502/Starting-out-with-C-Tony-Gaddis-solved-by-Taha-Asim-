#include<iostream>
using namespace std;

class Circle
{
    private:
        double radius;
        double pi = 3.14159;
    public:
        Circle()
        {
            radius = 0;
        }
        Circle(double r)
        {
            radius = r;
        }
        void setRadius(double r)
        {
            radius = r;
        }
        double getRadius()
        {
            return radius;
        }
        double getArea()
        {
            double area = pi * radius * radius;
            return area;
        }
        double getDiameter()
        {
            double diameter = radius * 2;
            return diameter;
        }
        double getCircumference()
        {
            double circumference = 2 * pi * radius;
            return circumference;
        }
        void display()
        {
            double r1 = getArea(), r2 = getDiameter(), r3 = getCircumference();
            cout << "Area: " << r1 << " " << "Diameter: " << r2 << " " << "Circumference: " << r3 << " " << endl;
        }
};  

int main()
{
    Circle shape1;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    while(radius < 0)
    {
        cout << "Invalid, make sure no-negative number is inputted: ";
        cin >> radius;
    }

    shape1.setRadius(radius);
    shape1.display();
    return  0;
}