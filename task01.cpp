#include<iostream>
using namespace std;

char calgrade(int marks);
main ()
{
    system("cls");
    int num1;
    char res;
    cout << "Enter your numbers : ";
    cin >> num1;
    res = calgrade(num1);
    cout << "Grade : " << res ;

}

char calgrade(int marks)
{
    char grade = 'F';
    if (marks >= 85)
    {
        grade = 'A';
    }
    else if (marks >= 81 && marks < 85)
    {
        grade = 'B';
    }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 61 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks >= 50 && marks <= 60)
    {
        grade = 'E';
    }
    return grade;
}