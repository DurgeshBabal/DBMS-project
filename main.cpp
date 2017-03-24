/*
Some common variables used:

[1](int) switchchoice	-	to store the value of choice variable
[2](int) flag,ctr	-	used as a counter
[3](int) i,j,k		-	loop variables

Global variables:

[1](char)categoryarr[i][j]-	store the list of categories of items
[2](char)pccategory[i][j] -     store the list of pc-categories
[3](char)str[i]		  -	store the no of digits of serial
[4](char)binarychoice	  -	used to take a Yes/No answer
[5](int) pricearr	  -	specify range of price for each category in each pc-category
[6](int) choice		  -     store the choice of the user
[7](int) place		  -     store the no of bytes to target object from the beginning
[8](int) quantity	  -     store the quantity of items to be bought or sold
[9](int) errorcode	  -     used as a switch (0 or 1)
[10](int) serial	  -     used for printing serial no
*/

//Header files being used
#include <iostream>
#include <fstream>
//#include <conio>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
//#include<dos>
//#include<graphics>
//#include<process>

// all local header definations
#include "include/item.h"
#include "include/vendor.h"
#include "include/purchaseorderno.h"
#include "include/inventory.h"
#include "include/dop.h"
#include "include/history.h"

// local header source files
#include "src/item.cpp"
#include "src/vendor.cpp"
#include "src/purchaseorderno.cpp"
#include "src/inventory.cpp"
#include "src/dop.cpp"
#include "src/history.cpp"

using namespace std;

char categoryarr[14][17]={"Chassis","Motherboard","RAM","Hard Disk Drive","DVD Writer","Graphics Card","Processor","SMPS","Keyboard","Mouse","Speakers","UPS","Monitor","Operating System"};
char pccategoryarr[4][11]={"Home PC","HTPC","Mid Range","High End"};
char str[10],binarychoice;

int pricearr[5][14]={   0   ,0	 ,0   ,0   ,0	,0   ,0	  ,0   ,0  ,0  ,0   ,0	 ,0   ,0,
			2500,4500,1500,5000,1000,3000,5500,1000,600,300,1000,2500,7000,4500,
			5000,8000,3000,7500,2000,10000,8000,3500,1000,500,3000,3500,9000,6500,
			7500,11000,4000,10000,3000,15000,10000,6000,2000,1500,5500,4500,11000,7500,
			10000,16000,5000,14000,4000,30000,12000,8500,3500,2000,6500,5000,13000,9000	};

int choice,place,quantity,errorcode=0,serial;

int main(int argc, char const *argv[]) {
  /* code */
  cout<<"this is test main file";
	item i1;
	i1.test();
  return 0;
}
