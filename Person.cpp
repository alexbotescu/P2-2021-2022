#include "Person.h"

Person::Person(char * name, int age, char * CNP){
    cout << "Constructor persoana: " << this << endl;
    if(name != nullptr)
    {
        this->name = name;
    }
    if(age > 0){
        this->age = age;
    }
    if(CNP != nullptr){
        this->CNP = CNP;
    }
}
Person::~Person(){
    if(this->name != nullptr)
        delete this->name;
    if(this->CNP != nullptr)
        delete this->CNP;
}
void Person::print(ostream & os){
    os << "Person\nName:" << name << "\nAge:" << age << "\nCNP:" << CNP;
}
ostream& operator<<(ostream & os, Person &p){
    p.print(os);
    return os;
}