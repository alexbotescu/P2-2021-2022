//
// Created by alex on 14.04.2022.
//

#ifndef P2_CURS8_PASSAGER_H
#define P2_CURS8_PASSAGER_H

#include "str.h"
class Passager {
str * name;
int age;
public:
    Passager(): name{new str("")}, age{0} {  }
    Passager(str * _name, int _age): name{_name}, age{_age} { }
    virtual ~Passager(){
        cout << "Distrug pasagerul\n";
        if(name != nullptr){
            delete name;
        }
    }
    friend ostream& operator<<(ostream &os, Passager &p){
        os <<"Name:" << *(p.name) << "\nAge:" << p.age;
        return os;
    }
};


#endif //P2_CURS8_PASSAGER_H
