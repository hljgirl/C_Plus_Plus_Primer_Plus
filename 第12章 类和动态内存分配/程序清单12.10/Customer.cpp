#include "stdafx.h"
#include <iostream>
#include "Customer.h"

void Customer::set(long when)
{
	arrive = when;
	processtime = std::rand() % 3 + 1;
}
