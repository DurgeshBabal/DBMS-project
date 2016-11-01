#ifndef _HISTORY_H
#define _HISTORY_H

class history
{
	int ponumber;
	dop d2;
	char category[17];
	char compname[21];
	char partno[11];
	int quant;
	float cost;
	char pccategory[11];
	char vendorname[21];

  public:
	history();

	char setcategory();

	int getponumber();

	void setponumber();

	void setdop();

	void setcompname();

	void setpartno();

	void setquant();

	void setcost();

	void setpccategory();

	void setvendorname();

	void output();

};

#endif
