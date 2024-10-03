#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
private:
    int Number;
    int Emotion;

public:
    // Constructor with default Emotion value
    Customer(int number, int emotion = 5);

    // Getters
    int getNumber() const;
    int getEmotion() const;

    // Setters
    void setNumber(int number);
    void setEmotion(int emotion);

    // Decrease Emotion function
    void decreaseEmotion();
};

#endif