#ifndef DISHWASHER_H
#define DISHWASHER_H

#include "Player.h"  // Include Player class

class Dishwasher {
private:
    bool status;

public:
    // Constructor that initializes status to false
    Dishwasher();

    // Method to turn on the dishwasher and add money to player
    void TurnOn(Player& player);

    // Method to get the current status of the dishwasher
    bool getStatus() const;
};

#endif