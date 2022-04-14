//
// Created by alex on 14.04.2022.
//

#ifndef P2_CURS8_ENGINE_H
#define P2_CURS8_ENGINE_H

/* car, engine -> relatie de compozitie -- clasa car are ciclul de viata dependent puternic de ciclul de viata al clasei engine. */
#include <iostream>
using std::ostream;
class Engine {
    int cp;
public:
    Engine(int cP): cp{cP} {/* ... */}
    friend ostream& operator<<(ostream & os, Engine &e){
        os << "Motor\nCai putere: " << e.cp << " cP";
        return os;
    }
    virtual ~Engine(){
        cout << "Apel destructor Engine\n";
    }
    Engine& operator=(const Engine&e){
        if(this == &e)
            return * this;
        this->cp = e.cp;
        return * this;
    }
};


#endif //P2_CURS8_ENGINE_H
