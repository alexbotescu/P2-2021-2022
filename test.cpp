#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

class Fn{
    int x, y;
public: Fn(int _x, int (*f)(int)): x{_x}, y{f(x)} { }
    void show(){cout << "Fn(" << x << ")=" << y << endl;}
};

template <class T> class list{
    T vals[100];
    int index;
public:
    list(): index{0} { }
    void append(T x){
        vals[index++]=x;
    }
    friend ostream& operator<<(ostream& os, const list & l){
        os << "[";
        int i;
        for(i=0;i<l.index;i++)
            os << l.vals[i] << ',';
        os << "\b]";
        return os;
    }
};



class Entity{
private:
    int val;
    Entity(int value): val{value} { }
public:
    static Entity entity;
};

class Person{
    char * name;
    int age;
public:
    Person(): name{nullptr}, age{0}{ }
    Person& Name(char * name){
        this->name=new char[sizeof(name)+1];
        strcpy(this->name, name);
        return *this;
    }
    Person& Age(int age){
        this->age=age;
        return *this;
    }
    Person& print(){
        if(this->name)
            cout << this->name << " ";
        cout << this->age;
        cout << endl;
        return * this;
    }
};

int g(int x){
    return sqrt(x);
}
int h(int x){
    return pow(x, 2);
}

template <class T> class Ptr{
    T * ptr;
public:
    Ptr(): ptr{nullptr} { }
    Ptr(T * p) { ptr = p; }
    virtual ~Ptr(){ if(ptr) delete ptr; }
    friend ostream& operator<<(ostream&os, Ptr &p){os << *(p.ptr); return os; }
};


int main() {
    Ptr<int> *p = new Ptr(new int(5));
    Ptr<float> *p1 = new Ptr<float>(new float(7.0));
    Ptr<float> *p2 = p1;
    cout << *p;
    cout << endl << *p1 << endl << *p2;
    delete p;


   /* Fn f(2, g);
    f.show();
    Fn * i = new Fn(4, h);
    i->show();
    delete i;
   list<list<int>> l;
   int matr[3][3] = {
           {1,2,3},
           {4,5,6},
           {7,8,9}
   };
   int i,j;
   for(i=0;i<3;++i){
       list<int> l1;
       for(j=0;j<3;++j)
           l1.append(matr[i][j]);
       l.append(l1);
   }
   cout << l; */


}