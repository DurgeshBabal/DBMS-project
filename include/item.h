#ifndef _ITEM_H_
#define _ITEM_H_

class item
{
	char category[17];
	char compname[21];
	char partno[11];
	float price;
	char pccategory[11];

public:

	char* getcategory();

  char setcategory();

	char* getcompname();

	void setcompname();

	char* getpartno();

	void setpartno();

	float getprice();

	void setprice();

	char* getpccategory();

	void setpccategory();

  void output();
};

#endif
