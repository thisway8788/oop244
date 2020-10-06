
//==============================================
// Name:           Jeunghak Ham
// Student Number: 110214194
// Email:          jhham3@myseneca.ca
// Section:        NAA
// Workshop:       2 (DIY)
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"
#include "File.h"
using namespace std;
namespace sdds {
    int noOfAccounts;
    Account* accounts;


    void sort() {
        int i, j;
        Account temp;
        for (i = noOfAccounts - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (accounts[j].m_balance > accounts[j + 1].m_balance) {
                    temp = accounts[j];
                    accounts[j] = accounts[j + 1];
                    accounts[j + 1] = temp;
                }
            }
        }
    }

    bool load(Account &a) {
        bool ok = false;
        ok = read(&a.m_number) && read(&a.m_balance);
        return ok;
    }
   
    bool load(const char* fileName) {
        bool ok = false;
        int i = 0;
        if (openFile(fileName)) {
            
            noOfAccounts = noOfRecords();

            accounts = new Account[noOfAccounts];
           

            while (load(accounts[i])) {
                i++;
            }
   
            if (i != noOfAccounts) {
                cout << "Error: incorrect number of records read; the data is possibly corrupted" << endl;
            }
            else {
                ok = true;
            }
            closeFile();
        }
        else {
            cout << "Could not open data file: " << fileName << endl;
        }
        return ok;
    }

  
    void display(const Account& a) {
       
        cout << a.m_number;
        cout << ":  ";
        cout << a.m_balance << endl;
    }

    void display() {
        cout << "Account#: Balance" << endl;
        sort();
        for (int i = 0; i < noOfAccounts; i++) {
            cout << i + 1 << ": "; display(accounts[i]);
        }
    }

    // TODO: Implementation for the deallocateMemory function goes here
    void deallocateMemory() {
     
        delete[] accounts;

    }


}