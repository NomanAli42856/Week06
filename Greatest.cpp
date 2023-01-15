#include<iostream>
using namespace std;

int isGreatest(int a,int b,int c);
main ()
{
    system("cls");
    int num1,num2,num3,res;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter the third number : ";
    cin >> num3;
    res = isGreatest(num1,num2,num3);
    cout << res << " is Greatest Number.";

}

int isGreatest(int a,int b,int c)
{
    int greatest=c;
    if (a > b && a > c)
    {
        greatest = a;
    }
    else if (b > a && b > c)
    {
        greatest=b;
    }
    return greatest;
}