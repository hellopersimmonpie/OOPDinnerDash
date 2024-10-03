#ifndef KITCHEN_H
#define KITCHEN_H

#include <unordered_map>

class Kitchen {
private:
    std::unordered_map<int, int> orderMap;  // Map of table number and order status

public:
    // Add or update an order for a table
    void addOrder(int tableNumber, int status);

    // Get the status of an order by table number
    int getOrderStatus(int tableNumber) const;

    // Remove an order by table number
    void removeOrder(int tableNumber);

    // Display all orders with their statuses
    void displayOrders() const;
};

#endif