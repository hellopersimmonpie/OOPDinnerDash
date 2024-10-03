#include "Player.h"

// Constructor
Player::Player(std::string id, int money) : Player_ID(id), Money(money) {}

// Getter for Player_ID
std::string Player::getPlayerID() const {
    return Player_ID;
}

// Getter for Money
int Player::getMoney() const {
    return Money;
}

// Method to add money
void Player::addMoney(int amount) {
    Money += amount;
}
