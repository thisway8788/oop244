//
//  Transcript.cpp
//  lab3
//
//  Created by Jeunghak Ham on 2020/10/06.
//

#include "Transcript.h"
using namespace std;


namespace sdds{


void Transcript::init(const char* _name, int _n){
    if (_name == nullptr || _n < 1){
        setEmpty();
    }
    else {
        m_noOfSubjects = _n;
        m_subjectsAdded = 0;
        
        m_studentName = new char[strlen(_name)+1];//문자열은 +1 필요 널문자
        strcpy(m_studentName, _name);
        
        m_subjects = new Subject[m_noOfSubjects];
        for (int i = 0; i < m_noOfSubjects; i++){
            m_subjects[i].setEmpty();
        }
    }
    
    
    
}
void Transcript::add(const char* _sbjCode, int _score){
    
    //Subject 오브잭트를 하나 만들고,
    Subject sbj;
    //거기에 code랑 score세팅
    sbj.set(_sbjCode, _score);
    //transcript 의 m_subjects배열에 추가
    
    if (m_subjectsAdded < m_noOfSubjects){
        
        m_subjects[m_subjectsAdded] = sbj;
        m_subjectsAdded++;
        
    }
    
}
void Transcript::display() const{
   
    if (isValid()){
        Title();
        for (int i = 0; i < m_noOfSubjects; i++){
            m_subjects[i].display();
            cout << endl;
        
        }
        footer();
    }
    else{
        cout << "Invalid Transcript!" << endl;
    }

}

void Transcript::deallocate(){
    delete [] m_studentName;
    delete [] m_subjects;
    
}


void Transcript::setEmpty(){
    m_studentName = nullptr;//포인터 변수들은 set엠티하라고 하면 nullptr넣으면된다
    m_subjects = nullptr;
    
}
bool Transcript::isValid() const{
    
    if (m_studentName != nullptr && m_subjects != nullptr){
        
        bool valid = true;//로직 봐두기
        for (int i = 0; i < m_noOfSubjects; i++){
            
            if (!m_subjects[i].insValid()){
                valid = false;
            }
        }
        return valid;
        
    }
    else {
        return false;
        
    }
    
}
void Transcript::Title() const{
    cout.width(29);
    cout.setf(ios::fixed);
    cout.setf(ios::left);
    cout << m_studentName << endl;
    cout << "-----------------------------" <<endl;
    
}
float Transcript::gpa() const{
    float sum = 0;
    for (int i = 0; i < m_noOfSubjects; i++){
        sum += m_subjects[i].scale4();
        
    }
    return (float)sum / m_noOfSubjects;
}
void Transcript::footer() const{
    
    cout.setf(ios::fixed);
    cout << "-----------------------------" <<endl;
    cout.setf(ios::right);
    cout.precision(1);
    cout.width(26);
    cout << "GPA: " << gpa() << endl;
    
}


}
