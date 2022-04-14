//
// Created by alex on 14.04.2022.
//

#ifndef P2_CURS8_DRIVER_H
#define P2_CURS8_DRIVER_H

#include "str.h"
class Driver {
    str name;
public:
    Driver(str n): name {n} { }
    friend ostream& operator << (ostream &os, Driver &d){
        os << "Driver " << d.name;
        return os;
    }
};


#endif //P2_CURS8_DRIVER_H
