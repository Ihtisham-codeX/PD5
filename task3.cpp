#include<iostream>
#include<string>
using namespace std;
int TaxCalculator();
int main()
{
    TaxCalculator(); 

}
int TaxCalculator()
{
    float price, result;
    string type;
    cout<< "Enter the type of vehicle \n M for Motorcycle \n E for Electric \n S for Sedan \n V for Van \n T for Truck  :";
    cin>> type;
    cout<<"Enter the price of vehicle";
    cin>> price;
    if( type == "M" or type == "m")
    {
        result=(0.06 * price) + price;
        cout<< "The price after includng TAX"<< result;

    }
    if( type == "E" or type == "e")
    {
        result=(0.08 * price) + price;
        cout<< "The price after includng TAX"<< result;

    }
    if(type == "S" or type == "s")
    {
        result=(0.1*price) + price;
        cout<<"The price after includng TAX"<< result;

    }
    if( type == "V" or type == "v")
    {
        result=(0.12*price) + price ;
        cout<<"The price after includng TAX"<< result;
    }
    if( type == "T" or type == "t")
    {
        result=(0.15*price) + price;
        cout<<"The price after includng TAX"<< result;

    }


}