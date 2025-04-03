//
//  GameServer.hpp
//  cs2
//
//  Created by Dmytro Gozha on 4/1/25.
//

#ifndef GameServer_hpp
#define GameServer_hpp

#include "../Friend/Server.hpp"
#include "../OperatorOverloading/Documentation.hpp"

#include <stdio.h>
#include <string>


class GameServer
{
private:
    std::vector<Player> players;
    std::vector<Admin> admins;
    std::vector<PersonalDocument> documents;
public:
    
    GameServer();
    
    void addPlayer(const Player& p);
    void addAdmin(const Admin& a);
    void addDocument(const PersonalDocument& doc);

    void showPlayers() const;
    void showAdmins() const;
    void showDocuments() const;
    
    
};

#endif /* GameServer_hpp */
