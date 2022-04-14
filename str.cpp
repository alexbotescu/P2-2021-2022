#include "str.h"
int str::STR_ID = 0;
str::str(){
    ++ STR_ID; /* creating new object */
    this->content = new char[sizeof("") + 1];
    strcpy(this->content, "");
    cout << "Apel ctor implicit\n";
}
str& str::operator=(const str& s){
    if(this == &s)
        return * this;
    this->content = new char[sizeof(s.content)];
    strcpy(this->content, s.content);
    return * this;
}
str::str(char * content){
    if(content != nullptr){
        ++ STR_ID; /* creating new object */
        this->content = new char[strlen(content) + 1];
        strcpy(this->content, content);
        index = sizeof(content)-1;
        cout << "Apel ctor explicit cu " << content << "\n";
    }
}
str::str(str &other){
    if(this != &other){
        ++ STR_ID; /* creating new object */
        if(other.content != nullptr){
            this->content = new char[strlen(other.content) + 1];
            strcpy(this->content, other.content);
            index = sizeof(content)-1;
            cout << "Apel ctor de copiere cu " << content << "\n";
        }
        else this->content = nullptr;
    }
}
str::~str(){
    cout << "Apel destructor cu " << this->content << endl;
    if(this->content != nullptr)
        delete [] this->content;
    -- STR_ID; /* we gonna delete an object. */
}
void str::afisare(){
    cout << this->content << endl;
}
char * str::get_content() const{
    return this->content;
}

int len(const str &s){
    char * str = s.content;
    int l = 0;
    while(str[l++] != NULL);
    return l - 1;
}

str operator+(const str&s1, const str&s2){
    char * content = new char[strlen(s1.content) + strlen(s2.content) + 1];
    strcpy(content, s1.content);
    strcat(content, s2.content);
    content[strlen(content)] = '\0';
    str res(content);
    return res;
}
str operator*(const str&s, const int n){
    if(n <= 0){
        str temp("");
        return temp; /* sirul vid */
    }
    str res;
    int i;
    for(i=1;i<=n;i++){
        res = res + s;
    }
    return res;
}
bool operator<(const str&s1, const str&s2){
    return len(s1) < len(s2);
}
bool operator>(const str&s1, const str&s2){
    return len(s1) > len(s2);
}
bool operator<=(const str&s1, const str&s2){
    return len(s1) <= len(s2);
}
bool operator>=(const str&s1, const str&s2){
    return len(s1) >= len(s2);
}
bool operator==(const str&s1, const str&s2){
    return (strcmp(s1.content, s2.content) == 0);
}
bool operator!=(const str&s1, const str&s2){
    return (strcmp(s1.content, s2.content) != 0);
}
istream& operator>>(istream& is, str& s){
    char orig_content[MAX_LEN];
    is.getline(orig_content, MAX_LEN-1);
    s.content = new char[strlen(orig_content) + 1];
    strcpy(s.content, orig_content);
    return is;
}
ostream& operator<<(ostream&os,const str& s){
    os << s.content;
    return os;
}
str& str::operator+=(const str&s){
    *this = *this + s;
    return *this;
}
str& str::operator*=(const int n){
    *this = *this * n;
    return *this;
}
str& str::operator--(){ /* postfixat */
    /* a-- */
    str aux = *this;
    /* prelucrez pe this... */
    this->content[index] = ' ';
    index--;
    return aux;
}
str& str::operator--(int x) { /* prefixat */
    this->content[index] = ' ';
    index--;
    return *this;
}
bool operator!(const str& s){
    return s.content == NULL || s.content == nullptr || sizeof(s.content) == 0;
}

str& str::operator=(const char *s){
    this->content = new char[sizeof(s)];
    strcpy(this->content, s);
    return * this;
}