#include<iostream>
using namespace std;

class RetailItem
{
    private:
        string description;
        int UnitsOnHand;
        double price;
    public:
        RetailItem(string d, int u, double p)
        {
            description = d;
            UnitsOnHand = u;
            price = p;
        }
        string getdescription()
        {
            return description;
        }
        int getUnit()
        {
            return UnitsOnHand;
        }
        double getprice()
        {
            return price;
        }
        void setDescription(string d) 
        {
            description = d;
        }

        void setUnitsOnHand(int u) 
        {
            UnitsOnHand = u;
        }

        void setPrice(double p) 
        {
            price = p;
        }

        void display()
        {
            string r1 = getdescription();
            int r2 = getUnit();
            double r3 = getprice();
            cout << r1 << " " << r2 << " " << r3 << endl; 
        }
};

int main()
{
    RetailItem R1("Jacket", 12, 59.95);
    RetailItem R2("Designer Jeans", 40, 34.95);
    RetailItem R3("Shirt", 20, 24.95);
  

    R1.display();
    R2.display();
    R3.display();
    return 0;
}