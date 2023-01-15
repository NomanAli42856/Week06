#include<iostream>
using namespace std;

main ()
{
    system("cls");
    int num1,num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    if (num1>num2)
    {
        cout << "Greater Number = " << num1;
    }
    else
    {
        cout << "Greater Number = " << num2;
    }
    return 0;
}