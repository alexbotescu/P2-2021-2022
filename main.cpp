#include "str.cpp"
void fun1(str s){
    cout << "In fun1()\n";
}
void fun2(str &s){
    cout << "In fun2()\n";
}
void fun3(str * s){
    cout << "In fun3()\n";
}
int main(int argc, char ** argv) {
    /*
    str s("anamaria");
    str s1;
    s.afisare();
    s1.afisare(); */

    str * s = new str("UVT"); /* Apel ctor explicit cu UVT */
    str s2 = *s; /* Apel ctor de copiere cu UVT */
    s->afisare(); /* UVT */
    str * s1;
    s1 = s->modify(0, 'A'); /* Apel ctor explicit cu AVT */
    fun1(*s); /* Apel ctor de copiere cu UVT In fun1()*/
    delete s; /* Apel destructor cu UVT */
    fun2(*s1); /* nu se apeleaza ctor-ul de copiere... pt ca arg e transmis prin referinta (implicit adresa) */
    fun3(s1); /* nu se apeleaza ctor-ul de copiere... pt ca arg e transmis ca pointer (implicit adresa) */
    s1->afisare();
    delete s1; /* Apel destructor cu AVT */
    return 0;
}
