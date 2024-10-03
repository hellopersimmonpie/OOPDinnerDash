#include "Dishwasher.h"
#include <iostream>

// Constructor that initializes status to false
Dishwasher::Dishwasher() : status(false) {}

// Method to turn on the dishwasher and add 100 money to the player
void Dishwasher::TurnOn(Player& player) {
    if (!status) {
        status = true;  // Turn on the dishwasher
        player.addMoney(100);  // Add 100 money to the player
        std::cout << "Dishwasher turned on. 100 money added to the player!" << std::endl;
    }
    else {
        std::cout << "Dishwasher is already on!" << std::endl;
    }
    status = false;
}

// Method to get the current status of the dishwasher
bool Dishwasher::getStatus() const {
    return status;
}
