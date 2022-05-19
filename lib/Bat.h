//
// Created by alex on 19.05.2022.
//

#ifndef MOSTENIRE_MULTIPLA_RECAP_C13_BAT_H
#define MOSTENIRE_MULTIPLA_RECAP_C13_BAT_H

#include "Mammal.h"
#include "WingedAnimal.h"
class Bat: public Mammal, public WingedAnimal {
private:
    int size;
public:
    Bat(string name, string color, int age, int size);
    void eat();
};


#endif //MOSTENIRE_MULTIPLA_RECAP_C13_BAT_H
