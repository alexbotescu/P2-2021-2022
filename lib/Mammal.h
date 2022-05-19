//
// Created by alex on 19.05.2022.
//

#ifndef MOSTENIRE_MULTIPLA_RECAP_C13_MAMMAL_H
#define MOSTENIRE_MULTIPLA_RECAP_C13_MAMMAL_H

#include "Animal.h"
class Mammal : public virtual Animal {
protected:
    string color;
public:
    Mammal(string name, string color);
    void eat();
};


#endif //MOSTENIRE_MULTIPLA_RECAP_C13_MAMMAL_H
