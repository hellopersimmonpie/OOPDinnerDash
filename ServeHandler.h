#pragma once
#include "Handler.h"
#include "Kitchen.h"
#include "TableMap.h"
class ServeHandler : public Handler {
	private:
		Kitchen kitchen;
		TableMap observers;
	public:
};

