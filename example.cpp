#include<iostream>
using namespace std;
main ()
{
    system("cls");
    int price;
    string brand;
    cout << "Enter the price : ";
    cin >> price;
    cout << "Enter the brand : ";
    cin >> brand;
    if (price <= 1500)
    {
        if(brand == "almirah")
        {cout << "Good";}
    }
    else
    {
        cout << "Not Good";
    }
}