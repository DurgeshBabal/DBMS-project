#ifndef _PURCHASEORDERNO_H_
#define _PURCHASEORDERNO_H_

class purchaseorderno
{
	int ponumber;

     public:
	purchaseorderno()
	{
		ponumber=1000;
	}
	int getponumber()
	{
		return ponumber;
	}
	void setponumber()
	{
		ponumber++;
	}
};

#endif
