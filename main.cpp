#include <iostream>
#include "Customer.h"
#include "CustomerFemale.h"
#include "CustomerMale.h"
#include "CustomerGenerator.h"
#include <queue>
/*void decrementCust(Customer cs) {

    // Start a thread to decrease patience level over time
    thread patienceThread(decreasePatience, cs);

    // Let the program run for a while
    this_thread::sleep_for(chrono::seconds(10));

    // Join the patience thread to prevent program termination
    patienceThread.join();

}*/

int main() {
    // Create a customer with initial patience level 5

    std::queue<Customer*> customers;
    CustomerGenerator d;
    Customer* c = d.generateCustomer();
    CustomerFemale a;
    CustomerFemale b;
    customers.push(c);
    
    std::cout << customers.front()->getCustomerCount() << std::endl;
    std::cout << c->getCustomerPatienceLevel() << std::endl;
}