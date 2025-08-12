#include<iostream>
using namespace std;

class temperature
{
    private:
        float temp;
    public:
        temperature()
        {
            temp = 0;
        }
        void TempValue(float t)
        {
            temp = t;
        }
        void setTemperature(float t)
        {
            temp = t;
        }
        float getTemperature()
        {
            return temp;
        }
        bool isEthylFreezing()
        {
            if(temp <= -173)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        bool isEthylBoiling()
        {
            if(temp >= 172)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        bool isOxygenFreezing()
        {
            if(temp <= -362)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        bool isOxygenBoiling()
        {
            if(temp >= -306)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isWaterFreezing()
        {
            if(temp <= 32)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        bool isWaterBoiling()
        {
            if(temp >= 212)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        
        void display()
        {
            bool any = false;
            if(isEthylFreezing())
            {
                cout << "Ethyl will freeze at that temprature." << endl;
                any = true;
            }
            if(isOxygenFreezing())
            {
                cout << "Oxygen will freeze at that temperature." << endl;
                any = true;
            }
             if(isWaterFreezing())
            {
                cout << "Water will freeze at that temperature." << endl;
                any = true;
            }


            if(isEthylBoiling())
            {
                cout << "Ethyl will boil at that temperature." << endl;
                any = true;
            }
            if(isOxygenBoiling())
            {
                cout << "Oxygen will boil at that temperature." << endl;
                any = true;
            }
            if(isWaterBoiling())
            {
                cout << "Water will boil at that temperature." << endl;
                any = true;
            }
            
            if(!any)
            {
                cout << "None of these substance will boil or freeze at that temperatue." << endl;
            }
        }

};


int main()
{
    temperature t1;
    float temp;
    
    cout << "Enter temperature: ";
    cin >> temp;
    
    t1.TempValue(temp);
    t1.display();

    return 0;
}
