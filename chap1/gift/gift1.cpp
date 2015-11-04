/*
ID: eddiego1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace std;

class Player {
    public:
        int money;
        String name[15];
        Player(int init_money = 0, String* name)
        {
            money = init_money;
            name = 
        }
}

int main()
{
    ifstream giftin;
    ofstream giftout;
    int np;
    vector <Player> p;

    giftin.open("gift1.in");
    giftout.open("gift1.out");
    
    np << giftin;
    for(int i = 0; i < np; i++)
    {
        p.push_back(Player(

    }



    giftin.close();
    giftin.close();
    return 0;
}
