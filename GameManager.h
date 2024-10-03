#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "TableMap.h"
#include "Player.h"
#include <iostream>

class GameManager {
private:
    TableMap tableMap; // TableMap instance
    Player player;     // Player instance

public:
    // Constructor
    GameManager(const std::string& playerID) : player(playerID) {
        initializeTables();  // Initialize the tables in the constructor
    }

    // Method to initialize the tables in the table map
    void initializeTables();

    // Method to display player information
    void displayPlayerInfo();

    // Method to get the table map
    TableMap& getTableMap() { return tableMap; }
};

#endif
