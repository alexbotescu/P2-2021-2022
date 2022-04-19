//#include "Person.h"
#include <iostream>
using namespace std;
class Person{
protected:
    char * name;
    int age;
    char * CNP;
public:
    Person(char *, int, char *);
    virtual ~Person();
    virtual ostream& print(ostream &); /* am o copie a acestei functii in clasa derivata; o fac virtuala. */
    friend ostream& operator<<(ostream &, Person &);
};

Person::Person(char * name, int age, char * CNP){
    cout << "Constructor persoana: " << this << endl;
    if(name != nullptr)
    {
        this->name = new char[sizeof(name)];
        strcpy(this->name,name);
    }
    if(age > 0){
        this->age = age;
    }
    if(CNP != nullptr){
        this->CNP = new char[sizeof(CNP)];
        strcpy(this->CNP, CNP);
    }
}
Person::~Person(){
    cout << "Destructor Persoana: " << this << endl;
    if(this->name != nullptr)
        delete this->name;
    if(this->CNP != nullptr)
        delete this->CNP;
}
ostream& Person::print(ostream & os){
    os << "Person\nName:" << name << "\nAge:" << age << "\nCNP:" << CNP;
    return os;
}
ostream& operator<<(ostream & os, Person &p){
   return p.print(os);
}

class Student: public Person{
private:
    int an_studiu;
    int grupa;
    float media;
public:
    Student(char *, int, char *, int, int, float);
    virtual ~Student();
    ostream& print(ostream&) override; /* nu va mai fi suprascrisa in alte clase derivate. */
    friend ostream& operator<<(ostream &, Student &);
};
Student::Student(char *name, int age, char *CNP, int _an, int _grupa, float _media): Person(name, age, CNP), an_studiu{_an}, grupa{_grupa}, media{_media}  {
    cout << "Constructor Student:" << this << endl;
}
Student::~Student(){
    cout << "Destructor student: " << this << endl;
}
ostream& Student::print(ostream& os){
    Person::print(os);
    os << endl;
    os << "An studiu:" << an_studiu << "\nGrupa:" << grupa << "\nMedia generala:" << media;
    return os;
}
ostream& operator<<(ostream &os, Student &s){
    return s.print(os);
}

int main() {
    Person * p = new Person("Flavia", 40, "123456");
    cout << *p << endl;
    delete p;
    p = new Student("Flavia", 23, "99999", 2, 1, 5.5);
    cout << *p << endl;
    delete p; /* apeleaza destructorul. */
    return 0;
}
