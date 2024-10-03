#include "Customer.h"
#include <iostream>

// Constructor implementation with default Emotion value
Customer::Customer(int number, int emotion) : Number(number), Emotion(emotion) {}

// Getter for Number
int Customer::getNumber() const {
    return Number;
}

// Getter for Emotion
int Customer::getEmotion() const {
    return Emotion;
}

// Setter for Number
void Customer::setNumber(int number) {
    Number = number;
}

// Setter for Emotion
void Customer::setEmotion(int emotion) {
    Emotion = emotion;
}

// Decrease Emotion function implementation
void Customer::decreaseEmotion() {
    if (Emotion > 0) {
        --Emotion;
    }
    else {
        std::cout << "Emotion is already zero." << std::endl;
    }
}