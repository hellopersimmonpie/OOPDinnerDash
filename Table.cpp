#include "Table.h"
#include <iostream>

// Constructor implementation with default Status as -2 (empty)
Table::Table(Customer customer, int status) : customer(customer), Status(status) {}

// Getter for Customer
Customer Table::getCustomer() const {
    return customer;
}

// Getter for Status
int Table::getStatus() const {
    return Status;
}

// Setter for Customer
void Table::setCustomer(Customer customer) {
    this->customer = customer;
}

// Setter for Status
void Table::setStatus(int status) {
    Status = status;
}

// Method to return the status as a string
const char* Table::getStatusString() const {
    switch (Status) {
    case -2: return "Empty";
    case -1: return "Not yet served";
    case 0:  return "Waiting";
    case 1:  return "Served";
    case 2:  return "Dirty";
    default: return "Unknown Status";
    }
}