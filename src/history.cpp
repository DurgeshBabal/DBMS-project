#include "../include/history.h"

using namespace std;

	history::history()
	{
		quant = 0;
	}
	char history::setcategory()
	{
		strcpy(category,o1.getcategory());
	}
	int history::getponumber()
	{
		return ponumber;
	}
	void history::setponumber()
	{
		ifstream fin("ponumber.dat",ios::binary|ios::in);
		if(!fin)
		{
			cout << "\nError in opening the file 'ponumber' in read mode";
			return;
		}

		while(fin.read((char*)&p1,sizeof(p1)))
		{
			if(fin.eof())
				break;

			ponumber = p1.getponumber();
		}

		fin.close();
	}
	void history::setdop()
	{
		extern dop d1;
		d2 = d1;
	}
	void history::setcompname()
	{
		strcpy(compname,o1.getcompname());
	}
	void history::setpartno()
	{
		strcpy(partno,o1.getpartno());
	}
	void history::setquant()
	{
		extern int quantity;
		quant += quantity;
	}
	void history::setcost()
	{
		cost = quant * o1.getprice();
	}
	void history::setpccategory()
	{
		strcpy(pccategory,o1.getpccategory());
	}
	void history::setvendorname()
	{
		strcpy(vendorname,a1.getvendorname());
	}
	void history::output()
	{
		int j;

		cout << "\n";

		for(j=0;j<80;j++)
		{
			cout<<"-";
		}

		cout << setw(20) << "\nPO number:" << "PCN/" << ponumber;
		cout << setw(20) << "\nDate of Purchase:";
		d2.output();
		cout << setw(20) << "\nCategory:" << category;
		cout << setw(20) << "\nCompany name:" << compname;
		cout << setw(20) << "\nPart no:" << partno;
		cout << setw(20) << "\nQuantity:" << quant;
		cout << setw(20) << "\nTotal cost:" << "Rs " << cost;
		cout << setw(20) << "\nPC Category:" << pccategory;
		cout << setw(20) << "\nVendor:" << vendorname << "\n\n";

		for(j=0;j<80;j++)
		{
			cout << "-";
		}

		cout << "\n";
	}
