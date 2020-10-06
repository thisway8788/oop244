//==============================================
// Name:           Jeunghak Ham
// Student Number: 110214194
// Email:          jhham3@myseneca.ca
// Section:        NAA
// Workshop:       2 (DIY)
//==============================================

#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
    namespace sdds {
        struct Account {
            int m_number;
            double m_balance;
        };
      
        void sort();
        bool load(Account& s);
        bool load(const char* fileName);

        

        void display(const Account& s);
        void display();
        void deallocateMemory();
    }

#endif // SDDS_ACCOUNT_H_