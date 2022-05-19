//
// Created by alex on 19.05.2022.
//

#ifndef MOSTENIRE_MULTIPLA_RECAP_C13_WINGEDANIMAL_H
#define MOSTENIRE_MULTIPLA_RECAP_C13_WINGEDANIMAL_H
#include "Animal.h"

class WingedAnimal: public virtual Animal {
protected:
    int age;
public:
    WingedAnimal(string name, int age);
    void fly();
};


#endif //MOSTENIRE_MULTIPLA_RECAP_C13_WINGEDANIMAL_H
