#include "stock.h"

Stock::Stock():_weight{NAN}{}

Stock::Stock(double weight):_weight{weight}{}

virtual double Stock::weight(){
    return _weight;
}

std::string Stock::ascii_art(int row){

    return _art[row];

}

