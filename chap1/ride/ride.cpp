/*
ID: eddiego1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace std;

int get_num(char *a)
{
    int i = 0, sum = 1;
    do
    {
        sum *= (int)a[i] - 64;
        i++;
    }while(a[i] != '\0');

    return sum%47;
}

int main()
{
    char a[8], b[8];
    int a_sum = 0, b_sum = 0, i = 0;
    ifstream ridein;
    ofstream rideout;
    
    ridein.open("ride.in");
    rideout.open("ride.out");

    ridein >> a >> b;

    if(get_num(&a[0]) == get_num(&b[0]))
    {
        rideout << "GO" << endl;
    }else
    {
        rideout << "STAY" << endl;
    }
    rideout.close();
    ridein.close();
    return 0;
}
