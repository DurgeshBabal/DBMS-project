#include "../include/inventory.h"

using namespace std;

  inventory::inventory()
  {
    quant = 0;
  }

  char* inventory::getcategory()
  {
    return category;
  }

  char inventory::setcategory()
  {
    strcpy(category,o1.getcategory());
  }

  char* inventory::getcompname()
  {
    return compname;
  }

  char* inventory::getpartno()
  {
    return partno;
  }

  int inventory::getquant()
  {
    return quant;
  }

  float inventory::getprice()
  {
    return price;
  }

  float inventory::getcost()
  {
    return cost;
  }

  void inventory::setcompname()
  {
    strcpy(compname,o1.getcompname());
  }

  void inventory::setpartno()
  {
    strcpy(partno,o1.getpartno());
  }

  void inventory::setquantadd()
  {
    extern int quantity;
    quant += quantity;
  }

  void inventory::setquantdiff()
  {
    extern int quantity;
    quant -= quantity;
  }

  void inventory::setprice()
  {
    price = o1.getprice();
  }

  void inventory::setcost()
  {
    cost = quant*o1.getprice();
  }

  void inventory::setcost1()
  {
    cost = quant*price;
  }

  char* inventory::getpccategory()
  {
    return pccategory;
  }

  void inventory::setpccategory()
  {
    strcpy(pccategory,o1.getpccategory());
  }

  void inventory::output()
  {
    printf("%-23s",compname);
    printf("%-15s",partno);
    printf("%-7i",quant);
    printf("Rs ");
    printf("%-12.2f",cost);
    printf("%s",pccategory);
    cout << endl;
  }

  void inventory::outputsell()
  {
    extern int quantity;
    cout << setw(25) << compname << setw(17) << partno << setw(11);
    cout << quantity << "Rs " << cost << endl;
  }
