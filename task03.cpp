#include<iostream>
using namespace std;

string checkTitle(int age, char gender);

main ()
{
    system("cls");

    int age;
    char gndr;
    string res;
    cout << "Enter your age  : ";
    cin >> age;
    cout << "Enter your gender (m for male , f for female): ";
    cin >> gndr;
    res = checkTitle(age,gndr);
    cout << res << " is your title.";

}

string checkTitle(int age, char gender)
{
    string title;
    if (age >= 16 && gender == 'm')
    {
        title = "  Mr.";
    }
    else if (age < 16 && gender == 'm')
    {
        title = "  Master";
    }
    else if (age < 16 && gender == 'f')
    {
        title = "  Miss";
    }
    else if(age >= 16 && gender == 'f')
    {
        title = "  Ms.";
    }
    return title;
}