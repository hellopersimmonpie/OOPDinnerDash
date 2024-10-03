#include "TableManager.h"

// Method to add a customer to a table and validate the number of customers
void TableManager::addCustomerToTable(int tableNumber, Customer customer) {
    // Try to get the table from the internal table map
    Table table = tableMap.getTable(tableNumber);

    // Check if the number of customers matches the table's current number of customers
    if (table.getCustomer().getNumber() != customer.getNumber()) {
        // Trigger error if numbers don't match
        std::cerr << "Error: The number of customers provided (" << customer.getNumber()
            << ") does not match the number of customers at table " << tableNumber << " ("
            << table.getCustomer().getNumber() << ")." << std::endl;
    }
    else {
        // If the numbers match, update the table with the new customer
        table.setCustomer(customer);
        tableMap.addTable(tableNumber, table);
        std::cout << "Customer successfully added to table " << tableNumber << "." << std::endl;
        
        generateOrder(tableNumber);

        // Start a separate thread to decrease the customer's emotion
        std::thread emotionThread(&TableManager::decreaseEmotionPeriodically, this, std::ref(customer));
        emotionThread.detach(); // Detach the thread to run independently
    }
}

// Method to decrease the customer's emotion periodically
void TableManager::decreaseEmotionPeriodically(Customer& customer) {
    while (customer.getEmotion() > 0) {
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Wait for 1 second
        customer.decreaseEmotion();
        std::cout << "Customer's emotion decreased to: " << customer.getEmotion() << std::endl;
    }
}
