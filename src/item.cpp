//#ifndef _ITEM_H_
//#define _ITEM_H_

#include "../include/item.h"

using namespace std;

  char* item::getcategory()
  {
    return category;
  }

  char item::setcategory()
  {
    extern char **categoryarr;
    extern int choice;
    strcpy(category,categoryarr[choice-1]);
  }

  char* item::getcompname()
  {
    return compname;
  }

  void item::setcompname()
  {
    itemcompnamelbl:

    cout << "\nEnter the company name:\t";
    cin >> compname;

    if(strlen(compname)>20)
    {
      cout << "\nEnter a string less than 21 characters\n";
      goto itemcompnamelbl;
    }
  }

  char* item::getpartno()
  {
    return partno;
  }

  void item::setpartno()
  {
    itempartnolbl:

    cout << "\nEnter the part no:\t";
    cin >> partno;

    if(strlen(partno)>10)
    {
      cout<<"\nEnter a string less than 11 characters\n";
      goto itempartnolbl;
    }
  }

  float item::getprice()
  {
    return price;
  }

  void item::setprice()
  {
    cout << "\nEnter the price in Rs:\t";
    cin >> price;
  }

  char* item::getpccategory()
  {
    return pccategory;
  }

  void item::setpccategory()
  {
    extern int choice, **pricearr;

    if(price>pricearr[0][choice-1] && price<=pricearr[1][choice-1])
    {
      strcpy(pccategory,"Home PC");
    }
    else if(price>pricearr[1][choice-1] && price<=pricearr[2][choice-1])
    {
      strcpy(pccategory,"HTPC");
    }
    else if(price>pricearr[2][choice-1] && price<=pricearr[3][choice-1])
    {
      strcpy(pccategory,"Mid Range");
    }
    else
      strcpy(pccategory,"High End");
  }

  void item::output()
  {
    cout << setw(25) << compname << setw(15) << partno << "Rs ";
    std::printf("%-13.2f",price);
    cout<<pccategory;
  }

  void item::test()
  {
    cout << "test messages" << endl;
  }

//#endif
