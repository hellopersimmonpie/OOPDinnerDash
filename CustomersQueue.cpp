#include "CustomersQueue.h"

void CustomersQueue::Enqueue(Customer* customer){
	customers.push(customer);
}

Customer* CustomersQueue::Dequeue(){
	Customer* output;
	output = customers.front();
	customers.pop();
	return output;
}
