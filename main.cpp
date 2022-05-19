#include <iostream>
#include <string>
#include <typeinfo>
#include <list>
using namespace std;
class Animal {
protected:
    string name;
public:
    virtual void eat() = 0;
};

class Mammal : public virtual Animal {
protected:
    string color;
public:
    Mammal(string name, string color);
    void eat();
};

Mammal::Mammal(string name, string color){
this->name = name;
this->color = color;
}

void Mammal::eat(){
    cout << "Mammal eating..." << endl;
}

class WingedAnimal: public virtual Animal {
protected:
    int age;
public:
    WingedAnimal(string name, int age);
    void fly();
    void eat();
};

WingedAnimal::WingedAnimal(string name, int age) {
    this->name = name; this->age = age;
}
void WingedAnimal::fly(){
    cout << "WingedAnimal<" << name << "," << age << "> flying!\n";
}

void WingedAnimal::eat(){
    cout << "WingedAnimal<" << name << "," << age << "> eating!\n";
}


class Bat: public Mammal, public WingedAnimal {
private:
    int size;
public:
    Bat(string name, string color, int age, int size);
    void eat();
};

Bat::Bat(string name, string color, int age, int size): Mammal(name, color), WingedAnimal(name, age){
    this->size = size;
}
void Bat::eat(){
    cout << "Bat<" << name << "," << color << "," << age << "," << size << "> eating...\n";
}


int main() {
    Animal * a = new Bat("Popescu", "black", 12, 15);
    a->eat();
    list<Animal*> animals;
    animals.push_back(new Mammal("maria", "blue"));
    animals.push_back(new WingedAnimal("ion", 21));
    animals.push_back( new Bat("Popescu", "black", 12, 15));
    for_each(animals.begin(), animals.end(),
             [](Animal * a) -> void {
                a->eat();
    });
    for_each(animals.begin(), animals.end(),
             [](Animal * a) -> void {
                 if(dynamic_cast<Mammal*>(a))
                     cout << "Tip: mammal";
                 else if(dynamic_cast<WingedAnimal*>(a))
                     cout << "Tip: WingedAnimal";
                 else
                     cout << "Tip: Bat";
                 cout << endl;
             });
    int i = 1;
    for_each(animals.begin(), animals.end(),
             [&i](Animal * a) -> void{
                cout << "Tip obiect [" << i ++ << "]: " << typeid(* a).name() << endl;
    });
    return 0;
}
