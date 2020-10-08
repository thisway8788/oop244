//
//  Subject.cpp
//  lab3
//
//  Created by Jeunghak Ham on 2020/10/06.
//


#include "Subject.h"
using namespace std;
namespace sdds{






char Subject::grade()const{
    if (m_mark >= 0 && m_mark < 50){
        return  'F';
    }
    else if (m_mark >= 50 && m_mark < 60){
        return  'D';
    }
    else if (m_mark >= 60 && m_mark < 70){
        return  'C';
    }
    else if (m_mark >= 70 && m_mark < 80){
        return  'B';
    }
    else if (m_mark >= 80 && m_mark <= 100){
        return  'A';
    }
    else{
        return 'F';
    }
    
}


void Subject::setEmpty(){
    m_mark = -1;
    m_code[0] = '\0';
    
}

void Subject::set(const char* code, int mark){
    if (mark < 0 || mark > 100){
        setEmpty();
    }
    else{
        m_mark = mark;
        strcpy(m_code, code);//문자열복사 m_code에 있는거 code에 넣어주는거
    }
    
    
}
float Subject::scale4() const{
    char gra = grade();
    switch(gra){
            
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
        default:
            return 0.0;

    }
    
}
bool Subject::insValid() const{
    if (m_mark == -1 && m_code[0] == '\0'){
        return false;
}
else{
    return true;
}
    
    
}
void Subject::display() const{
    cout.width(15);
    cout << left << m_code;
    cout.width(3);
    cout << right << m_mark;
    cout.width(10);
    cout << right << grade();
    
}
}
