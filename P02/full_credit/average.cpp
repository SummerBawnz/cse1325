//#include <iostream>
#include "average.h"


//class Average implementation

//constructor
Average::Average():_sum{0},_values{0}{}


//+friend operator<<
std::ostream& operator<<(std::ostream& ost, Average& average){
    if(average._values!=0){
        ost<<average._sum/average._values;
        return ost;
    }
    else
    {
        ost<<"undefined";
        return ost;
    }

}

//+friend operator >>
std::istream& operator>>(std::istream& ist, Average& average){
    double temp;
    ist>>temp;
    average._sum += temp;
    average._values += 1;
    return ist;

}

//+operator +=
Average& Average::operator+=(double value){
    _sum += value;
    _values += 1;
    
} 
