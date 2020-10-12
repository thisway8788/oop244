//
//  Bar.hpp
//  DIY222
//
//  Created by Jeunghak Ham on 2020/10/07.
//

#ifndef Bar_h
#define Bar_h

#include <iostream>
#include <cstring>
namespace sdds{

class Bar{
    char m_title[21];
    char m_fillCh;
    int m_value;
  
public:
    void set(const char* title, char fillCh, int value);
    void draw();
    
    void setEmpty();
    bool isValid();
    
    
};




}



#endif
