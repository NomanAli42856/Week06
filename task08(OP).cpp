#include<iostream>
using namespace std;

main ()
{
    system("cls");
    int num;
    cout << "Enter the number : ";
    cin >> num;
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