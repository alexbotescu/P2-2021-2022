//
// Created by alex on 19.05.2022.
//

#ifndef MOSTENIRE_MULTIPLA_RECAP_C13_ANIMAL_H
#define MOSTENIRE_MULTIPLA_RECAP_C13_ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
public:
    virtual void eat() = 0;
};


#endif //MOSTENIRE_MULTIPLA_RECAP_C13_ANIMAL_H
