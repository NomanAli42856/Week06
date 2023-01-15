#include<iostream>
using namespace std;

float lowestprice(int kms,string time);

main ()
{
    system("cls");

    int kms;
    float res;
    string time;
    cout << "Enter the number of kilometers : ";
    cin >> kms;
    cout << "Enter the time (day or night) : ";
    cin >> time;

    res = lowestprice(kms,time);
    cout << res << " is the lowest price.";

}

float lowestprice(int kms,string time)
{
    float fare;
    if (kms<20)
    {
        if(time == "day")
        {
            fare = 0.7+(0.79*kms);
        }
        if(time == "night")
        {
            fare = 0.7+(0.9*kms);
        }
    }
    if (kms>20 && kms < 100)
    {
        fare = 0.09*kms;
    }
    if (kms > 100)
    {
        fare = 0.06*kms;
    }
    return fare;
}