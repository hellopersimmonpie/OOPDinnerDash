#include "CustomerMale.h"
#include <thread>
#include <chrono>

void CustomerMale::PatienceLevelDecrement() {
    while (customerPatienceLevel > 0) {
        customerPatienceLevel = customerPatienceLevel - 2;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}