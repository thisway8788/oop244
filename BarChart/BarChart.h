//
//  BarChart.hpp
//  DIY222
//
//  Created by Jeunghak Ham on 2020/10/08.
//

#ifndef BarChart_h
#define BarChart_h


#include <iostream>
#include <cstring>
#include "Bar.h"
namespace sdds{

class BarChart{
    
    char* m_titleOfChart;
    Bar* m_bars;
    
    char m_ch;
    int m_noOfBars;
    int m_noOfBarsAdded;
    
    
    void setEmpty();
public:
    void init(const char* cTitle, int count, char ch);
    void add(const char * bTitle, int value);
    void draw();
    void deallocate();
    
    bool isValid();
    
    
    
    
};









}

#endif
