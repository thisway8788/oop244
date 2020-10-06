//==============================================
// Name:           Jeunghak Ham
// Student Number: 110214194
// Email:          jhham3@myseneca.ca
// Section:        NAA
// Workshop:       2 (DIY)
//==============================================


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }


   bool read(int* number) {
       return fscanf(fptr, "%d,", number) == 1;
   }

   bool read(double* balance) {
       return fscanf(fptr, "%lf\n", balance) == 1;
   }
}