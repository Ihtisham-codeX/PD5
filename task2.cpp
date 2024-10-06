#include<iostream>
#include<string>
using namespace std;
int volume();
int main()
{
    volume();


}
int volume()
{
    float length, width , height , result , output;
    string unit;
    cout<<"Enter the length of pyramid : ";
    cin >> length;
    cout<<"Enter the width of parameter :";
    cin>> width;
    cout<< "Enetr the height of pyramid :";
    cin>> height;
    cout<<" Enter the desired output (mm , cm m km ) : ";
    cin>> unit;
    output = (1.0/3.0) *(length * height * width);
    if(unit == "mm")
    {
        result=output*1000;
        cout<< "Volume : "<< result <<" "<< unit;
    }
    if(unit == "cm")
    {
        result=output*100;
        cout<< "Volume : "<< result <<" "<< unit;
    }
    if(unit == "m")
    {
        result=output;
        cout<< "Volume : "<< result <<" "<< unit;
    }
    if(unit == "km")
    {
        result=output*0.001;
        cout<< "Volume : "<< result <<" "<< unit;
    }
}