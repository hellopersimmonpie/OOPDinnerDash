#include "OrderHandler.h"

void OrderHandler::handle(){
	notifyObservers();
}

void OrderHandler::notifyObservers(){
	char input;
	observer.update(input);
}
