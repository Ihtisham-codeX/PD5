#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string TimeCalcuator(float Nhours , float FirmDays , float workers);
int main()
{
    float Nhours , FirmDays , workers;
    cout<<"Enter the needed hours : ";
    cin>> Nhours;
    cout<<"Enter the days the firm has : ";
    cin>> FirmDays;
    cout<<"Enter the number of all workers : ";
    cin>> workers;
    TimeCalcuator(Nhours , FirmDays , workers);

}
string TimeCalcuator(float Nhours , float FirmDays , float workers)
{
    float days,time;
    int output, TotalTime;
    days=FirmDays*0.9;
    time=days*10;
    TotalTime=time * workers;
    output=Nhours-TotalTime;
    if(Nhours > TotalTime)
    {
        
        
        cout<<"Not enough time !"<<output<<" hours needed.";
    }
    if(Nhours < TotalTime)
    {
        output=output*-1;
        cout<<"Yes!  "+ to_string(output) + "hours left";
    }


}