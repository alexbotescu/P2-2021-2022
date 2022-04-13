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

void curs8(){
    /*
    str s("anamaria");
    str s1;
    s.afisare();
    s1.afisare(); */

    str * s = new str("UVT"); /* Apel ctor explicit cu UVT */
    str s2 = *s; /* Apel ctor de copiere cu UVT */
    cout << "Lungime sir s2:" << len(s2) << endl;
    s->afisare(); /* UVT */
    str * s1;
    s1 = s->modify(0, 'A'); /* Apel ctor explicit cu AVT */
    fun1(*s); /* Apel ctor de copiere cu UVT In fun1()*/
    cout << str::get_STR_ID() << " obiecte create\n";
    delete s; /* Apel destructor cu UVT */
    cout << str::get_STR_ID() << " obiecte create\n";
    fun2(*s1); /* nu se apeleaza ctor-ul de copiere... pt ca arg e transmis prin referinta (implicit adresa) */
    fun3(s1); /* nu se apeleaza ctor-ul de copiere... pt ca arg e transmis ca pointer (implicit adresa) */
    s1->afisare();
    cout << "Lungime sir s1:" << len(*s1) << endl;
    delete s1; /* Apel destructor cu AVT */
    cout << str::get_STR_ID() << " obiecte create\n";
}
void curs9(){
    str s("anamaria");
    str s1("iani");
  /*  cout << s << endl;
    cout << s1 << endl;
    cout << s + s1 << endl; */
  str s2;
 /* cin >> s2;cout << s2 << endl; */ /* test the <<, >>. */
  cout << s + s1 << endl;
  s += s1;
  cout << "Dupa modificare:\ns=" << s << endl; /* test the +=. */
 // cout << s1 * 3 << endl;
 // s2 += s1;
 // cout << "Dupa modificare: " <<  s2 << endl;
 //   cout << s1 + s2 << endl;
}
int main(int argc, char ** argv) {
/*    curs8(); */
curs9();
    return 0;
}
