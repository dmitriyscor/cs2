#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>
#include <iostream>
using namespace std;

class Player; // Forward declaration

class Admin
{
    string username;
public:
    Admin(string n);
    void printPlayerInfo(const Player& p);
    void healPlayer(Player& p);
};

class Player {
private:
    string name;
    int health;
    string password;

public:
    Player(string n, int h, string p);

    friend class Admin; // Admin can access private members
};

#endif // SERVER_HPP
