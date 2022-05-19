//
// Created by alex on 19.05.2022.
//

#include "WingedAnimal.h"
WingedAnimal::WingedAnimal(string name, int age) {
    this->name = name; this->age = age;
}
void WingedAnimal::fly(){
    cout << "WingedAnimal<" << name << "," << age << "> flying!\n";
}