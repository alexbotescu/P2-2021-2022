//
// Created by alex on 14.04.2022.
//

#ifndef P2_CURS8_CAR_H
#define P2_CURS8_CAR_H

#include "Engine.h"
#include "str.h"
#include "Driver.h"
#include "Passager.h"
class Car {
private:
    Engine * e; /* de compozitie */
    str * marca;
    Passager ** passagers; /* de agregare */
    int index;
    void __add_passager(Passager *p){
        this->passagers[index ++] = p;
    }
public:
    void drive(Driver d){ /* de dependenta */
        cout <<  d << " is driving...\n";
    }
    Car(): e {nullptr}, marca {new str("")}, passagers{nullptr} { }
    Car(Engine * ee, str * m, int no_passagers){
        e = ee;
        marca = m;
        passagers = new Passager*[no_passagers];
    }
    Car& operator+=(Passager *p){
        this->__add_passager(p);
        return * this;
    }
    virtual ~Car() {
        cout << "Distrug masina\nApel destructor masina\n";
        if (e != nullptr) {
            delete e;
        }
        /* urmeaza restul campurilor. */
        if (marca != nullptr) {
            delete marca;
        }
    }
    friend ostream& operator<<(ostream& os, Car &c){
        os << "Car\nMarca:" << *(c.marca) << "\nEngine:" << *(c.e) << "\nPasagerii:\n";
        int psg_no = 1;
        int i;
        for(i=0;i<c.index;i++)
            os << "Pasager " << psg_no++ << "\t" <<  * (c.passagers[i]) << endl;
        return os;
    }
};


#endif //P2_CURS8_CAR_H
