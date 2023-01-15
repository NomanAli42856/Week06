#include<iostream>
using namespace std;

float totalIncome(string scr_typ , int rows,int cols);

main ()
{
    system("cls");

    int row,col;
    float res;
    string scr;
    cout << "Enter the type of the screen : ";
    cin >> scr;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the type of the screen : ";
    cin >> col;
    res = totalIncome(scr,row,col);
    cout << res << " is total income if the hall is full.";

}

float totalIncome(string scr_typ , int rows,int cols)
{
    float income;
    if (scr_typ == "premiere")
    {
        income = rows*cols*12;
    }
    else if (scr_typ == "normal")
    {
        income = rows*cols*7.5;
    }
    else if (scr_typ == "discount")
    {
        income = rows*cols*5;
    }
    return income;
}