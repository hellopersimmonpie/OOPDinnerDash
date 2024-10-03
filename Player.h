#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string Player_ID;
    int Money;

public:
    // Constructor
    Player(std::string id, int money);

    // Getter for Player_ID
    std::string getPlayerID() const;

    // Getter for Money
    int getMoney() const;

    // Method to add money
    void addMoney(int amount);
};

#endif
