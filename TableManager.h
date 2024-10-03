#ifndef TABLE_MANAGER_H
#define TABLE_MANAGER_H

#include "TableMap.h"
#include "Customer.h"
#include <iostream>
#include <thread>
#include <chrono>

class TableManager {
private:
    TableMap tableMap;  // TableMap as an attribute of TableManager

public:
    // Method to add a customer to a table and validate the number of customers
    void addCustomerToTable(int tableNumber, Customer customer);
    
    //Method to generate order
    void generateOrder(int tableNumber);

    // Method to decrease the customer's emotion periodically
    void decreaseEmotionPeriodically(Customer& customer);
};

#endif
