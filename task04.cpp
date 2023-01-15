#include<iostream>
using namespace std;

string checkSpeed(float speed);

main ()
{
    system("cls");

    int speed;
    string res;
    cout << "Enter the speed  : ";
    cin >> speed;
    res = checkSpeed(speed);
    cout << res ;

}

string checkSpeed(float speed)
{
    string title;
    if (speed <= 10)
    {
        title = "  Slow ";
    }
    else if (speed > 10 && speed <= 50)
    {
        title = "  Average ";
    }
    else if (speed > 50 && speed <= 150)
    {
        title = "  Fast ";
    }
    else if (speed > 150 && speed <= 1000)
    {
        title = "  Ultra Fast";
    }
    return title;
}