#include "CustomerFemale.h"
#include <thread>
#include <chrono>

void CustomerFemale::PatienceLevelDecrement() {
    while (customerPatienceLevel > 0) {
        customerPatienceLevel--;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}