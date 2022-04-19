//
// Created by alex on 19.04.2022.
//

#ifndef P2_CURS8_PERSON_H
#define P2_CURS8_PERSON_H
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
    void print(ostream &);
    friend ostream& operator<<(ostream &, Person &);
};
#endif //P2_CURS8_PERSON_H
