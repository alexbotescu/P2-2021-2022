#include <iostream>
using namespace std;

template <class T1, class T2> class Pair{
private:
    T1 x; // (x, y)
    T2 y;
public:
    Pair(T1 _x, T2 _y): x(_x), y(_y) { }
    friend ostream& operator<<(ostream &os, Pair<T1, T2> &p){
        os << '(' << p.x << ',' << p.y << ')';
        return os;
    }
};