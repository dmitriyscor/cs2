//
//  GameServer.cpp
//  cs2
//
//  Created by Dmytro Gozha on 4/1/25.
//

#include "GameServer.hpp"

GameServer::GameServer() {}

void GameServer::addPlayer(const Player& p)
{
    players.push_back(p);
}

void GameServer::addAdmin(const Admin& a)
{
    admins.push_back(a);
}

void GameServer::addDocument(const PersonalDocument& doc)
{
    documents.push_back(doc);
}

void GameServer::showPlayers() const
{
    for (const auto& p : players)
    {
        std::cout << "Player: " << p.getName() << std::endl; // Публичные данные
    }
}

void GameServer::showAdmins() const
{
    for (const auto& a : admins)
    {
        std::cout << "Admin: " << a.getUsername() << std::endl;
    }
}

void GameServer::showDocuments() const
{
    for (const auto& doc : documents)
    {
        std::cout << doc << std::endl;  // Используем оператор << для PersonalDocument
    }
}



//main part:
//GameServer myGameServer;
//
////Players
//Player p1("Albert", 84, "I_LOVE_GAMING");
//Player p2("Alex", 100, "I_DONT_UNDERSTAND_A_THING");
//Player p3("Henry", 23, "MOOOM_MY_TUMMY_HURTS");
//
////Admins
//Admin dmitriy(".dmitriiyyyy");
//
////Documents
//PersonalDocument pd1("Albert", "I love playing satisfactory!", 0);
//PersonalDocument pd2("Alex", "hehe boi", 0);
//PersonalDocument pd3("Henry", "I was absent!", 0);
//
//
////Adding all that to the server
//myGameServer.addPlayer(p1);
//myGameServer.addPlayer(p2);
//myGameServer.addPlayer(p3);
//
//myGameServer.addAdmin(dmitriy);
//
//myGameServer.addDocument(pd1);
//myGameServer.addDocument(pd2);
//myGameServer.addDocument(pd3);
//
//
//
////print
//myGameServer.showPlayers();
//myGameServer.showDocuments();
//
//myGameServer.showAdmins();
