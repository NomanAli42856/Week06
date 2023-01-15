#include<iostream>
using namespace std;

float discount(int price,string day,string month);
main ()
{
    system("cls");
    float price,res;
    string day,month;
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the month : ";
    cin >> month;
    res = discount(price,day,month);
    cout << res << " is the final price.";

}

float discount(int price,string day,string month)
{
    float finalprice;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august" ))
    {
        finalprice = price - (0.1*price);
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        finalprice = price - (0.05*price);
    }
    return finalprice;
}