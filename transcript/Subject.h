//
//  Subject.h
//  lab3
//
//  Created by Jeunghak Ham on 2020/10/06.
//

#ifndef Subject_h
#define Subject_h

#include <iostream>
namespace sdds {

    
    class Subject{
        
        char m_code[7];
        int m_mark;
        
        char grade()const;
        
    public:
        void setEmpty();
        void set(const char* code, int mark);
        float scale4() const;
        bool insValid() const;
        void display() const;
        
    };
    
    
    
    
    
    
    
    
}

#endif
