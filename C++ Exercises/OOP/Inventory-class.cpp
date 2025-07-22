#include<iostream>
using namespace std;

class Inventory
{
    private:
        int itemNumber, quantity;
        double cost, totalcost;
    public:
        Inventory()
        {
            itemNumber = 0;
            quantity = 0;
            cost = 0.00;
            totalcost = 0.00;
        }
        Inventory(int itemno, int q, double c)
        {
            setItemNumber(itemno);
            setQuantity(q);
            setCost(c);
            setTotalCost();
        }
        void setItemNumber(int item)
        {
            itemNumber = item;
        }
        void setQuantity(int no_quantity)
        {
            quantity = no_quantity;
        }
        void setCost(double price)
        {
            cost = price;
        }
        void setTotalCost()
        {
            totalcost = quantity * cost;
        }
        int getItemNumber()
        {
            return itemNumber;
        }
        int getQuantity()
        {
            return quantity;
        }
        double getCost()
        {
            return cost;
        }
        double getTotalCost()
        {
            return totalcost;
        }
        void display()
        {
            int r1 = getItemNumber(), r2 = getQuantity();
            double r3 = getCost(), r4 = getTotalCost();
            cout << "Item No: " << r1 << " " << "Quantity: " << r2 << " " << "Cost: " << r3 << " " << "Total Cost: " << r4 << " " << endl;
        }
};

int main()
{
    Inventory item1;
    int itemno, q;
    double c, tc;
    cout << "Enter the item no: ";
    cin >> itemno;
    while(itemno < 0)
    {
        cout << "Invalid, negative number is not allowed" << endl;
        cout << "RE-ENTER: ";
        cin >> itemno;
    }
    cout << "Enter the quantity: ";
    cin >> q;
    while(q < 0)
    {
        cout << "Invalid, negative number is not allowed" << endl;
        cout << "RE-ENTER: ";
        cin >> q;
    }
    cout << "Enter the cost: ";
    cin >> c;
    while(c < 0)
    {
        cout << "Invalid, negative number is not allowed" << endl;
        cout << "RE-ENTER: ";
        cin >> c;
    }
    item1.setItemNumber(itemno), item1.setQuantity(q), item1.setCost(c), item1.setTotalCost();
    item1.display();
    
}