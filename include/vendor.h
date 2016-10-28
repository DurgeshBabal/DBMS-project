#ifndef _VENDOR_H_
#define _VENDOR_H_

class vendor
{
	char category[17];
	char vendorname[21];
	int moq;

  public:

	char* getcategory();

  char setcategory();

  char* getvendorname();

  void setvendorname();

  int getmoq();

  void setmoq();

  void output();

};

#endif
