#include "Server.hpp"


/* Player Implementation */
Player::Player(string n, int h, string p)
    : name(n), health(h), password(p) {}

string Player::getName() const
{
    return this->name;
}
string Player::getPassword() const
{
    return this->password;
}
int Player::getHealth() const
{
    return this->health;
}



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

string Admin::getUsername() const
{
    return this->username;
}




// Admin is a friend of Player, so Admin has full access to Player's private data.

