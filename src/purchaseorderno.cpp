#include "../include/purchaseorderno.h"

using namespace std;

	purchaseorderno::purchaseorderno()
	{
		ponumber=1000;
	}

	int purchaseorderno::getponumber()
	{
		return ponumber;
	}

	void purchaseorderno::setponumber()
	{
		ponumber++;
	}
