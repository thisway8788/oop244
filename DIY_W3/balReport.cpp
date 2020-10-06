// Workshop 2: 
// Version: 0.9
// Date: 09/25/2020
// Author: Fardad Soleimanloo
// Reviewed by: Michael Huang
// Description:
// This file tests the DIY section of your workshop
// Do not modify your code
/////////////////////////////////////////////
//==============================================
// Name:           Jeunghak Ham
// Student Number: 110214194
// Email:          jhham3@myseneca.ca
// Section:        NAA
// Workshop:       2 (DIY)
//==============================================

#include "Account.h"
using namespace sdds;
int main() {
   if (load("accounts.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}