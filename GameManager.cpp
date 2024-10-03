#include "GameManager.h"

// Method to initialize the tables in the table map
void GameManager::initializeTables() {
    for (int i = 1; i <= 6; ++i) {
        Customer customer(0, 5);  // Default customer with number 0 and emotion 5
        Table table(customer, -1);  // Default table status: Not yet served

        if (i <= 3) {
            // Tables 1-3 for 2 customers
            table.setCustomer(Customer(2, 5));  // Update the customer count
            table.setStatus(-1);  // Not yet served
        }
        else {
            // Tables 4-6 for 5 customers
            table.setCustomer(Customer(5, 5));  // Update the customer count
            table.setStatus(-1);  // Not yet served
        }

        // Add the table to the table map
        tableMap.addTable(i, table);
    }
}

void GameManager::displayPlayerInfo() {

    std::cout << "Player ID: " << player.getPlayerID() << ", Money: " << player.getMoney() << std::endl;
}
