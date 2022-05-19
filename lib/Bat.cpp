

#include "Bat.h"
Bat::Bat(string name, string color, int age, int size): Mammal(name, color), WingedAnimal(name, age){
    this->size = size;
}
void Bat::eat(){
    cout << "Bat<" << name << "," << color << "," << age << "," << size << ") eating...\n";
}