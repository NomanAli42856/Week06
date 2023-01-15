#include<iostream>
using namespace std;

main ()
{
    system("cls");
    char lecture;
    char going;
    cout << "Do you have class today(Press Y for yes) : ";
    cin >> going;
    cout << "Are your friends going(Press Y for yes) : ";
    cin >> lecture;
    if (going == 'Y')
    {
        if(lecture == 'Y')
        {
           cout << "You are also going";
        }
    }

}