#include<iostream>
using namespace std;

main ()
{
    system("cls");
    int num;
    cout << "Enter the cost of the dress : ";
    cin >> cost;
    if ((num % 2) == 0)
    {
        cout << "Even Number.";
    }
    else
    {
        cout << "Odd Number.";
    }
    return 0;
}