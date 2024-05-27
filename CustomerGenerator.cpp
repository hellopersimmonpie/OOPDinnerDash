#include "CustomerGenerator.h"
#include <cstdlib>
#include <ctime>
#include <random>
#include "CustomerFemale.h"
#include "CustomerMale.h"

Customer* CustomerGenerator::generateCustomer() {

    Customer* output;

    std::random_device rd;
    std::mt19937 gen(rd());
    //random number 1 to 2
    std::uniform_int_distribution<int> distribution(4, 8);
    int customerType = distribution(gen);

    // random number 1 to 4
    std::uniform_int_distribution<int> distribution2(1, 4);
    int countNumber = distribution2(gen);

    if (customerType == 1) {
        CustomerMale male;
        output = &male;
    }
    else {
        CustomerFemale female;
        output = &female;
    }

    output->setCustomerCount(countNumber);
    output->setCustomerPatienceLevel();

    return output;
}