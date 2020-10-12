//
//  BarChart.cpp
//  DIY222
//
//  Created by Jeunghak Ham on 2020/10/08.
//

#include "BarChart.h"
using namespace std;

namespace sdds{

void BarChart::init(const char* cTitle, int count, char ch){
    if (cTitle == nullptr || count < 1 || ch == 0){
        
        setEmpty();
    }
    else{
    
        m_noOfBars = count;
        m_noOfBarsAdded = 0;
        
        m_titleOfChart = new char[strlen(cTitle) + 1];
        strcpy(m_titleOfChart, cTitle);
        
        m_bars = new Bar[m_noOfBars];
        for (int i = 0; i < m_noOfBars; i++){
            m_bars[i].setEmpty();
        }
            
            m_ch = ch;
    }
    
}


void BarChart::setEmpty(){
    m_bars = nullptr;
    m_titleOfChart = nullptr;
    m_noOfBars = 0;
    m_noOfBarsAdded = 0;
}


void BarChart::add(const char * bTitle, int value){
    Bar br;
    br.set(bTitle, m_ch, value);
    
    if (m_noOfBarsAdded < m_noOfBars){
        m_bars[m_noOfBarsAdded] = br;
        m_noOfBarsAdded++;
    }
    
}
void BarChart::draw(){
    if (isValid()){
        cout << m_titleOfChart << endl;
        cout << "----------------------------------------------------------------------" << endl;
        for (int i = 0; i < m_noOfBars; i++){
            m_bars[i].draw();
            
        }
        cout << "----------------------------------------------------------------------" << endl;
    }
    else{
    cout << "Invalid Chart!" << endl;
}
}

void BarChart::deallocate(){
    delete [] m_bars;
    delete [] m_titleOfChart;
}

bool BarChart::isValid(){
    if (m_bars != nullptr && m_titleOfChart != nullptr){
        
        bool valid = true;
        for (int i = 0; i < m_noOfBars; i++){
            
            if (!m_bars[i].isValid()){
                valid = false;
            }
        }
        return valid;
    }
    else {
        return false;
    }
 
}

}
