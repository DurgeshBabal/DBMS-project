#ifndef _INVENTORY_H
#define _INVENTORY_H

class inventory
{
	char category[17];
	char compname[21];
	char partno[11];
	int quant;
	float price;
	float cost;
	char pccategory[11];

  public:

  inventory();

	char* getcategory();

	char setcategory();

	char* getcompname();

	char* getpartno();

	int getquant();

	float getprice();

	float getcost();

	void setcompname();

	void setpartno();

	void setquantadd();

	void setquantdiff();

	void setprice();

	void setcost();

	void setcost1();

	char* getpccategory();

	void setpccategory();

	void output();

	void outputsell();

};

#endif
