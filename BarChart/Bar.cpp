//
//  Bar.cpp
//  DIY222
//
//  Created by Jeunghak Ham on 2020/10/07.
//

#include "Bar.h"
using namespace std;

namespace sdds{

void Bar::set(const char* title, char fillCh, int value){
    if (value < 0 || value > 100){
        setEmpty();
    }
    else{
        strcpy(m_title, title);
        m_fillCh = fillCh;
        m_value = value;
    }
}

void Bar::draw(){
    if (isValid()){
        cout.width(20);
        cout.fill('.');
        cout << left << m_title;
        cout << '|';
        
        for (int i = 0; i < (m_value / 2); i++){
            cout << m_fillCh;
        }
        cout << endl;
    }
}

void Bar::setEmpty(){
    m_title[0] = '\0';
    m_value = 0;
}

bool Bar::isValid(){
    if (m_title[0] == '\0' || m_value == 0){ 
        
        return false;
    }
    else{
        return true;
    }
    
}


}
