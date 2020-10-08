//
//  Transcript.h
//  lab3
//
//  Created by Jeunghak Ham on 2020/10/06.
//

#ifndef Transcript_h
#define Transcript_h

#include <iostream>
#include "Subject.h"
namespace sdds{


class Transcript {
    
    char* m_studentName;
    Subject* m_subjects; //Array
    int m_noOfSubjects;
    int m_subjectsAdded;
    
    
    void setEmpty();
    
    
    bool isValid() const;
    void Title() const;
    float gpa() const;
    void footer() const;
  
public:
    void init(const char* _name, int _n);
    void add(const char* _sbjCode, int _score);
    void display() const;
    void deallocate();
    
};
}


#endif
