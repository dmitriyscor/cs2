#include "Server.hpp"


/* Player Implementation */
Player::Player(string n, int h, string p)
    : name(n), health(h), password(p) {}


/* Admin Implementation */
Admin::Admin(string n)
{
    username = n;
}

void Admin::printPlayerInfo(const Player& p)
{
    cout << "Name: " << p.name
         << ", Health: " << p.health
         << ", Password: " << p.password << endl;
}

void Admin::healPlayer(Player& p)
{
    p.health = 100;
}
