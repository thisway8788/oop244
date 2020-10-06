//==============================================
// Name:           Jeunghak Ham
// Student Number: 110214194
// Email:          jhham3@myseneca.ca
// Section:        NAA
// Workshop:       2 (DIY)
//==============================================

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();

   bool read(int* number);
   bool read(double* balance);

}
#endif // !SDDS_FILE_H_
