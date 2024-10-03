#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"  // Include the Customer class

class Table {
private:
    Customer customer;  // Customer object
    int Status;

public:
    // Constructor with default status set to -2 (empty)
    Table(Customer customer = Customer(0, 5), int status = -2);

    // Getters
    Customer getCustomer() const;
    int getStatus() const;

    // Setters
    void setCustomer(Customer customer);
    void setStatus(int status);

    // Method to display status as a string
    const char* getStatusString() const;
};

#endif