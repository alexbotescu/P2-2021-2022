#ifndef P2_CURS8_STR_H
#define P2_CURS8_STR_H
#include <string.h>
#include <math.h>
#include <iostream>
#define MAX_LEN (int) pow(10, 6)
using namespace std;
class str{
private:
    static int STR_ID;
    char * content;
    int index;
public:
    str();
    str(char *);
    str(str &);
    static int get_STR_ID(){
        return STR_ID;
    }
    /* Operatori pentru string:
     *  +/2 --> friend
     *  ori/2 --> friend
     *  </2, >/2, <=/2, >=/2, ==/2, !=/2 --> friend
     *  +=/1, *=/1 --> membra
     *  --/1, --/1 --> membra
     *  !/1 --> friend
     */
    virtual ~str();
    void afisare();
    char * get_content() const;
    str * modify(int pos, char c){
        char * result = new char[sizeof(this->content) + 1];
        strcpy(result, this->content);
        result[pos] = c;
        return new str(result); /* Apel ctor explicit cu AVT */
    }
    friend str operator+(const str&, const str&);
    friend str operator*(const str&, const int);
    friend bool operator<(const str&, const str&);
    friend bool operator>(const str&, const str&);
    friend bool operator<=(const str&, const str&);
    friend bool operator>=(const str&, const str&);
    friend bool operator==(const str&, const str&);
    friend bool operator!=(const str&, const str&);
    friend istream& operator>>(istream&, str&);
    friend ostream& operator<<(ostream&, const str&);
    str& operator+=(const str&);
    str& operator*=(const int);
    str& operator--();
    str& operator--(int); /* postfixat */
    friend bool operator!(const str&);
    friend int len(const str &);
};


#endif //P2_CURS8_STR_H
