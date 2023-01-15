#include<iostream>
using namespace std;

main ()
{
    system("cls");
    int cost;
    string brand;
    cout << "Enter the cost of the dress : ";
    cin >> cost;
    cout << "Enter brand of the dress : ";
    cin >> brand;
    if (cost < 1500 && brand == "MTJ")
    {
        cout << "Buy the dress";
    }

}