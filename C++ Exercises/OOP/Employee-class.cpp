#include<iostream>
using namespace std;

class Employee
{
    private:
        string name, department, position;
        int idNumber;
    public:
        Employee()
        {
            name = " ";
            department = " ";
            position = " ";
            idNumber = 0; 
        }
        void employeeInfo(string empname, int empid)
        {
            name = empname;
            idNumber = empid;
            department = " ";
            position = " ";
        }
        void employeeInfo2(string n, int id, string p, string d)
        {
            name = n;
            idNumber = id;
            department = d;
            position = p;
        }
        void setName(string emp_name)
        {
            name = emp_name;
        }
        void setID(int id_numb)
        {
            idNumber = id_numb;
        }
        void setPosition(string emp_postition)
        {
            position = emp_postition;
        }
        void setDeparment(string emp_dep)
        {
            department = emp_dep;
        }
        string getname()
        {
            return name;
        }
        int getid()
        {
            return idNumber;
        }
        string getposition()
        {
            return position;
        }
        string getdepartment()
        {
            return department;
        }
        void display()
        {
            string r1 = getname(), r2 = getposition(), r3 = getdepartment();
            int r4 = getid();
            cout << r1 << " " << r4 << " " << r3 << " " << r2 << endl;  
        }
};


int main()
{
   Employee emp1;
   Employee emp2;
   Employee emp3;
   emp1.employeeInfo2("Susan Meyers", 47899, "Vice President", "Accounting");
   
   emp2.employeeInfo("Mark Jones", 39119);
   emp2.setDeparment("IT");
   emp2.setPosition("Programmer");
   

   emp3.setName("Joy Rogers");
   emp3.setID(81774);
   emp3.setPosition("Enginner");
   emp3.setDeparment("Manufacturing");

   emp1.display();
   emp2.display();
   emp3.display();
   
    return 0;
}