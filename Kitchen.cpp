#include "Kitchen.h"
#include <iostream>

// Add or update an order for a table
void Kitchen::addOrder(int tableNumber, int status) {
    orderMap[tableNumber] = status;
}

// Get the status of an order by table number
int Kitchen::getOrderStatus(int tableNumber) const {
    auto it = orderMap.find(tableNumber);
    if (it != orderMap.end()) {
        return it->second;
    }
    else {
        std::cerr << "Order for table " << tableNumber << " not found!" << std::endl;
        return -1;  // Return -1 if the table doesn't exist
    }
}

// Remove an order by table number
void Kitchen::removeOrder(int tableNumber) {
    orderMap.erase(tableNumber);
}

// Display all orders with their statuses
void Kitchen::displayOrders() const {
    for (const auto& order : orderMap) {
        std::cout << "Table Number: " << order.first
            << ", Status: " << (order.second == 0 ? "Waiting" : "Ready") << std::endl;
    }
}
