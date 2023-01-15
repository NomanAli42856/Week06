#include<iostream>
using namespace std;

int playingtime(string year,int holiday,int wekndathom);

main()
{
    system("cls");

    int holiday,wekndathom,res;
    string year;
    cout << "Enter the year (normal/leap) : ";
    cin >> year;
    cout << "Enter the number of holidays : ";
    cin >> holiday;
    cout << "Enter the number of weekends at home : ";
    cin >> wekndathom;
    res = playingtime(year,holiday,wekndathom);
    cout << "Number of time played : " << res;

    
}

int playingtime(string year,int holiday,int wekndathom)
{
    float playinholidays,playtimes;
    if (year == "normal")
    {
        int playsat = 48;
        playinholidays = (holiday*2)/3;
        playtimes = 48 + playinholidays;
    }
    else if (year == "leap")
    {
        int playsat = 48;
        playinholidays = (holiday*2)/3;
        playtimes = 48 + playinholidays;
        playtimes = playtimes + (0.15*playtimes);
    }
    return playtimes;
}