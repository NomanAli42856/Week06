#include<iostream>
using namespace std;

main ()
{
    system("cls");
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num > 50)
    {
        cout << "You have passed.";
    }
    else
    {
        cout << "You have failed.";
    }
    return 0;
}