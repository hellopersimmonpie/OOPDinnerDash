#pragma once
#include "Handler.h"
#include "Kitchen.h"
#include "TableMap.h"

class OrderHandler : public Handler{
	private:
		TableMap tableMap;
		Kitchen observer;
	
	public:
		void handle();
		void notifyObservers();
};

