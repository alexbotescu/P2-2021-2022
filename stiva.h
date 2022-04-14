//
// Created by alex on 14.04.2022.
//

#ifndef P2_CURS8_STIVA_H
#define P2_CURS8_STIVA_H
#include <iostream>
using namespace std;

template <class T> class stiva {
    T * elements;
    int capacity;
    int index;
    bool __isempty() const{
        return this->index == 0;
    }
public:
    T getFirst(){
        return (this->elements != nullptr) ? this->elements[0] : T();
    }
    stiva(){
        elements = nullptr;
    }
    stiva(int capacity){
        if(capacity > 0){
            this->elements = new T[capacity];
        }
    }
    virtual ~stiva(){
        if(this->elements != nullptr)
            delete [] this->elements;
    }
    void push(T element){
        elements[index++] = element;
    }
    T top() {
        return this->elements[index-1];
    }
    friend bool operator!(stiva <T> & s){
        return s.__isempty();
    }
    T pop(){
        T aux = this->top();
        this->index--;
        return aux;
    }
    friend ostream& operator<<(ostream & os, stiva<T> & s){
            os << "[";
            while(!(!s)){
                os << s.pop() << ", ";
            }
            os << "\b\b]";
            return os;
    }
};


#endif //P2_CURS8_STIVA_H
