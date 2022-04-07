//
// Created by alex on 07.04.2022.
//

#ifndef P2_CURS8_STR_H
#define P2_CURS8_STR_H
#include <string.h>
#include <iostream>
using namespace std;
class str{
private:
    char * content;
public:
    str();
    str(char *);
    str(str &);
    virtual ~str();
    void afisare();
    char * get_content() const;
    str * modify(int pos, char c){
        char * result = new char[sizeof(this->content) + 1];
        strcpy(result, this->content);
        result[pos] = c;
        return new str(result); /* Apel ctor explicit cu AVT */
    }
};


#endif //P2_CURS8_STR_H
