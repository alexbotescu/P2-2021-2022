//
// Created by alex on 17.03.2022.
//

#include "Tests.h"
#include <iostream>
void Tests::funct_C(int * x){
    * x ++;
    std::cout << "In functie funct_C: valoarea lui x este: " << *x << std::endl;
}
void Tests::funct_CPP(int & x){
    x ++;
}